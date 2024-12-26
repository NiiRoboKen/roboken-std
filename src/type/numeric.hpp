#pragma once

#if !defined(NOT_USE_DEFINED_8BITS_INTEGER_TYPE)
using int8_t = signed char;
using uint8_t = unsigned char;
#endif

#if !defined(NOT_USE_DEFINED_16BITS_INTEGER_TYPE)
using int16_t = signed short;
using uint16_t = unsigned short;
#endif

#if !defined(NOT_USE_DEFINED_32BITS_INTEGER_TYPE) && \
    !defined(CANT_USE_32BITS_INTEGER_TYPE)
using int32_t = signed int;
using uint32_t = unsigned int;
#endif

#if !defined(NOT_USE_DEFINED_64BITS_INTEGER_TYPE) && \
    !defined(CANT_USE_64BITS_INTEGER_TYPE)
using int64_t = signed long long;
using uint64_t = unsigned long long;
#endif

#if !defined(NOT_USE_DEFINED_32BITS_FLOATING_POINT_TYPE) && \
    !defined(CANT_USE_32BITS_FLOATING_POINT_TYPE)
using float32_t = float;
#endif

#if !defined(NOT_USE_DEFINED_64BITS_FLOATING_POINT_TYPE) && \
    !defined(CANT_USE_64BITS_FLOATING_POINT_TYPE)
using float64_t = double;
#endif
