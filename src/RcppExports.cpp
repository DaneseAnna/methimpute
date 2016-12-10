// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fitHMM
List fitHMM(const IntegerVector& counts, const NumericVector& distances, const List& params, const int& algorithm);
RcppExport SEXP popmeth_fitHMM(SEXP countsSEXP, SEXP distancesSEXP, SEXP paramsSEXP, SEXP algorithmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type distances(distancesSEXP);
    Rcpp::traits::input_parameter< const List& >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< const int& >::type algorithm(algorithmSEXP);
    rcpp_result_gen = Rcpp::wrap(fitHMM(counts, distances, params, algorithm));
    return rcpp_result_gen;
END_RCPP
}
// fitBinomialTestHMM
List fitBinomialTestHMM(const IntegerVector& counts_total, const IntegerVector& counts_meth, const NumericVector& distances, const List& params, const int& algorithm);
RcppExport SEXP popmeth_fitBinomialTestHMM(SEXP counts_totalSEXP, SEXP counts_methSEXP, SEXP distancesSEXP, SEXP paramsSEXP, SEXP algorithmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type counts_total(counts_totalSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type counts_meth(counts_methSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type distances(distancesSEXP);
    Rcpp::traits::input_parameter< const List& >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< const int& >::type algorithm(algorithmSEXP);
    rcpp_result_gen = Rcpp::wrap(fitBinomialTestHMM(counts_total, counts_meth, distances, params, algorithm));
    return rcpp_result_gen;
END_RCPP
}
// fitBinomialTestHMMcontext
List fitBinomialTestHMMcontext(const IntegerVector& counts_total, const IntegerVector& counts_meth, const IntegerVector& context, const NumericVector& distances, const List& params, const int& algorithm);
RcppExport SEXP popmeth_fitBinomialTestHMMcontext(SEXP counts_totalSEXP, SEXP counts_methSEXP, SEXP contextSEXP, SEXP distancesSEXP, SEXP paramsSEXP, SEXP algorithmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type counts_total(counts_totalSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type counts_meth(counts_methSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type context(contextSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type distances(distancesSEXP);
    Rcpp::traits::input_parameter< const List& >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< const int& >::type algorithm(algorithmSEXP);
    rcpp_result_gen = Rcpp::wrap(fitBinomialTestHMMcontext(counts_total, counts_meth, context, distances, params, algorithm));
    return rcpp_result_gen;
END_RCPP
}
// fitHMMratio
List fitHMMratio(const NumericVector& ratio, const NumericVector& distances, const List& params, const int& algorithm);
RcppExport SEXP popmeth_fitHMMratio(SEXP ratioSEXP, SEXP distancesSEXP, SEXP paramsSEXP, SEXP algorithmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type ratio(ratioSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type distances(distancesSEXP);
    Rcpp::traits::input_parameter< const List& >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< const int& >::type algorithm(algorithmSEXP);
    rcpp_result_gen = Rcpp::wrap(fitHMMratio(ratio, distances, params, algorithm));
    return rcpp_result_gen;
END_RCPP
}
// fitMultiHMM
List fitMultiHMM(const IntegerMatrix& counts, const NumericVector& distances, const List& params);
RcppExport SEXP popmeth_fitMultiHMM(SEXP countsSEXP, SEXP distancesSEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type distances(distancesSEXP);
    Rcpp::traits::input_parameter< const List& >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(fitMultiHMM(counts, distances, params));
    return rcpp_result_gen;
END_RCPP
}
// cleanup
void cleanup();
RcppExport SEXP popmeth_cleanup() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    cleanup();
    return R_NilValue;
END_RCPP
}
