// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cpp_s2_is_collection
LogicalVector cpp_s2_is_collection(List geog);
RcppExport SEXP _s2_cpp_s2_is_collection(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_is_collection(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_dimension
IntegerVector cpp_s2_dimension(List geog);
RcppExport SEXP _s2_cpp_s2_dimension(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_dimension(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_num_points
IntegerVector cpp_s2_num_points(List geog);
RcppExport SEXP _s2_cpp_s2_num_points(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_num_points(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_area
NumericVector cpp_s2_area(List geog);
RcppExport SEXP _s2_cpp_s2_area(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_area(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_length
NumericVector cpp_s2_length(List geog);
RcppExport SEXP _s2_cpp_s2_length(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_length(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_perimeter
NumericVector cpp_s2_perimeter(List geog);
RcppExport SEXP _s2_cpp_s2_perimeter(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_perimeter(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_x
NumericVector cpp_s2_x(List geog);
RcppExport SEXP _s2_cpp_s2_x(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_x(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_y
NumericVector cpp_s2_y(List geog);
RcppExport SEXP _s2_cpp_s2_y(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_y(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_distance
NumericVector cpp_s2_distance(List geog1, List geog2);
RcppExport SEXP _s2_cpp_s2_distance(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_distance(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_max_distance
NumericVector cpp_s2_max_distance(List geog1, List geog2);
RcppExport SEXP _s2_cpp_s2_max_distance(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_max_distance(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_geog_point
List cpp_s2_geog_point(NumericVector x, NumericVector y);
RcppExport SEXP _s2_cpp_s2_geog_point(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_geog_point(x, y));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_make_line
List cpp_s2_make_line(NumericVector x, NumericVector y, IntegerVector featureId);
RcppExport SEXP _s2_cpp_s2_make_line(SEXP xSEXP, SEXP ySEXP, SEXP featureIdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type featureId(featureIdSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_make_line(x, y, featureId));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_make_polygon
List cpp_s2_make_polygon(NumericVector x, NumericVector y, IntegerVector featureId, IntegerVector ringId, bool oriented);
RcppExport SEXP _s2_cpp_s2_make_polygon(SEXP xSEXP, SEXP ySEXP, SEXP featureIdSEXP, SEXP ringIdSEXP, SEXP orientedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type featureId(featureIdSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ringId(ringIdSEXP);
    Rcpp::traits::input_parameter< bool >::type oriented(orientedSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_make_polygon(x, y, featureId, ringId, oriented));
    return rcpp_result_gen;
END_RCPP
}
// s2_geography_from_wkb
List s2_geography_from_wkb(List wkb, bool oriented);
RcppExport SEXP _s2_s2_geography_from_wkb(SEXP wkbSEXP, SEXP orientedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< bool >::type oriented(orientedSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_geography_from_wkb(wkb, oriented));
    return rcpp_result_gen;
END_RCPP
}
// s2_geography_from_wkt
List s2_geography_from_wkt(CharacterVector wkt, bool oriented);
RcppExport SEXP _s2_s2_geography_from_wkt(SEXP wktSEXP, SEXP orientedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< bool >::type oriented(orientedSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_geography_from_wkt(wkt, oriented));
    return rcpp_result_gen;
END_RCPP
}
// s2_geography_full
List s2_geography_full(LogicalVector x);
RcppExport SEXP _s2_s2_geography_full(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_geography_full(x));
    return rcpp_result_gen;
END_RCPP
}
// s2_geography_to_wkt
CharacterVector s2_geography_to_wkt(List s2_geography, int precision, bool trim);
RcppExport SEXP _s2_s2_geography_to_wkt(SEXP s2_geographySEXP, SEXP precisionSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_geography(s2_geographySEXP);
    Rcpp::traits::input_parameter< int >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< bool >::type trim(trimSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_geography_to_wkt(s2_geography, precision, trim));
    return rcpp_result_gen;
END_RCPP
}
// s2_geography_to_wkb
List s2_geography_to_wkb(List s2_geography, int endian);
RcppExport SEXP _s2_s2_geography_to_wkb(SEXP s2_geographySEXP, SEXP endianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_geography(s2_geographySEXP);
    Rcpp::traits::input_parameter< int >::type endian(endianSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_geography_to_wkb(s2_geography, endian));
    return rcpp_result_gen;
END_RCPP
}
// s2_geography_format
CharacterVector s2_geography_format(List s2_geography, int maxCoords);
RcppExport SEXP _s2_s2_geography_format(SEXP s2_geographySEXP, SEXP maxCoordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_geography(s2_geographySEXP);
    Rcpp::traits::input_parameter< int >::type maxCoords(maxCoordsSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_geography_format(s2_geography, maxCoords));
    return rcpp_result_gen;
END_RCPP
}
// s2_latlng_from_numeric
List s2_latlng_from_numeric(NumericVector lat, NumericVector lng);
RcppExport SEXP _s2_s2_latlng_from_numeric(SEXP latSEXP, SEXP lngSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lat(latSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lng(lngSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_latlng_from_numeric(lat, lng));
    return rcpp_result_gen;
END_RCPP
}
// s2_latlng_from_s2_point
List s2_latlng_from_s2_point(List s2_point);
RcppExport SEXP _s2_s2_latlng_from_s2_point(SEXP s2_pointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_point(s2_pointSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_latlng_from_s2_point(s2_point));
    return rcpp_result_gen;
END_RCPP
}
// data_frame_from_s2_latlng
List data_frame_from_s2_latlng(List xptr);
RcppExport SEXP _s2_data_frame_from_s2_latlng(SEXP xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type xptr(xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(data_frame_from_s2_latlng(xptr));
    return rcpp_result_gen;
END_RCPP
}
// s2_latlng_from_wkb
List s2_latlng_from_wkb(List wkb);
RcppExport SEXP _s2_s2_latlng_from_wkb(SEXP wkbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wkb(wkbSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_latlng_from_wkb(wkb));
    return rcpp_result_gen;
END_RCPP
}
// wkb_from_s2_latlng
List wkb_from_s2_latlng(List s2_latlng, int endian);
RcppExport SEXP _s2_wkb_from_s2_latlng(SEXP s2_latlngSEXP, SEXP endianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_latlng(s2_latlngSEXP);
    Rcpp::traits::input_parameter< int >::type endian(endianSEXP);
    rcpp_result_gen = Rcpp::wrap(wkb_from_s2_latlng(s2_latlng, endian));
    return rcpp_result_gen;
END_RCPP
}
// s2_point_from_numeric
List s2_point_from_numeric(NumericVector x, NumericVector y, NumericVector z);
RcppExport SEXP _s2_s2_point_from_numeric(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_point_from_numeric(x, y, z));
    return rcpp_result_gen;
END_RCPP
}
// s2_point_from_s2_latlng
List s2_point_from_s2_latlng(List s2_latlng);
RcppExport SEXP _s2_s2_point_from_s2_latlng(SEXP s2_latlngSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_latlng(s2_latlngSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_point_from_s2_latlng(s2_latlng));
    return rcpp_result_gen;
END_RCPP
}
// data_frame_from_s2_point
List data_frame_from_s2_point(List s2_point);
RcppExport SEXP _s2_data_frame_from_s2_point(SEXP s2_pointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_point(s2_pointSEXP);
    rcpp_result_gen = Rcpp::wrap(data_frame_from_s2_point(s2_point));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_intersects
LogicalVector cpp_s2_intersects(List geog1, List geog2, int model);
RcppExport SEXP _s2_cpp_s2_intersects(SEXP geog1SEXP, SEXP geog2SEXP, SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< int >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_intersects(geog1, geog2, model));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_equals
LogicalVector cpp_s2_equals(List geog1, List geog2, int model);
RcppExport SEXP _s2_cpp_s2_equals(SEXP geog1SEXP, SEXP geog2SEXP, SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< int >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_equals(geog1, geog2, model));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_contains
LogicalVector cpp_s2_contains(List geog1, List geog2, int model);
RcppExport SEXP _s2_cpp_s2_contains(SEXP geog1SEXP, SEXP geog2SEXP, SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< int >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_contains(geog1, geog2, model));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_dwithin
LogicalVector cpp_s2_dwithin(List geog1, List geog2, NumericVector distance);
RcppExport SEXP _s2_cpp_s2_dwithin(SEXP geog1SEXP, SEXP geog2SEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_dwithin(geog1, geog2, distance));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_intersects_box
LogicalVector cpp_s2_intersects_box(List geog, NumericVector lng1, NumericVector lat1, NumericVector lng2, NumericVector lat2, IntegerVector detail, int model);
RcppExport SEXP _s2_cpp_s2_intersects_box(SEXP geogSEXP, SEXP lng1SEXP, SEXP lat1SEXP, SEXP lng2SEXP, SEXP lat2SEXP, SEXP detailSEXP, SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lng1(lng1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lng2(lng2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type detail(detailSEXP);
    Rcpp::traits::input_parameter< int >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_intersects_box(geog, lng1, lat1, lng2, lat2, detail, model));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_intersection
List cpp_s2_intersection(List geog1, List geog2, int model);
RcppExport SEXP _s2_cpp_s2_intersection(SEXP geog1SEXP, SEXP geog2SEXP, SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< int >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_intersection(geog1, geog2, model));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_union
List cpp_s2_union(List geog1, List geog2, int model);
RcppExport SEXP _s2_cpp_s2_union(SEXP geog1SEXP, SEXP geog2SEXP, SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< int >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_union(geog1, geog2, model));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_difference
List cpp_s2_difference(List geog1, List geog2, int model);
RcppExport SEXP _s2_cpp_s2_difference(SEXP geog1SEXP, SEXP geog2SEXP, SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< int >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_difference(geog1, geog2, model));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_sym_difference
List cpp_s2_sym_difference(List geog1, List geog2, int model);
RcppExport SEXP _s2_cpp_s2_sym_difference(SEXP geog1SEXP, SEXP geog2SEXP, SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< int >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_sym_difference(geog1, geog2, model));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_union_agg
List cpp_s2_union_agg(List geog, bool naRm);
RcppExport SEXP _s2_cpp_s2_union_agg(SEXP geogSEXP, SEXP naRmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    Rcpp::traits::input_parameter< bool >::type naRm(naRmSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_union_agg(geog, naRm));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_centroid_agg
List cpp_s2_centroid_agg(List geog, bool naRm);
RcppExport SEXP _s2_cpp_s2_centroid_agg(SEXP geogSEXP, SEXP naRmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    Rcpp::traits::input_parameter< bool >::type naRm(naRmSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_centroid_agg(geog, naRm));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_closest_point
List cpp_s2_closest_point(List geog1, List geog2);
RcppExport SEXP _s2_cpp_s2_closest_point(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_closest_point(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_nearest_feature
List cpp_s2_nearest_feature(List geog1, List geog2);
RcppExport SEXP _s2_cpp_s2_nearest_feature(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_nearest_feature(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_centroid
List cpp_s2_centroid(List geog);
RcppExport SEXP _s2_cpp_s2_centroid(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_centroid(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_boundary
List cpp_s2_boundary(List geog);
RcppExport SEXP _s2_cpp_s2_boundary(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_boundary(geog));
    return rcpp_result_gen;
END_RCPP
}
// s2_xptr_test
List s2_xptr_test(R_xlen_t size);
RcppExport SEXP _s2_s2_xptr_test(SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< R_xlen_t >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_xptr_test(size));
    return rcpp_result_gen;
END_RCPP
}
// s2_xptr_test_op
void s2_xptr_test_op(List s2_xptr_test);
RcppExport SEXP _s2_s2_xptr_test_op(SEXP s2_xptr_testSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_xptr_test(s2_xptr_testSEXP);
    s2_xptr_test_op(s2_xptr_test);
    return R_NilValue;
END_RCPP
}
// s2_set_snaplevel
IntegerVector s2_set_snaplevel(int snap);
RcppExport SEXP _s2_s2_set_snaplevel(SEXP snapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type snap(snapSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_set_snaplevel(snap));
    return rcpp_result_gen;
END_RCPP
}
// s2_get_snaplevel
IntegerVector s2_get_snaplevel(int snap);
RcppExport SEXP _s2_s2_get_snaplevel(SEXP snapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type snap(snapSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_get_snaplevel(snap));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_s2_cpp_s2_is_collection", (DL_FUNC) &_s2_cpp_s2_is_collection, 1},
    {"_s2_cpp_s2_dimension", (DL_FUNC) &_s2_cpp_s2_dimension, 1},
    {"_s2_cpp_s2_num_points", (DL_FUNC) &_s2_cpp_s2_num_points, 1},
    {"_s2_cpp_s2_area", (DL_FUNC) &_s2_cpp_s2_area, 1},
    {"_s2_cpp_s2_length", (DL_FUNC) &_s2_cpp_s2_length, 1},
    {"_s2_cpp_s2_perimeter", (DL_FUNC) &_s2_cpp_s2_perimeter, 1},
    {"_s2_cpp_s2_x", (DL_FUNC) &_s2_cpp_s2_x, 1},
    {"_s2_cpp_s2_y", (DL_FUNC) &_s2_cpp_s2_y, 1},
    {"_s2_cpp_s2_distance", (DL_FUNC) &_s2_cpp_s2_distance, 2},
    {"_s2_cpp_s2_max_distance", (DL_FUNC) &_s2_cpp_s2_max_distance, 2},
    {"_s2_cpp_s2_geog_point", (DL_FUNC) &_s2_cpp_s2_geog_point, 2},
    {"_s2_cpp_s2_make_line", (DL_FUNC) &_s2_cpp_s2_make_line, 3},
    {"_s2_cpp_s2_make_polygon", (DL_FUNC) &_s2_cpp_s2_make_polygon, 5},
    {"_s2_s2_geography_from_wkb", (DL_FUNC) &_s2_s2_geography_from_wkb, 2},
    {"_s2_s2_geography_from_wkt", (DL_FUNC) &_s2_s2_geography_from_wkt, 2},
    {"_s2_s2_geography_full", (DL_FUNC) &_s2_s2_geography_full, 1},
    {"_s2_s2_geography_to_wkt", (DL_FUNC) &_s2_s2_geography_to_wkt, 3},
    {"_s2_s2_geography_to_wkb", (DL_FUNC) &_s2_s2_geography_to_wkb, 2},
    {"_s2_s2_geography_format", (DL_FUNC) &_s2_s2_geography_format, 2},
    {"_s2_s2_latlng_from_numeric", (DL_FUNC) &_s2_s2_latlng_from_numeric, 2},
    {"_s2_s2_latlng_from_s2_point", (DL_FUNC) &_s2_s2_latlng_from_s2_point, 1},
    {"_s2_data_frame_from_s2_latlng", (DL_FUNC) &_s2_data_frame_from_s2_latlng, 1},
    {"_s2_s2_latlng_from_wkb", (DL_FUNC) &_s2_s2_latlng_from_wkb, 1},
    {"_s2_wkb_from_s2_latlng", (DL_FUNC) &_s2_wkb_from_s2_latlng, 2},
    {"_s2_s2_point_from_numeric", (DL_FUNC) &_s2_s2_point_from_numeric, 3},
    {"_s2_s2_point_from_s2_latlng", (DL_FUNC) &_s2_s2_point_from_s2_latlng, 1},
    {"_s2_data_frame_from_s2_point", (DL_FUNC) &_s2_data_frame_from_s2_point, 1},
    {"_s2_cpp_s2_intersects", (DL_FUNC) &_s2_cpp_s2_intersects, 3},
    {"_s2_cpp_s2_equals", (DL_FUNC) &_s2_cpp_s2_equals, 3},
    {"_s2_cpp_s2_contains", (DL_FUNC) &_s2_cpp_s2_contains, 3},
    {"_s2_cpp_s2_dwithin", (DL_FUNC) &_s2_cpp_s2_dwithin, 3},
    {"_s2_cpp_s2_intersects_box", (DL_FUNC) &_s2_cpp_s2_intersects_box, 7},
    {"_s2_cpp_s2_intersection", (DL_FUNC) &_s2_cpp_s2_intersection, 3},
    {"_s2_cpp_s2_union", (DL_FUNC) &_s2_cpp_s2_union, 3},
    {"_s2_cpp_s2_difference", (DL_FUNC) &_s2_cpp_s2_difference, 3},
    {"_s2_cpp_s2_sym_difference", (DL_FUNC) &_s2_cpp_s2_sym_difference, 3},
    {"_s2_cpp_s2_union_agg", (DL_FUNC) &_s2_cpp_s2_union_agg, 2},
    {"_s2_cpp_s2_centroid_agg", (DL_FUNC) &_s2_cpp_s2_centroid_agg, 2},
    {"_s2_cpp_s2_closest_point", (DL_FUNC) &_s2_cpp_s2_closest_point, 2},
    {"_s2_cpp_s2_nearest_feature", (DL_FUNC) &_s2_cpp_s2_nearest_feature, 2},
    {"_s2_cpp_s2_centroid", (DL_FUNC) &_s2_cpp_s2_centroid, 1},
    {"_s2_cpp_s2_boundary", (DL_FUNC) &_s2_cpp_s2_boundary, 1},
    {"_s2_s2_xptr_test", (DL_FUNC) &_s2_s2_xptr_test, 1},
    {"_s2_s2_xptr_test_op", (DL_FUNC) &_s2_s2_xptr_test_op, 1},
    {"_s2_s2_set_snaplevel", (DL_FUNC) &_s2_s2_set_snaplevel, 1},
    {"_s2_s2_get_snaplevel", (DL_FUNC) &_s2_s2_get_snaplevel, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_s2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
