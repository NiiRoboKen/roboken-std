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

| フラグ名 | 機能 |
| -------- | ---- |
