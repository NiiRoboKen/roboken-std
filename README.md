# Roboken STD
新居浜高専ロボット研究部謹製ライブラリ

# 使用するにあたって
- このライブラリは16bit以上のマイコンを前提で開発されています
- PlatformIO用ライブラリですが、依存しているライブラリがない独立したライブラリなので移植はしやすいと思います
- C++ 14の機能を使用しています。以下を`platformio.ini`に追記してください
```
build_flags = -std=gnu++14
build_unflags = -std=gnu++11
```

# フラグ一覧

| フラグ名                                   | 機能                                                  |
| ------------------------------------------ | ----------------------------------------------------- |
| NOT_USE_DEFINED_8BITS_INTEGER_TYPE         | デフォルトの8bit整数型の型エイリアスを無効化          |
| NOT_USE_DEFINED_16BITS_INTEGER_TYPE        | デフォルトの16bit整数型の型エイリアスを無効化         |
| NOT_USE_DEFINED_32BITS_INTEGER_TYPE        | デフォルトの32bit整数型の型エイリアスを無効化         |
| NOT_USE_DEFINED_64BITS_INTEGER_TYPE        | デフォルトの64bit整数型の型エイリアスを無効化         |
| NOT_USE_DEFINED_32BITS_FLOATING_POINT_TYPE | デフォルトの32bit浮動小数点型の型エイリアスを無効化   |
| NOT_USE_DEFINED_64BITS_FLOATING_POINT_TYPE | デフォルトの64bit浮動小数点型の型エイリアスを無効化   |
| CANT_USE_32BITS_INTEGER_TYPE               | 32bitの整数型が使えない環境であることを示します       |
| CANT_USE_64BITS_INTEGER_TYPE               | 64bitの整数型が使えない環境であることを示します       |
| CANT_USE_32BITS_FLOATING_POINT_TYPE        | 32bitの浮動小数点型が使えない環境であることを示します |
| CANT_USE_64BITS_FLOATING_POINT_TYPE        | 64bitの浮動小数点型が使えない環境であることを示します |
