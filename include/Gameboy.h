//
// Created by Dustin on 10/13/26.
//

#ifndef GAMEBOYEMULATOR_GAMEBOY_H
#define GAMEBOYEMULATOR_GAMEBOY_H

#include "CPU.h"

#include <array>

static constexpr int MASTER_CLOCK = 4'194'304;
static constexpr int SYSTEM_CLOCK = MASTER_CLOCK / 4;

class Gameboy {
public:
    Gameboy() = default;
private:
    CPU cpu_;

    std::array<char, 8192> work_ram_;
    std::array<char, 8192> video_ram_;
};


#endif //GAMEBOYEMULATOR_GAMEBOY_H
