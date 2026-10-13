//
// Created by Dustin on 6/14/26.
//

#ifndef GAMEBOYEMULATOR_CPU_H
#define GAMEBOYEMULATOR_CPU_H

#include <cstdint>

using Address = std::uint16_t;

enum class Flags {
    Z = (1 << 7), // ZERO
    N = (1 << 6), // SUBTRACTION
    H = (1 << 5), // HALF CARRY
    C = (1 << 4) // CARRY
};


union Register16 {
    std::uint16_t word_;

    // TODO: Check endianness
    struct {
        std::uint8_t low_byte_;
        std::uint8_t high_byte_;
    };
};

class CPU {
public:
    CPU();

    std::uint16_t Fetch();
    void Decode();
    void Execute();


public:
    Register16 af_; // ACCUMULATOR AND FLAGS
    Register16 bc_;
    Register16 de_;
    Register16 hl_;

    std::uint16_t sp_;
    std::uint16_t pc_;
private:
};


#endif //GAMEBOYEMULATOR_CPU_H
