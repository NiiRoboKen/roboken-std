#pragma once

#include "../type/numeric.hpp"
#include "../type/numeric_traits.hpp"

template <typename T>
class BitSet {
  private:
    using U = require_t<is_int_t<T> || is_uint_t<T>, T>;
  public:
    static bool get(U *value, uint8_t index) {
      return *value & (1 << index);
    }
    static void set(U *value, uint8_t index, bool state) {
      if (state) {
        *value |= 1 << index;
      }
      else {
        *value &= ~(1 << index);
      }
    }
};
