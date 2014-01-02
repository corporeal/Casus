#pragma once

#include <cstdint>

#include "detail/platform.hpp"

class Entity {
public:
    struct ID {
        #if defined EECS_BITS32
        typedef std::uint32_t int_t;
        #elif defined EECS_BITS64
        typedef std::uint64_t int_t;
        #endif
    };

    Entity();

    Entity(World &world, ID id);
    Entity(const Entity&) = default;
    Entity(Entity&&) = default;
    Entity &operator=(const Entity&) = default;
    Entity &operator=(Entity&&) = default;

    bool ID()
};