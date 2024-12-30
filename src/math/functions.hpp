#pragma once

#include "../type/numeric_traits.hpp"
#include "constant.hpp"

template <typename T>
uint_t<T> factorial(uint_t<T> n) {
  uint_t<T> x = 1;
  for (uint_t<T> i = 2; i <= n; i++) {
    x *= i;
  }
  return x;
}

template <typename T>
numeric_t<T> abs(numeric_t<T> n) {
  return n > 0 ? n : -n;
}

template <typename T, typename U>
numeric_t<T> pow(numeric_t<T> x, integral_t<U> n) {
  numeric_t<T> ret = 1;
  integral_t<U> number = abs<U>(n);
  while (number > 0) {
    if (number & 1) ret *= x;
    x *= x;
    number >>= 1;
  }
  if(n < 0) return 1 / ret;
  return ret;
}

template <typename T, uint8_t MAX>
float_t<T> sin(float_t<T> x) {
  float_t<T> result = x;
  float_t<T> term = x;
  for (uint8_t i = 1; MAX > i; i++) {
    term *= -(x * x) / (4. * (i * i) + 2. * i);
    if (result == result + term) {
      return result;
    }
    result += term;
  }
  return result;
}

template <typename T, uint8_t MAX>
inline float_t<T> cos(float_t<T> x) {
  return sin<T, MAX>(x - (PI<T> / 2));
}
