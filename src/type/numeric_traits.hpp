#pragma once

#include "numeric.hpp"
#include "traits.hpp"

template <typename T>
constexpr bool is_int_t = false
  || is_type_eq<T, int8_t>
  || is_type_eq<T, int16_t>
#if !defined(CANT_USE_32BITS_INTEGER_TYPE)
  || is_type_eq<T, int32_t>
#endif
#if !defined(CANT_USE_64BITS_INTEGER_TYPE)
  || is_type_eq<T, int64_t>
#endif
  ;

template <typename T>
constexpr bool is_uint_t = false
  || is_type_eq<T, uint8_t>
  || is_type_eq<T, uint16_t>
#if !defined(CANT_USE_32BITS_INTEGER_TYPE)
  || is_type_eq<T, uint32_t>
#endif
#if !defined(CANT_USE_64BITS_INTEGER_TYPE)
  || is_type_eq<T, uint64_t>
#endif
  ;

template <typename T>
constexpr bool is_float_t = false
#if !defined(CANT_USE_32BITS_FLOATING_POINT_TYPE)
  || is_type_eq<T, float32_t>
#endif
#if !defined(CANT_USE_64BITS_FLOATING_POINT_TYPE)
  || is_type_eq<T, float64_t>
#endif
  ;

template <typename T>
constexpr bool is_numeric_t = is_int_t<T> || is_uint_t<T> || is_float_t<T>;

template <typename T>
using int_t = require_t<is_int_t<T>, T>;
