#' Sort a vector
#'
#' This function sorts a given vector using the C++ implementation.
#' @param vec An integer vector to be sorted.
#' @export
sort_vector <- function(vec) {
  .Call('_vectorSortPackage_sortVector', vec)
}
