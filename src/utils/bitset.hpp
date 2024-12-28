#pragma once

#include "../type/numeric.hpp"
#include "../type/numeric_traits.hpp"

template <typename T>
class BitSet {
 private:
 public:
  static bool get(T *value, uint8_t index) { return *value & (1 << index); }
  static void set(T *value, uint8_t index, bool state) {
    if (state) {
      *value |= 1 << index;
    } else {
      *value &= ~(1 << index);
    }
  }
};
