#pragma once

template <typename T, typename U>
struct __Eq {
  static constexpr bool value = false;
};

template <typename T>
struct __Eq<T, T> {
  static constexpr bool value = true;
};

template <typename T, typename U>
constexpr bool is_type_eq = __Eq<T, U>::value;

template <bool is_require, typename T>
struct __Require {};

template <typename T>
struct __Require<true, T> {
  using type = T;
};

template <bool is_require, typename T>
using require_t = typename __Require<is_require, T>::type;

template <typename T>
struct TypeInfo {};
