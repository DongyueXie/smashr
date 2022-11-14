// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cxxtitable
List cxxtitable(SEXP sig);
RcppExport SEXP _smashr_cxxtitable(SEXP sigSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sig(sigSEXP);
    rcpp_result_gen = Rcpp::wrap(cxxtitable(sig));
    return rcpp_result_gen;
END_RCPP
}
// cxxtirtable
NumericMatrix cxxtirtable(SEXP sig);
RcppExport SEXP _smashr_cxxtirtable(SEXP sigSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sig(sigSEXP);
    rcpp_result_gen = Rcpp::wrap(cxxtirtable(sig));
    return rcpp_result_gen;
END_RCPP
}
// cxxreverse_gwave
NumericVector cxxreverse_gwave(SEXP estimate, SEXP pmat, SEXP qmat);
RcppExport SEXP _smashr_cxxreverse_gwave(SEXP estimateSEXP, SEXP pmatSEXP, SEXP qmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type estimate(estimateSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pmat(pmatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type qmat(qmatSEXP);
    rcpp_result_gen = Rcpp::wrap(cxxreverse_gwave(estimate, pmat, qmat));
    return rcpp_result_gen;
END_RCPP
}
// cxxreverse_gvwave
NumericVector cxxreverse_gvwave(SEXP estimate, SEXP pmat, SEXP qmat);
RcppExport SEXP _smashr_cxxreverse_gvwave(SEXP estimateSEXP, SEXP pmatSEXP, SEXP qmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type estimate(estimateSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pmat(pmatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type qmat(qmatSEXP);
    rcpp_result_gen = Rcpp::wrap(cxxreverse_gvwave(estimate, pmat, qmat));
    return rcpp_result_gen;
END_RCPP
}
// cxxSParentTItable
NumericVector cxxSParentTItable(SEXP sig);
RcppExport SEXP _smashr_cxxSParentTItable(SEXP sigSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sig(sigSEXP);
    rcpp_result_gen = Rcpp::wrap(cxxSParentTItable(sig));
    return rcpp_result_gen;
END_RCPP
}
// cxxreverse_pwave
NumericVector cxxreverse_pwave(SEXP estimate, SEXP pmat, SEXP qmat);
RcppExport SEXP _smashr_cxxreverse_pwave(SEXP estimateSEXP, SEXP pmatSEXP, SEXP qmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type estimate(estimateSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pmat(pmatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type qmat(qmatSEXP);
    rcpp_result_gen = Rcpp::wrap(cxxreverse_pwave(estimate, pmat, qmat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_smashr_cxxtitable", (DL_FUNC) &_smashr_cxxtitable, 1},
    {"_smashr_cxxtirtable", (DL_FUNC) &_smashr_cxxtirtable, 1},
    {"_smashr_cxxreverse_gwave", (DL_FUNC) &_smashr_cxxreverse_gwave, 3},
    {"_smashr_cxxreverse_gvwave", (DL_FUNC) &_smashr_cxxreverse_gvwave, 3},
    {"_smashr_cxxSParentTItable", (DL_FUNC) &_smashr_cxxSParentTItable, 1},
    {"_smashr_cxxreverse_pwave", (DL_FUNC) &_smashr_cxxreverse_pwave, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_smashr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
