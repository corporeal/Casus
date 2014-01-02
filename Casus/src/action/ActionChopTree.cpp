#include <cstdint>

#include "ActionChopTree.hpp"
#include "../Engine.hpp"

namespace Casus {
    bool ActionChopTree::Execute(std::uint64_t tick) {
        if (tick >= _LastTick + _TickUpdateNumber) {
            _LastTick = tick;
            // Add Code to perform felling calc.
        }
        // Graphics: Add swing interpolation
        return _Continue;
    }
}