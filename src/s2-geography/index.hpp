
#pragma once

#include <unordered_set>

#include "geography.hpp"

namespace s2geography {

class S2GeographyIndex {
public:
    S2GeographyIndex(MutableS2ShapeIndex::Options options = MutableS2ShapeIndex::Options())
        : index_(options) {}

    void Add(const S2Geography& geog, int value) {
        values_.reserve(values_.size() + geog.num_shapes());
        for (int i = 0; i < geog.num_shapes(); i++) {
            int new_shape_id = index_.Add(geog.Shape(i));
            values_.resize(new_shape_id + 1);
            values_[new_shape_id] = value;
        }
    }

    int value(int shape_id) const {
        return values_[shape_id];
    }

    const MutableS2ShapeIndex& ShapeIndex() const {
        return index_;
    }

    MutableS2ShapeIndex& MutableShapeIndex() {
        return index_;
    }

    class Iterator {
    public:
        Iterator(const S2GeographyIndex* index):
            index_(index), iterator_(&index_->ShapeIndex()) {}

        const std::unordered_set<int>& Query(const std::vector<S2CellId>& covering,
                                             bool reset = true) {
            if (reset) {
                might_intersect_indices_.clear();
            }

            for (const S2CellId& query_cell: covering) {
                Query(query_cell, false);
            }

            return might_intersect_indices_;
        }

        const std::unordered_set<int>& Query(const S2CellId& cell_id, bool reset = true) {
            if (reset) {
                might_intersect_indices_.clear();
            }

            S2ShapeIndex::CellRelation relation = iterator_.Locate(cell_id);

            if (relation == S2ShapeIndex::CellRelation::INDEXED) {
                // We're in luck! these indexes have this cell in common
                // add all the shapes it contains as possible intersectors
                const S2ShapeIndexCell& index_cell = iterator_.cell();
                for (int k = 0; k < index_cell.num_clipped(); k++) {
                    int shape_id = index_cell.clipped(k).shape_id();
                    might_intersect_indices_.insert(index_->value(shape_id));
                }
            } else if(relation  == S2ShapeIndex::CellRelation::SUBDIVIDED) {
                // Promising! the index has a child cell of iterator_.id()
                // (at which iterator_ is now positioned). Keep iterating until the
                // iterator is done OR we're no longer at a child cell of
                // iterator_.id(). The ordering of the iterator isn't guaranteed anywhere
                // in the documentation; however, this ordering would be consistent
                // with that of a Normalized S2CellUnion.
                while (!iterator_.done() && cell_id.contains(iterator_.id())) {
                    // add all the shapes the child cell contains as possible intersectors
                    const S2ShapeIndexCell& index_cell = iterator_.cell();
                    for (int k = 0; k < index_cell.num_clipped(); k++) {
                        int shape_id = index_cell.clipped(k).shape_id();
                        might_intersect_indices_.insert(index_->value(shape_id));
                    }

                    // go to the next cell in the index
                    iterator_.Next();
                }
            }

            // else: relation == S2ShapeIndex::CellRelation::DISJOINT (do nothing)

            return might_intersect_indices_;
        }

    private:
        const S2GeographyIndex* index_;
        MutableS2ShapeIndex::Iterator iterator_;
        std::unordered_set<int> might_intersect_indices_;
    };

private:
    MutableS2ShapeIndex index_;
    std::vector<int> values_;
};

};
