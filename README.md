# RTXUI starter

A minimal app built with [RTXUI](https://github.com/ArthurSonzogni/RTXUI), the
C++ terminal UI library where components are HTML templates styled with CSS.
Click **Use this template** to start your own.

```
 ╭───────────────────────────────────────────────────────╮
 │                                                       │
 │   Hello, RTXUI                                        │
 │                                                       │
 │   Click the buttons, or Tab to one and press Enter.   │
 │                                                       │
 │   ╭───╮     ╭───╮                                     │
 │   │ - │  2  │ + │                                     │
 │   ╰───╯     ╰───╯                                     │
 │                                                       │
 ╰───────────────────────────────────────────────────────╯
```

## Build and run

You need CMake 3.24+ and a C++23 compiler (GCC 13+, Clang 18+ or MSVC).
RTXUI is downloaded at configure time.

```bash
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
./build/rtxui-starter
```

The whole app is [`src/main.cpp`](src/main.cpp).

## Check it without a terminal

```bash
printf '\t\t\r' | RTXUI_STRICT=1 RTXUI_HEADLESS=80x24 ./build/rtxui-starter
```

This presses Tab, Tab, Enter, then prints the screen as text.
`RTXUI_STRICT=1` stops on anything RTXUI would silently ignore, such as an
unknown CSS property.

## With a coding agent

In Claude Code, this repository offers the RTXUI skill, which teaches the
agent the syntax RTXUI supports and how to check its work headlessly. Other
agents can read the whole manual at
<https://arthursonzogni.github.io/RTXUI/llms-full.txt>.

## Next

- [Guide](https://arthursonzogni.github.io/RTXUI/guide/getting-started)
- [Examples](https://arthursonzogni.github.io/RTXUI/guide/examples), running
  live in the browser next to their source.
- [CSS](https://arthursonzogni.github.io/RTXUI/css_reference) and
  [HTML](https://arthursonzogni.github.io/RTXUI/html_reference) references.
