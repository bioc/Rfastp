.onAttach <- function(libname, pkgname) {
    packageStartupMessage(
      "Rfastp is a wrapper of fastp project: https://github.com/OpenGene/fastp

Please cite fastp in your publication:
Shifu Chen, Yanqing Zhou, Yaru Chen, Jia Gu; fastp: an ultra-fast all-in-one 
    FASTQ preprocessor, Bioinformatics, Volume 34, Issue 17, 1 September 2018,
    Pages i884-i890, https://doi.org/10.1093/bioinformatics/bty560")
    msg <- sprintf(
        "Package '%s' is deprecated and will be removed from Bioconductor
         version %s", pkgname, "3.23")
    .Deprecated(msg=paste(strwrap(msg, exdent=2), collapse="\n"))
}
