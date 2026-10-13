//
// Created by Dustin on 10/13/26.
//

#ifndef GAMEBOYEMULATOR_DISPLAY_H
#define GAMEBOYEMULATOR_DISPLAY_H
#include <array>

static constexpr int HEIGHT = 160;
static constexpr int WIDTH = 144;

static constexpr int HORIZONTAL_SYNC = 9'198;
static constexpr int VERTICAL_SYNC = 5'973;

struct Pixel {
    std::uint8_t data_;
};

struct Display {
    std::array<Pixel, HEIGHT * WIDTH> buffer_;
};

#endif //GAMEBOYEMULATOR_DISPLAY_H
