#include "wrap_sum.hxx"
#include "sum.hxx"

int sum_from_cplus(int a, int b) {
  SumClass num;
  return num.Sum(a, b);
}
