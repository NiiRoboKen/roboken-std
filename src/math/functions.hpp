#pragma once

#include "../type/numeric_traits.hpp"

template <typename T>
uint_t<T> factorial(uint_t<T> n) {
  uint_t<T> x = 1;
  for (uint_t<T> i = 2; i <= n; i++) {
    x *= i;
  }
  return x;
}

template <typename T>
uint_t<T> pow(uint_t<T> x, uint_t<T> n) {
  uint_t<T> ret = 1;
  while (n > 0) {
    if (n & 1) ret *= x;
    x *= x;
    n >>= 1;
  }
  return ret;
}