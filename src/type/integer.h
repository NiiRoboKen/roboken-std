#ifndef ROBOKEN_STD_TYPE_INTEGER_H
#define ROBOKEN_STD_TYPE_INTEGER_H

#ifndef NOT_USE_8BITS_INTEGER_TYPE_ALIAS
using int8_t = signed char;
using uint8_t = unsigned char;
#endif

#ifndef NOT_USE_16BITS_INTEGER_TYPE_ALIAS
using int16_t = signed short;
using uint16_t = unsigned short;
#endif

#ifndef NOT_USE_32BITS_INTEGER_TYPE_ALIAS
using int32_t = signed int;
using uint32_t = unsigned int;
#endif

#ifndef NOT_USE_64BITS_INTEGER_TYPE_ALIAS
using int64_t = signed long long;
using uint64_t = unsigned long long;
#endif

#endif
