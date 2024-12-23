#pragma once

#include "../util.hpp"
#include "../type/numeric.hpp"
#include "../type/numeric_traits.hpp"


interface Motor {
  // NOTE: ロボコンでは分解能は16bitで十分と思われる
  virtual void cw(uint16_t speed) = 0;
  virtual void ccw(uint16_t speed) = 0;
  virtual void run(int32_t speed) {
    // TODO: 16bitの範囲に収める処理
    if (speed >= 0) {
      this->cw(speed);
    }
    else {
      this->ccw(-speed);
    }
  }
};
