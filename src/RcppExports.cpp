// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// PowerSet
List PowerSet(int iK);
RcppExport SEXP eDMA_PowerSet(SEXP iKSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type iK(iKSEXP);
    rcpp_result_gen = Rcpp::wrap(PowerSet(iK));
    return rcpp_result_gen;
END_RCPP
}
// funcEstimate_Eff
List funcEstimate_Eff(arma::vec vY, arma::mat mX, arma::vec vDelta, double dAlpha, arma::vec vKeep, double dBeta, bool bZellnerPrior, double dG);
RcppExport SEXP eDMA_funcEstimate_Eff(SEXP vYSEXP, SEXP mXSEXP, SEXP vDeltaSEXP, SEXP dAlphaSEXP, SEXP vKeepSEXP, SEXP dBetaSEXP, SEXP bZellnerPriorSEXP, SEXP dGSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type vY(vYSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mX(mXSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vDelta(vDeltaSEXP);
    Rcpp::traits::input_parameter< double >::type dAlpha(dAlphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vKeep(vKeepSEXP);
    Rcpp::traits::input_parameter< double >::type dBeta(dBetaSEXP);
    Rcpp::traits::input_parameter< bool >::type bZellnerPrior(bZellnerPriorSEXP);
    Rcpp::traits::input_parameter< double >::type dG(dGSEXP);
    rcpp_result_gen = Rcpp::wrap(funcEstimate_Eff(vY, mX, vDelta, dAlpha, vKeep, dBeta, bZellnerPrior, dG));
    return rcpp_result_gen;
END_RCPP
}
// funcEstimate_Eff_par
List funcEstimate_Eff_par(arma::vec vY, arma::mat mX, arma::vec vDelta, double dAlpha, arma::vec vKeep, double dBeta, bool bZellnerPrior, double dG, int iCores);
RcppExport SEXP eDMA_funcEstimate_Eff_par(SEXP vYSEXP, SEXP mXSEXP, SEXP vDeltaSEXP, SEXP dAlphaSEXP, SEXP vKeepSEXP, SEXP dBetaSEXP, SEXP bZellnerPriorSEXP, SEXP dGSEXP, SEXP iCoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type vY(vYSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mX(mXSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vDelta(vDeltaSEXP);
    Rcpp::traits::input_parameter< double >::type dAlpha(dAlphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vKeep(vKeepSEXP);
    Rcpp::traits::input_parameter< double >::type dBeta(dBetaSEXP);
    Rcpp::traits::input_parameter< bool >::type bZellnerPrior(bZellnerPriorSEXP);
    Rcpp::traits::input_parameter< double >::type dG(dGSEXP);
    Rcpp::traits::input_parameter< int >::type iCores(iCoresSEXP);
    rcpp_result_gen = Rcpp::wrap(funcEstimate_Eff_par(vY, mX, vDelta, dAlpha, vKeep, dBeta, bZellnerPrior, dG, iCores));
    return rcpp_result_gen;
END_RCPP
}
// SimulateDLM
List SimulateDLM(int iT, arma::mat mX, arma::vec vBeta0, arma::mat mW, double dV, double dPhi);
RcppExport SEXP eDMA_SimulateDLM(SEXP iTSEXP, SEXP mXSEXP, SEXP vBeta0SEXP, SEXP mWSEXP, SEXP dVSEXP, SEXP dPhiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type iT(iTSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mX(mXSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vBeta0(vBeta0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mW(mWSEXP);
    Rcpp::traits::input_parameter< double >::type dV(dVSEXP);
    Rcpp::traits::input_parameter< double >::type dPhi(dPhiSEXP);
    rcpp_result_gen = Rcpp::wrap(SimulateDLM(iT, mX, vBeta0, mW, dV, dPhi));
    return rcpp_result_gen;
END_RCPP
}
