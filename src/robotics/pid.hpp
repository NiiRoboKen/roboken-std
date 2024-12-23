#pragma once

#include "../type/numeric_traits.hpp"

template <typename T>
class PidController {
  using U = float_t<T>;
  public:
    PidController(U kp, U ki, U kd) {
      this->kp = kp;
      this->ki = ki;
      this->kd = kd;
    }
    U update(U error) {
      return p_term(error);
    }
  private:
    U p_term(U error) {
      return this->kp * error;
    }
    U kp;
    U ki;
    U kd;
};
