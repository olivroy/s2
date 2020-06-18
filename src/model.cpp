
#include <sstream>

#include "s2/s2boolean_operation.h"
#include "model.h"

#include <Rcpp.h>
using namespace Rcpp;

S2BooleanOperation::PolygonModel get_polygon_model(int m) {
  switch (m) {
    case 0: return S2BooleanOperation::PolygonModel::OPEN;
    case 1: return S2BooleanOperation::PolygonModel::SEMI_OPEN;
    case 2: return S2BooleanOperation::PolygonModel::CLOSED;
    default:
      // # nocov start
      std::stringstream err;
      err << "Invalid value for model: " << m;
      stop(err.str());
      // # nocov end
  }
}

S2BooleanOperation::PolylineModel get_polyline_model(int m) {
  switch (m) {
    case 0: return S2BooleanOperation::PolylineModel::OPEN;
    case 1: return S2BooleanOperation::PolylineModel::SEMI_OPEN;
    case 2: return S2BooleanOperation::PolylineModel::CLOSED;
    default:
      // # nocov start
      std::stringstream err;
      err << "Invalid value for model: " << m;
      stop(err.str());
      // # nocov end
  }
}
