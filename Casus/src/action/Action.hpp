#pragma once

#include <cstdint>

namespace Casus {
    class Action {
    public:
        virtual ~Action() = 0;

        virtual bool Execute(std::uint64_t tick) = 0;

    protected:
        std::uint64_t _LastTick;
        std::uint64_t _TickUpdateNumber;
        bool _Continue;
    };
}