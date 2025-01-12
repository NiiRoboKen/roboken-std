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
    U get_x() {
        return this->x;
    }
    U get_y() {
        return this->y;
    }
    U magnitude() {
        return sqrt(this->x * this->x + this->y * this->y); 
    }
    U dot_product(Vector2 *vec) {
        return this->x * vec->x + this->y * vec->y;
    }
    Vector2 add(Vector2 *vec) {
        return Vector2(this->x + vec->get_x(), this->y + vec->get_y());
    }
    Vector2 sub(Vector2 *vec) {
        return Vector2(this->x - vec->get_x(), this->y - vec->get_y());
    }

    private:
    U x;
    U y;
};