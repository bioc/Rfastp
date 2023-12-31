// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// runFastp
int runFastp(std::string read1, std::string read2, std::string outputFastq, std::string unpaired, std::string failedOut, bool merge, std::string mergeOut, bool phred64, bool interleaved, bool fixMGIid, bool adapterTrimming, std::string adapterSequenceRead1, std::string adapterSequenceRead2, std::string adapterFasta, int trimFrontRead1, int trimTailRead1, int trimFrontRead2, int trimTailRead2, int maxLengthRead1, int maxLengthRead2, bool forceTrimPolyG, bool disableTrimPolyG, int minLengthPolyG, bool trimPolyX, int minLengthPolyX, bool cutLowQualFront, bool cutLowQualTail, bool cutSlideWindowRight, int cutWindowSize, int cutMeanQual, int cutFrontWindowSize, int cutFrontMeanQual, int cutTailWindowSize, int cutTailMeanQual, int cutSlideWindowSize, int cutSlideWindowQual, bool qualityFiltering, int qualityFilterPhred, int qualityFilterPercent, int maxNfilter, int averageQualFilter, bool lengthFiltering, int minReadLength, int maxReadLength, bool lowComplexityFiltering, int minComplexity, std::string index1Filter, std::string index2Filter, int maxIndexMismatch, bool correctionOverlap, int minOverlapLength, int maxOverlapMismatch, int maxOverlapMismatchPercentage, bool umi, bool umiIgnoreSeqNameSpace, std::string umiLoc, int umiLength, std::string umiPrefix, int umiSkipBaseLength, bool overrepresentationAnalysis, int overrepresentationSampling, int splitOutput, int splitByLines, int thread, bool verbose);
RcppExport SEXP _Rfastp_runFastp(SEXP read1SEXP, SEXP read2SEXP, SEXP outputFastqSEXP, SEXP unpairedSEXP, SEXP failedOutSEXP, SEXP mergeSEXP, SEXP mergeOutSEXP, SEXP phred64SEXP, SEXP interleavedSEXP, SEXP fixMGIidSEXP, SEXP adapterTrimmingSEXP, SEXP adapterSequenceRead1SEXP, SEXP adapterSequenceRead2SEXP, SEXP adapterFastaSEXP, SEXP trimFrontRead1SEXP, SEXP trimTailRead1SEXP, SEXP trimFrontRead2SEXP, SEXP trimTailRead2SEXP, SEXP maxLengthRead1SEXP, SEXP maxLengthRead2SEXP, SEXP forceTrimPolyGSEXP, SEXP disableTrimPolyGSEXP, SEXP minLengthPolyGSEXP, SEXP trimPolyXSEXP, SEXP minLengthPolyXSEXP, SEXP cutLowQualFrontSEXP, SEXP cutLowQualTailSEXP, SEXP cutSlideWindowRightSEXP, SEXP cutWindowSizeSEXP, SEXP cutMeanQualSEXP, SEXP cutFrontWindowSizeSEXP, SEXP cutFrontMeanQualSEXP, SEXP cutTailWindowSizeSEXP, SEXP cutTailMeanQualSEXP, SEXP cutSlideWindowSizeSEXP, SEXP cutSlideWindowQualSEXP, SEXP qualityFilteringSEXP, SEXP qualityFilterPhredSEXP, SEXP qualityFilterPercentSEXP, SEXP maxNfilterSEXP, SEXP averageQualFilterSEXP, SEXP lengthFilteringSEXP, SEXP minReadLengthSEXP, SEXP maxReadLengthSEXP, SEXP lowComplexityFilteringSEXP, SEXP minComplexitySEXP, SEXP index1FilterSEXP, SEXP index2FilterSEXP, SEXP maxIndexMismatchSEXP, SEXP correctionOverlapSEXP, SEXP minOverlapLengthSEXP, SEXP maxOverlapMismatchSEXP, SEXP maxOverlapMismatchPercentageSEXP, SEXP umiSEXP, SEXP umiIgnoreSeqNameSpaceSEXP, SEXP umiLocSEXP, SEXP umiLengthSEXP, SEXP umiPrefixSEXP, SEXP umiSkipBaseLengthSEXP, SEXP overrepresentationAnalysisSEXP, SEXP overrepresentationSamplingSEXP, SEXP splitOutputSEXP, SEXP splitByLinesSEXP, SEXP threadSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type read1(read1SEXP);
    Rcpp::traits::input_parameter< std::string >::type read2(read2SEXP);
    Rcpp::traits::input_parameter< std::string >::type outputFastq(outputFastqSEXP);
    Rcpp::traits::input_parameter< std::string >::type unpaired(unpairedSEXP);
    Rcpp::traits::input_parameter< std::string >::type failedOut(failedOutSEXP);
    Rcpp::traits::input_parameter< bool >::type merge(mergeSEXP);
    Rcpp::traits::input_parameter< std::string >::type mergeOut(mergeOutSEXP);
    Rcpp::traits::input_parameter< bool >::type phred64(phred64SEXP);
    Rcpp::traits::input_parameter< bool >::type interleaved(interleavedSEXP);
    Rcpp::traits::input_parameter< bool >::type fixMGIid(fixMGIidSEXP);
    Rcpp::traits::input_parameter< bool >::type adapterTrimming(adapterTrimmingSEXP);
    Rcpp::traits::input_parameter< std::string >::type adapterSequenceRead1(adapterSequenceRead1SEXP);
    Rcpp::traits::input_parameter< std::string >::type adapterSequenceRead2(adapterSequenceRead2SEXP);
    Rcpp::traits::input_parameter< std::string >::type adapterFasta(adapterFastaSEXP);
    Rcpp::traits::input_parameter< int >::type trimFrontRead1(trimFrontRead1SEXP);
    Rcpp::traits::input_parameter< int >::type trimTailRead1(trimTailRead1SEXP);
    Rcpp::traits::input_parameter< int >::type trimFrontRead2(trimFrontRead2SEXP);
    Rcpp::traits::input_parameter< int >::type trimTailRead2(trimTailRead2SEXP);
    Rcpp::traits::input_parameter< int >::type maxLengthRead1(maxLengthRead1SEXP);
    Rcpp::traits::input_parameter< int >::type maxLengthRead2(maxLengthRead2SEXP);
    Rcpp::traits::input_parameter< bool >::type forceTrimPolyG(forceTrimPolyGSEXP);
    Rcpp::traits::input_parameter< bool >::type disableTrimPolyG(disableTrimPolyGSEXP);
    Rcpp::traits::input_parameter< int >::type minLengthPolyG(minLengthPolyGSEXP);
    Rcpp::traits::input_parameter< bool >::type trimPolyX(trimPolyXSEXP);
    Rcpp::traits::input_parameter< int >::type minLengthPolyX(minLengthPolyXSEXP);
    Rcpp::traits::input_parameter< bool >::type cutLowQualFront(cutLowQualFrontSEXP);
    Rcpp::traits::input_parameter< bool >::type cutLowQualTail(cutLowQualTailSEXP);
    Rcpp::traits::input_parameter< bool >::type cutSlideWindowRight(cutSlideWindowRightSEXP);
    Rcpp::traits::input_parameter< int >::type cutWindowSize(cutWindowSizeSEXP);
    Rcpp::traits::input_parameter< int >::type cutMeanQual(cutMeanQualSEXP);
    Rcpp::traits::input_parameter< int >::type cutFrontWindowSize(cutFrontWindowSizeSEXP);
    Rcpp::traits::input_parameter< int >::type cutFrontMeanQual(cutFrontMeanQualSEXP);
    Rcpp::traits::input_parameter< int >::type cutTailWindowSize(cutTailWindowSizeSEXP);
    Rcpp::traits::input_parameter< int >::type cutTailMeanQual(cutTailMeanQualSEXP);
    Rcpp::traits::input_parameter< int >::type cutSlideWindowSize(cutSlideWindowSizeSEXP);
    Rcpp::traits::input_parameter< int >::type cutSlideWindowQual(cutSlideWindowQualSEXP);
    Rcpp::traits::input_parameter< bool >::type qualityFiltering(qualityFilteringSEXP);
    Rcpp::traits::input_parameter< int >::type qualityFilterPhred(qualityFilterPhredSEXP);
    Rcpp::traits::input_parameter< int >::type qualityFilterPercent(qualityFilterPercentSEXP);
    Rcpp::traits::input_parameter< int >::type maxNfilter(maxNfilterSEXP);
    Rcpp::traits::input_parameter< int >::type averageQualFilter(averageQualFilterSEXP);
    Rcpp::traits::input_parameter< bool >::type lengthFiltering(lengthFilteringSEXP);
    Rcpp::traits::input_parameter< int >::type minReadLength(minReadLengthSEXP);
    Rcpp::traits::input_parameter< int >::type maxReadLength(maxReadLengthSEXP);
    Rcpp::traits::input_parameter< bool >::type lowComplexityFiltering(lowComplexityFilteringSEXP);
    Rcpp::traits::input_parameter< int >::type minComplexity(minComplexitySEXP);
    Rcpp::traits::input_parameter< std::string >::type index1Filter(index1FilterSEXP);
    Rcpp::traits::input_parameter< std::string >::type index2Filter(index2FilterSEXP);
    Rcpp::traits::input_parameter< int >::type maxIndexMismatch(maxIndexMismatchSEXP);
    Rcpp::traits::input_parameter< bool >::type correctionOverlap(correctionOverlapSEXP);
    Rcpp::traits::input_parameter< int >::type minOverlapLength(minOverlapLengthSEXP);
    Rcpp::traits::input_parameter< int >::type maxOverlapMismatch(maxOverlapMismatchSEXP);
    Rcpp::traits::input_parameter< int >::type maxOverlapMismatchPercentage(maxOverlapMismatchPercentageSEXP);
    Rcpp::traits::input_parameter< bool >::type umi(umiSEXP);
    Rcpp::traits::input_parameter< bool >::type umiIgnoreSeqNameSpace(umiIgnoreSeqNameSpaceSEXP);
    Rcpp::traits::input_parameter< std::string >::type umiLoc(umiLocSEXP);
    Rcpp::traits::input_parameter< int >::type umiLength(umiLengthSEXP);
    Rcpp::traits::input_parameter< std::string >::type umiPrefix(umiPrefixSEXP);
    Rcpp::traits::input_parameter< int >::type umiSkipBaseLength(umiSkipBaseLengthSEXP);
    Rcpp::traits::input_parameter< bool >::type overrepresentationAnalysis(overrepresentationAnalysisSEXP);
    Rcpp::traits::input_parameter< int >::type overrepresentationSampling(overrepresentationSamplingSEXP);
    Rcpp::traits::input_parameter< int >::type splitOutput(splitOutputSEXP);
    Rcpp::traits::input_parameter< int >::type splitByLines(splitByLinesSEXP);
    Rcpp::traits::input_parameter< int >::type thread(threadSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(runFastp(read1, read2, outputFastq, unpaired, failedOut, merge, mergeOut, phred64, interleaved, fixMGIid, adapterTrimming, adapterSequenceRead1, adapterSequenceRead2, adapterFasta, trimFrontRead1, trimTailRead1, trimFrontRead2, trimTailRead2, maxLengthRead1, maxLengthRead2, forceTrimPolyG, disableTrimPolyG, minLengthPolyG, trimPolyX, minLengthPolyX, cutLowQualFront, cutLowQualTail, cutSlideWindowRight, cutWindowSize, cutMeanQual, cutFrontWindowSize, cutFrontMeanQual, cutTailWindowSize, cutTailMeanQual, cutSlideWindowSize, cutSlideWindowQual, qualityFiltering, qualityFilterPhred, qualityFilterPercent, maxNfilter, averageQualFilter, lengthFiltering, minReadLength, maxReadLength, lowComplexityFiltering, minComplexity, index1Filter, index2Filter, maxIndexMismatch, correctionOverlap, minOverlapLength, maxOverlapMismatch, maxOverlapMismatchPercentage, umi, umiIgnoreSeqNameSpace, umiLoc, umiLength, umiPrefix, umiSkipBaseLength, overrepresentationAnalysis, overrepresentationSampling, splitOutput, splitByLines, thread, verbose));
    return rcpp_result_gen;
END_RCPP
}
// rcat
int rcat(std::string output, Rcpp::CharacterVector inputFiles, int numInFile);
RcppExport SEXP _Rfastp_rcat(SEXP outputSEXP, SEXP inputFilesSEXP, SEXP numInFileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type output(outputSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type inputFiles(inputFilesSEXP);
    Rcpp::traits::input_parameter< int >::type numInFile(numInFileSEXP);
    rcpp_result_gen = Rcpp::wrap(rcat(output, inputFiles, numInFile));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Rfastp_runFastp", (DL_FUNC) &_Rfastp_runFastp, 65},
    {"_Rfastp_rcat", (DL_FUNC) &_Rfastp_rcat, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_Rfastp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
