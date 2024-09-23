#include <Rcpp.h>
#include <algorithm>  // For std::sort
using namespace Rcpp;

// [[Rcpp::export]]
void sortVector(IntegerVector& vec) {
  std::vector<int> std_vec(vec.begin(), vec.end());
  std::sort(std_vec.begin(), std_vec.end());
  std::copy(std_vec.begin(), std_vec.end(), vec.begin());
}
