#pragma once

template <typename T, typename U>
struct Eq {
  static constexpr bool value = false;
};

template <typename T>
struct Eq<T, T> {
  static constexpr bool value = true;
};

template <typename T, typename U>
constexpr bool is_type_eq = Eq<T, U>::value;
