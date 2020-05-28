// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// s2BuildPolygonsLayer
List s2BuildPolygonsLayer(List ptrs, SEXP b_ptr);
RcppExport SEXP _libs2_s2BuildPolygonsLayer(SEXP ptrsSEXP, SEXP b_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ptrs(ptrsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type b_ptr(b_ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(s2BuildPolygonsLayer(ptrs, b_ptr));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_iscollection
LogicalVector libs2_cpp_s2_iscollection(List geog);
RcppExport SEXP _libs2_libs2_cpp_s2_iscollection(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_iscollection(geog));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_dimension
IntegerVector libs2_cpp_s2_dimension(List geog);
RcppExport SEXP _libs2_libs2_cpp_s2_dimension(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_dimension(geog));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_numpoints
IntegerVector libs2_cpp_s2_numpoints(List geog);
RcppExport SEXP _libs2_libs2_cpp_s2_numpoints(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_numpoints(geog));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_area
NumericVector libs2_cpp_s2_area(List geog);
RcppExport SEXP _libs2_libs2_cpp_s2_area(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_area(geog));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_length
NumericVector libs2_cpp_s2_length(List geog);
RcppExport SEXP _libs2_libs2_cpp_s2_length(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_length(geog));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_perimeter
NumericVector libs2_cpp_s2_perimeter(List geog);
RcppExport SEXP _libs2_libs2_cpp_s2_perimeter(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_perimeter(geog));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_x
NumericVector libs2_cpp_s2_x(List geog);
RcppExport SEXP _libs2_libs2_cpp_s2_x(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_x(geog));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_y
NumericVector libs2_cpp_s2_y(List geog);
RcppExport SEXP _libs2_libs2_cpp_s2_y(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_y(geog));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_distance
NumericVector libs2_cpp_s2_distance(List geog1, List geog2);
RcppExport SEXP _libs2_libs2_cpp_s2_distance(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_distance(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_maxdistance
NumericVector libs2_cpp_s2_maxdistance(List geog1, List geog2);
RcppExport SEXP _libs2_libs2_cpp_s2_maxdistance(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_maxdistance(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_intersects
LogicalVector libs2_cpp_s2_intersects(List geog1, List geog2);
RcppExport SEXP _libs2_libs2_cpp_s2_intersects(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_intersects(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_equals
LogicalVector libs2_cpp_s2_equals(List geog1, List geog2);
RcppExport SEXP _libs2_libs2_cpp_s2_equals(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_equals(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_contains
LogicalVector libs2_cpp_s2_contains(List geog1, List geog2);
RcppExport SEXP _libs2_libs2_cpp_s2_contains(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_contains(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_dwithin
LogicalVector libs2_cpp_s2_dwithin(List geog1, List geog2, NumericVector distance);
RcppExport SEXP _libs2_libs2_cpp_s2_dwithin(SEXP geog1SEXP, SEXP geog2SEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_dwithin(geog1, geog2, distance));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_intersectsbox
LogicalVector libs2_cpp_s2_intersectsbox(List geog, NumericVector lng1, NumericVector lat1, NumericVector lng2, NumericVector lat2, IntegerVector detail);
RcppExport SEXP _libs2_libs2_cpp_s2_intersectsbox(SEXP geogSEXP, SEXP lng1SEXP, SEXP lat1SEXP, SEXP lng2SEXP, SEXP lat2SEXP, SEXP detailSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lng1(lng1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lng2(lng2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type detail(detailSEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_intersectsbox(geog, lng1, lat1, lng2, lat2, detail));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_intersection
List libs2_cpp_s2_intersection(List geog1, List geog2);
RcppExport SEXP _libs2_libs2_cpp_s2_intersection(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_intersection(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_union
List libs2_cpp_s2_union(List geog1, List geog2);
RcppExport SEXP _libs2_libs2_cpp_s2_union(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_union(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_difference
List libs2_cpp_s2_difference(List geog1, List geog2);
RcppExport SEXP _libs2_libs2_cpp_s2_difference(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_difference(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_union_agg
List libs2_cpp_s2_union_agg(List geog, bool naRm);
RcppExport SEXP _libs2_libs2_cpp_s2_union_agg(SEXP geogSEXP, SEXP naRmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    Rcpp::traits::input_parameter< bool >::type naRm(naRmSEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_union_agg(geog, naRm));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_centroid_agg
List libs2_cpp_s2_centroid_agg(List geog, bool naRm);
RcppExport SEXP _libs2_libs2_cpp_s2_centroid_agg(SEXP geogSEXP, SEXP naRmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    Rcpp::traits::input_parameter< bool >::type naRm(naRmSEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_centroid_agg(geog, naRm));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_closestpoint
List libs2_cpp_s2_closestpoint(List geog1, List geog2);
RcppExport SEXP _libs2_libs2_cpp_s2_closestpoint(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_closestpoint(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_centroid
List libs2_cpp_s2_centroid(List geog);
RcppExport SEXP _libs2_libs2_cpp_s2_centroid(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_centroid(geog));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_s2_boundary
List libs2_cpp_s2_boundary(List geog);
RcppExport SEXP _libs2_libs2_cpp_s2_boundary(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(libs2_cpp_s2_boundary(geog));
    return rcpp_result_gen;
END_RCPP
}
// s2polygon_intersects
List s2polygon_intersects(List x, List y);
RcppExport SEXP _libs2_s2polygon_intersects(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(s2polygon_intersects(x, y));
    return rcpp_result_gen;
END_RCPP
}
// s2polyline_intersects
List s2polyline_intersects(List x, List y);
RcppExport SEXP _libs2_s2polyline_intersects(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(s2polyline_intersects(x, y));
    return rcpp_result_gen;
END_RCPP
}
// s2polygon_is_valid
LogicalVector s2polygon_is_valid(List ptrs);
RcppExport SEXP _libs2_s2polygon_is_valid(SEXP ptrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ptrs(ptrsSEXP);
    rcpp_result_gen = Rcpp::wrap(s2polygon_is_valid(ptrs));
    return rcpp_result_gen;
END_RCPP
}
// s2polyline_is_valid
LogicalVector s2polyline_is_valid(List ptrs);
RcppExport SEXP _libs2_s2polyline_is_valid(SEXP ptrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ptrs(ptrsSEXP);
    rcpp_result_gen = Rcpp::wrap(s2polyline_is_valid(ptrs));
    return rcpp_result_gen;
END_RCPP
}
// s2geography_from_wkb
List s2geography_from_wkb(List wkb, bool oriented);
RcppExport SEXP _libs2_s2geography_from_wkb(SEXP wkbSEXP, SEXP orientedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< bool >::type oriented(orientedSEXP);
    rcpp_result_gen = Rcpp::wrap(s2geography_from_wkb(wkb, oriented));
    return rcpp_result_gen;
END_RCPP
}
// s2geography_from_wkt
List s2geography_from_wkt(CharacterVector wkt, bool oriented);
RcppExport SEXP _libs2_s2geography_from_wkt(SEXP wktSEXP, SEXP orientedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< bool >::type oriented(orientedSEXP);
    rcpp_result_gen = Rcpp::wrap(s2geography_from_wkt(wkt, oriented));
    return rcpp_result_gen;
END_RCPP
}
// s2geography_full
List s2geography_full(LogicalVector x);
RcppExport SEXP _libs2_s2geography_full(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(s2geography_full(x));
    return rcpp_result_gen;
END_RCPP
}
// s2geography_to_wkt
CharacterVector s2geography_to_wkt(List s2geography, int precision, bool trim);
RcppExport SEXP _libs2_s2geography_to_wkt(SEXP s2geographySEXP, SEXP precisionSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2geography(s2geographySEXP);
    Rcpp::traits::input_parameter< int >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< bool >::type trim(trimSEXP);
    rcpp_result_gen = Rcpp::wrap(s2geography_to_wkt(s2geography, precision, trim));
    return rcpp_result_gen;
END_RCPP
}
// s2geography_to_wkb
List s2geography_to_wkb(List s2geography, int endian);
RcppExport SEXP _libs2_s2geography_to_wkb(SEXP s2geographySEXP, SEXP endianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2geography(s2geographySEXP);
    Rcpp::traits::input_parameter< int >::type endian(endianSEXP);
    rcpp_result_gen = Rcpp::wrap(s2geography_to_wkb(s2geography, endian));
    return rcpp_result_gen;
END_RCPP
}
// s2geography_format
CharacterVector s2geography_format(List s2geography, int maxCoords);
RcppExport SEXP _libs2_s2geography_format(SEXP s2geographySEXP, SEXP maxCoordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2geography(s2geographySEXP);
    Rcpp::traits::input_parameter< int >::type maxCoords(maxCoordsSEXP);
    rcpp_result_gen = Rcpp::wrap(s2geography_format(s2geography, maxCoords));
    return rcpp_result_gen;
END_RCPP
}
// s2latlng_from_numeric
List s2latlng_from_numeric(NumericVector lat, NumericVector lng);
RcppExport SEXP _libs2_s2latlng_from_numeric(SEXP latSEXP, SEXP lngSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lat(latSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lng(lngSEXP);
    rcpp_result_gen = Rcpp::wrap(s2latlng_from_numeric(lat, lng));
    return rcpp_result_gen;
END_RCPP
}
// s2latlng_from_s2point
List s2latlng_from_s2point(List s2point);
RcppExport SEXP _libs2_s2latlng_from_s2point(SEXP s2pointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2point(s2pointSEXP);
    rcpp_result_gen = Rcpp::wrap(s2latlng_from_s2point(s2point));
    return rcpp_result_gen;
END_RCPP
}
// data_frame_from_s2latlng
List data_frame_from_s2latlng(List xptr);
RcppExport SEXP _libs2_data_frame_from_s2latlng(SEXP xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type xptr(xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(data_frame_from_s2latlng(xptr));
    return rcpp_result_gen;
END_RCPP
}
// s2polyline_lengths
NumericVector s2polyline_lengths(List s2polyline, bool degrees);
RcppExport SEXP _libs2_s2polyline_lengths(SEXP s2polylineSEXP, SEXP degreesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2polyline(s2polylineSEXP);
    Rcpp::traits::input_parameter< bool >::type degrees(degreesSEXP);
    rcpp_result_gen = Rcpp::wrap(s2polyline_lengths(s2polyline, degrees));
    return rcpp_result_gen;
END_RCPP
}
// s2polygon_areas
NumericVector s2polygon_areas(List s2polygon);
RcppExport SEXP _libs2_s2polygon_areas(SEXP s2polygonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2polygon(s2polygonSEXP);
    rcpp_result_gen = Rcpp::wrap(s2polygon_areas(s2polygon));
    return rcpp_result_gen;
END_RCPP
}
// s2point_from_numeric
List s2point_from_numeric(NumericVector x, NumericVector y, NumericVector z);
RcppExport SEXP _libs2_s2point_from_numeric(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(s2point_from_numeric(x, y, z));
    return rcpp_result_gen;
END_RCPP
}
// s2point_from_s2latlng
List s2point_from_s2latlng(List s2latlng);
RcppExport SEXP _libs2_s2point_from_s2latlng(SEXP s2latlngSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2latlng(s2latlngSEXP);
    rcpp_result_gen = Rcpp::wrap(s2point_from_s2latlng(s2latlng));
    return rcpp_result_gen;
END_RCPP
}
// data_frame_from_s2point
List data_frame_from_s2point(List s2point);
RcppExport SEXP _libs2_data_frame_from_s2point(SEXP s2pointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2point(s2pointSEXP);
    rcpp_result_gen = Rcpp::wrap(data_frame_from_s2point(s2point));
    return rcpp_result_gen;
END_RCPP
}
// s2polygon_from_s2polyline
List s2polygon_from_s2polyline(List s2polyline, bool oriented, bool check);
RcppExport SEXP _libs2_s2polygon_from_s2polyline(SEXP s2polylineSEXP, SEXP orientedSEXP, SEXP checkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2polyline(s2polylineSEXP);
    Rcpp::traits::input_parameter< bool >::type oriented(orientedSEXP);
    Rcpp::traits::input_parameter< bool >::type check(checkSEXP);
    rcpp_result_gen = Rcpp::wrap(s2polygon_from_s2polyline(s2polyline, oriented, check));
    return rcpp_result_gen;
END_RCPP
}
// s2polyline_from_s2polygon
List s2polyline_from_s2polygon(List s2polygon, bool close);
RcppExport SEXP _libs2_s2polyline_from_s2polygon(SEXP s2polygonSEXP, SEXP closeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2polygon(s2polygonSEXP);
    Rcpp::traits::input_parameter< bool >::type close(closeSEXP);
    rcpp_result_gen = Rcpp::wrap(s2polyline_from_s2polygon(s2polygon, close));
    return rcpp_result_gen;
END_RCPP
}
// s2polygon_format
CharacterVector s2polygon_format(List s2polygon, int nVertices);
RcppExport SEXP _libs2_s2polygon_format(SEXP s2polygonSEXP, SEXP nVerticesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2polygon(s2polygonSEXP);
    Rcpp::traits::input_parameter< int >::type nVertices(nVerticesSEXP);
    rcpp_result_gen = Rcpp::wrap(s2polygon_format(s2polygon, nVertices));
    return rcpp_result_gen;
END_RCPP
}
// s2polyline_from_s2latlng
List s2polyline_from_s2latlng(List s2latlng);
RcppExport SEXP _libs2_s2polyline_from_s2latlng(SEXP s2latlngSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2latlng(s2latlngSEXP);
    rcpp_result_gen = Rcpp::wrap(s2polyline_from_s2latlng(s2latlng));
    return rcpp_result_gen;
END_RCPP
}
// s2polyline_to_s2latlng
List s2polyline_to_s2latlng(List s2polyline);
RcppExport SEXP _libs2_s2polyline_to_s2latlng(SEXP s2polylineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2polyline(s2polylineSEXP);
    rcpp_result_gen = Rcpp::wrap(s2polyline_to_s2latlng(s2polyline));
    return rcpp_result_gen;
END_RCPP
}
// s2polyline_format
CharacterVector s2polyline_format(List s2polyline, int nVertices);
RcppExport SEXP _libs2_s2polyline_format(SEXP s2polylineSEXP, SEXP nVerticesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2polyline(s2polylineSEXP);
    Rcpp::traits::input_parameter< int >::type nVertices(nVerticesSEXP);
    rcpp_result_gen = Rcpp::wrap(s2polyline_format(s2polyline, nVertices));
    return rcpp_result_gen;
END_RCPP
}
// s2xptr_test
List s2xptr_test(R_xlen_t size);
RcppExport SEXP _libs2_s2xptr_test(SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< R_xlen_t >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(s2xptr_test(size));
    return rcpp_result_gen;
END_RCPP
}
// s2xptr_test_op
void s2xptr_test_op(List s2xptr_test);
RcppExport SEXP _libs2_s2xptr_test_op(SEXP s2xptr_testSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2xptr_test(s2xptr_testSEXP);
    s2xptr_test_op(s2xptr_test);
    return R_NilValue;
END_RCPP
}
// s2_set_snaplevel
IntegerVector s2_set_snaplevel(int snap);
RcppExport SEXP _libs2_s2_set_snaplevel(SEXP snapSEXP) {
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
RcppExport SEXP _libs2_s2_get_snaplevel(SEXP snapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type snap(snapSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_get_snaplevel(snap));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_test_indexing
void libs2_cpp_test_indexing();
RcppExport SEXP _libs2_libs2_cpp_test_indexing() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    libs2_cpp_test_indexing();
    return R_NilValue;
END_RCPP
}
// s2latlng_from_wkb
List s2latlng_from_wkb(List wkb);
RcppExport SEXP _libs2_s2latlng_from_wkb(SEXP wkbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wkb(wkbSEXP);
    rcpp_result_gen = Rcpp::wrap(s2latlng_from_wkb(wkb));
    return rcpp_result_gen;
END_RCPP
}
// s2polyline_from_wkb
List s2polyline_from_wkb(List wkb);
RcppExport SEXP _libs2_s2polyline_from_wkb(SEXP wkbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wkb(wkbSEXP);
    rcpp_result_gen = Rcpp::wrap(s2polyline_from_wkb(wkb));
    return rcpp_result_gen;
END_RCPP
}
// s2polygon_from_wkb
List s2polygon_from_wkb(List wkb, bool oriented, bool check, double omit_poles);
RcppExport SEXP _libs2_s2polygon_from_wkb(SEXP wkbSEXP, SEXP orientedSEXP, SEXP checkSEXP, SEXP omit_polesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< bool >::type oriented(orientedSEXP);
    Rcpp::traits::input_parameter< bool >::type check(checkSEXP);
    Rcpp::traits::input_parameter< double >::type omit_poles(omit_polesSEXP);
    rcpp_result_gen = Rcpp::wrap(s2polygon_from_wkb(wkb, oriented, check, omit_poles));
    return rcpp_result_gen;
END_RCPP
}
// wkb_from_s2latlng
List wkb_from_s2latlng(List s2latlng, int endian);
RcppExport SEXP _libs2_wkb_from_s2latlng(SEXP s2latlngSEXP, SEXP endianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2latlng(s2latlngSEXP);
    Rcpp::traits::input_parameter< int >::type endian(endianSEXP);
    rcpp_result_gen = Rcpp::wrap(wkb_from_s2latlng(s2latlng, endian));
    return rcpp_result_gen;
END_RCPP
}
// wkb_from_s2polyline
List wkb_from_s2polyline(List s2polyline, int endian);
RcppExport SEXP _libs2_wkb_from_s2polyline(SEXP s2polylineSEXP, SEXP endianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2polyline(s2polylineSEXP);
    Rcpp::traits::input_parameter< int >::type endian(endianSEXP);
    rcpp_result_gen = Rcpp::wrap(wkb_from_s2polyline(s2polyline, endian));
    return rcpp_result_gen;
END_RCPP
}
// wkb_from_s2polygon
List wkb_from_s2polygon(List s2polygon, int endian);
RcppExport SEXP _libs2_wkb_from_s2polygon(SEXP s2polygonSEXP, SEXP endianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2polygon(s2polygonSEXP);
    Rcpp::traits::input_parameter< int >::type endian(endianSEXP);
    rcpp_result_gen = Rcpp::wrap(wkb_from_s2polygon(s2polygon, endian));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_libs2_s2BuildPolygonsLayer", (DL_FUNC) &_libs2_s2BuildPolygonsLayer, 2},
    {"_libs2_libs2_cpp_s2_iscollection", (DL_FUNC) &_libs2_libs2_cpp_s2_iscollection, 1},
    {"_libs2_libs2_cpp_s2_dimension", (DL_FUNC) &_libs2_libs2_cpp_s2_dimension, 1},
    {"_libs2_libs2_cpp_s2_numpoints", (DL_FUNC) &_libs2_libs2_cpp_s2_numpoints, 1},
    {"_libs2_libs2_cpp_s2_area", (DL_FUNC) &_libs2_libs2_cpp_s2_area, 1},
    {"_libs2_libs2_cpp_s2_length", (DL_FUNC) &_libs2_libs2_cpp_s2_length, 1},
    {"_libs2_libs2_cpp_s2_perimeter", (DL_FUNC) &_libs2_libs2_cpp_s2_perimeter, 1},
    {"_libs2_libs2_cpp_s2_x", (DL_FUNC) &_libs2_libs2_cpp_s2_x, 1},
    {"_libs2_libs2_cpp_s2_y", (DL_FUNC) &_libs2_libs2_cpp_s2_y, 1},
    {"_libs2_libs2_cpp_s2_distance", (DL_FUNC) &_libs2_libs2_cpp_s2_distance, 2},
    {"_libs2_libs2_cpp_s2_maxdistance", (DL_FUNC) &_libs2_libs2_cpp_s2_maxdistance, 2},
    {"_libs2_libs2_cpp_s2_intersects", (DL_FUNC) &_libs2_libs2_cpp_s2_intersects, 2},
    {"_libs2_libs2_cpp_s2_equals", (DL_FUNC) &_libs2_libs2_cpp_s2_equals, 2},
    {"_libs2_libs2_cpp_s2_contains", (DL_FUNC) &_libs2_libs2_cpp_s2_contains, 2},
    {"_libs2_libs2_cpp_s2_dwithin", (DL_FUNC) &_libs2_libs2_cpp_s2_dwithin, 3},
    {"_libs2_libs2_cpp_s2_intersectsbox", (DL_FUNC) &_libs2_libs2_cpp_s2_intersectsbox, 6},
    {"_libs2_libs2_cpp_s2_intersection", (DL_FUNC) &_libs2_libs2_cpp_s2_intersection, 2},
    {"_libs2_libs2_cpp_s2_union", (DL_FUNC) &_libs2_libs2_cpp_s2_union, 2},
    {"_libs2_libs2_cpp_s2_difference", (DL_FUNC) &_libs2_libs2_cpp_s2_difference, 2},
    {"_libs2_libs2_cpp_s2_union_agg", (DL_FUNC) &_libs2_libs2_cpp_s2_union_agg, 2},
    {"_libs2_libs2_cpp_s2_centroid_agg", (DL_FUNC) &_libs2_libs2_cpp_s2_centroid_agg, 2},
    {"_libs2_libs2_cpp_s2_closestpoint", (DL_FUNC) &_libs2_libs2_cpp_s2_closestpoint, 2},
    {"_libs2_libs2_cpp_s2_centroid", (DL_FUNC) &_libs2_libs2_cpp_s2_centroid, 1},
    {"_libs2_libs2_cpp_s2_boundary", (DL_FUNC) &_libs2_libs2_cpp_s2_boundary, 1},
    {"_libs2_s2polygon_intersects", (DL_FUNC) &_libs2_s2polygon_intersects, 2},
    {"_libs2_s2polyline_intersects", (DL_FUNC) &_libs2_s2polyline_intersects, 2},
    {"_libs2_s2polygon_is_valid", (DL_FUNC) &_libs2_s2polygon_is_valid, 1},
    {"_libs2_s2polyline_is_valid", (DL_FUNC) &_libs2_s2polyline_is_valid, 1},
    {"_libs2_s2geography_from_wkb", (DL_FUNC) &_libs2_s2geography_from_wkb, 2},
    {"_libs2_s2geography_from_wkt", (DL_FUNC) &_libs2_s2geography_from_wkt, 2},
    {"_libs2_s2geography_full", (DL_FUNC) &_libs2_s2geography_full, 1},
    {"_libs2_s2geography_to_wkt", (DL_FUNC) &_libs2_s2geography_to_wkt, 3},
    {"_libs2_s2geography_to_wkb", (DL_FUNC) &_libs2_s2geography_to_wkb, 2},
    {"_libs2_s2geography_format", (DL_FUNC) &_libs2_s2geography_format, 2},
    {"_libs2_s2latlng_from_numeric", (DL_FUNC) &_libs2_s2latlng_from_numeric, 2},
    {"_libs2_s2latlng_from_s2point", (DL_FUNC) &_libs2_s2latlng_from_s2point, 1},
    {"_libs2_data_frame_from_s2latlng", (DL_FUNC) &_libs2_data_frame_from_s2latlng, 1},
    {"_libs2_s2polyline_lengths", (DL_FUNC) &_libs2_s2polyline_lengths, 2},
    {"_libs2_s2polygon_areas", (DL_FUNC) &_libs2_s2polygon_areas, 1},
    {"_libs2_s2point_from_numeric", (DL_FUNC) &_libs2_s2point_from_numeric, 3},
    {"_libs2_s2point_from_s2latlng", (DL_FUNC) &_libs2_s2point_from_s2latlng, 1},
    {"_libs2_data_frame_from_s2point", (DL_FUNC) &_libs2_data_frame_from_s2point, 1},
    {"_libs2_s2polygon_from_s2polyline", (DL_FUNC) &_libs2_s2polygon_from_s2polyline, 3},
    {"_libs2_s2polyline_from_s2polygon", (DL_FUNC) &_libs2_s2polyline_from_s2polygon, 2},
    {"_libs2_s2polygon_format", (DL_FUNC) &_libs2_s2polygon_format, 2},
    {"_libs2_s2polyline_from_s2latlng", (DL_FUNC) &_libs2_s2polyline_from_s2latlng, 1},
    {"_libs2_s2polyline_to_s2latlng", (DL_FUNC) &_libs2_s2polyline_to_s2latlng, 1},
    {"_libs2_s2polyline_format", (DL_FUNC) &_libs2_s2polyline_format, 2},
    {"_libs2_s2xptr_test", (DL_FUNC) &_libs2_s2xptr_test, 1},
    {"_libs2_s2xptr_test_op", (DL_FUNC) &_libs2_s2xptr_test_op, 1},
    {"_libs2_s2_set_snaplevel", (DL_FUNC) &_libs2_s2_set_snaplevel, 1},
    {"_libs2_s2_get_snaplevel", (DL_FUNC) &_libs2_s2_get_snaplevel, 1},
    {"_libs2_libs2_cpp_test_indexing", (DL_FUNC) &_libs2_libs2_cpp_test_indexing, 0},
    {"_libs2_s2latlng_from_wkb", (DL_FUNC) &_libs2_s2latlng_from_wkb, 1},
    {"_libs2_s2polyline_from_wkb", (DL_FUNC) &_libs2_s2polyline_from_wkb, 1},
    {"_libs2_s2polygon_from_wkb", (DL_FUNC) &_libs2_s2polygon_from_wkb, 4},
    {"_libs2_wkb_from_s2latlng", (DL_FUNC) &_libs2_wkb_from_s2latlng, 2},
    {"_libs2_wkb_from_s2polyline", (DL_FUNC) &_libs2_wkb_from_s2polyline, 2},
    {"_libs2_wkb_from_s2polygon", (DL_FUNC) &_libs2_wkb_from_s2polygon, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_libs2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
