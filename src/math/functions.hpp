#pragma once

#include "../type/numeric_traits.hpp"
#include "constant.hpp"

template <typename T>
constexpr T factorial(uint_t<T> n) {
  T x = 1;
  for (T i = 2; i <= n; i++) {
    x *= i;
  }
  return x;
}

template <typename T>
constexpr T abs(numeric_t<T> n) {
  return n > 0 ? n : -n;
}

template <typename T, typename U>
constexpr T pow(numeric_t<T> x, integral_t<U> n) {
  T ret = 1;
  U number = abs<U>(n);
  while (number > 0) {
    if (number & 1) ret *= x;
    x *= x;
    number >>= 1;
  }
  if (n < 0) return 1 / ret;
  return ret;
}

template <typename T>
constexpr T radian(float_t<T> degree) {
  return degree / 180. * PI<T>;
}

template <typename T, uint8_t MAX>
constexpr T sin(float_t<T> x) {
  T result = x;
  T term = x;
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
inline constexpr T cos(float_t<T> x) {
  return sin<T, MAX>(x + radian<T>(90));
}

template <typename T, uint8_t MAX>
inline constexpr T tan(float_t<T> x) {
  return sin<T, MAX>(x) / cos<T, MAX>(x);
}
