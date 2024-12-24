#pragma once

#include "../type/numeric.hpp"
#include "../type/numeric_traits.hpp"
#include "../util.hpp"

interface Motor {
  // NOTE: ロボコンでは分解能は16bitで十分と思われる
  virtual void cw(uint16_t speed) = 0;
  virtual void ccw(uint16_t speed) = 0;
  virtual void run(int32_t speed) {
    if (speed >= 0) {
      this->cw(speed <= TypeInfo<uint16_t>::MAX ? speed
                                                : TypeInfo<uint16_t>::MAX);
    } else {
      this->ccw(-speed <= TypeInfo<uint16_t>::MAX ? -speed
                                                  : TypeInfo<uint16_t>::MAX);
    }
  }
};
