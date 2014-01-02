#pragma once

#include <cstdint>
#include <memory>

#include "Action.hpp"
#include "../entity/EntityTree.hpp"
#include "../entity/Player.hpp"

namespace Casus {
    class ActionChopTree : public virtual Action {
    public:
        ActionChopTree(std::uint64_t tick, Player _Player, Entity _Target);
        bool Execute(std::uint64_t tick);

    protected:
        std::shared_ptr<Player> _Player;
        std::shared_ptr<SkillLogging> _SkillLogging;
        std::shared_ptr<EntityTree> _Target;
    };
}