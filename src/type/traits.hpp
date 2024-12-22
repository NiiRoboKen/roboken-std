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

template <bool is_require, typename T>
struct Require {};

template <typename T>
struct Require<true, T> {
  using type = T;
};

template <bool is_require, typename T>
using require_t = typename Require<is_require, T>::type;
