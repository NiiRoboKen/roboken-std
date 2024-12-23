#pragma once

#include "numeric.hpp"

void __assert_int_t_bytes() {
  static_assert(sizeof(int8_t) == 1, "int8_t is not 1byte in this environment");
  static_assert(sizeof(int16_t) == 2, "int16_t is not 2byte in this environment");
#if !defined(CANT_USE_32BITS_INTEGER_TYPE)
  static_assert(sizeof(int32_t) == 4, "int32_t is not 4byte in this environment");
#endif
#if !defined(CANT_USE_64BITS_INTEGER_TYPE)
  static_assert(sizeof(int64_t) == 8, "int64_t is not 8byte in this environment");
#endif
}
void __assert_uint_t_bytes() {
  static_assert(sizeof(uint8_t) == 1, "uint8_t is not 1byte in this environment");
  static_assert(sizeof(uint16_t) == 2, "uint16_t is not 2byte in this environment");
#if !defined(CANT_USE_32BITS_INTEGER_TYPE)
  static_assert(sizeof(uint32_t) == 4, "uint32_t is not 4byte in this environment");
#endif
#if !defined(CANT_USE_64BITS_INTEGER_TYPE)
  static_assert(sizeof(uint64_t) == 8, "uint64_t is not 8byte in this environment");
#endif
}

void __assert_float_t_bytes() {
#if !defined(CANT_USE_32BITS_FLOATING_POINT_TYPE)
  static_assert(sizeof(float32_t) == 4, "float32_t is not 4byte in this environment");
#endif
#if !defined(CANT_USE_64BITS_FLOATING_POINT_TYPE)
  static_assert(sizeof(float64_t) == 8, "float64_t is not 8byte in this environment");
#endif
}

void assert_type_size() {
  __assert_int_t_bytes();
  __assert_uint_t_bytes();
  __assert_float_t_bytes();
}
