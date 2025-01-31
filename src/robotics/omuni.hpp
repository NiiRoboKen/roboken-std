#pragma once

#include "../math/functions.hpp"
#include "../interface/peripheral.hpp"

template<typename T>
class Omuni {
    using U = float_t<T>;
    public:
    Omuni(Motor *motor, U radian) {
        this->motor = motor;
        this->radian = radian;
    }
    template<uint8_t MAX>
    void move(int32_t x, int32_t y) {
        this->motor->run(cos<U, 25>(this->radian) * x + sin<U, 25>(this->radian) * y);
    }
    private:
    Motor *motor;
    U radian;
};