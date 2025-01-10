#pragma once

#include "../math/functions.hpp"

template <typename T>
class Vector2 {
    using U = float_t<T>;

    public:
    Vector2(U x, U y) {
        this->x = x;
        this->y = y;
    }
    U magnitude() {
        return sqrt(this->x * this->x + this->y * this->y); 
    }
    U dot_product(U x, U y) {
        this->x * x + this->y * y;
    }

    private:
    U x;
    U y;
};