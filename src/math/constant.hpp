#pragma once

#include "../type/numeric_traits.hpp"

template <typename T>
constexpr float_t<T> PI = 3.141592653589793;

template <typename T>
constexpr float_t<T> PI2 = PI<T> * 2.;
