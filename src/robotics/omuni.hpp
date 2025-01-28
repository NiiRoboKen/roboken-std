#pragma once

#include "../math/functions.hpp"
#include "../interface/peripheral.hpp"

template<typename T, uint8_t DEGREE>
class Omuni {
    using U = float_t<T>;
    public:
    Omuni(Motor *motor) {
        this->motor = motor;
    }
    private:
    Motor *motor;
};