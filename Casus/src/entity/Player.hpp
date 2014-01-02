#pragma once

#include "Entity.hpp"

#include "../skill/Skill.hpp"
#include "../skill/SkillLogging.hpp"

namespace Casus {
    class Player : public virtual Entity {
    public:
        const std::weak_ptr<Skill> GetSkillLogging() const;
        
    protected:
        std::shared_ptr<Skill> _SkillLogging;
    };
}