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
