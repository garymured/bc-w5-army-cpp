#ifndef ROGUE_H
#define ROGUE_H

#include <iostream>
#include "Unit.h"

class Rogue : public Unit {
    private:
        
    protected:
    
    public:
        Rogue(const std::string& name, int hp, int dmg);
        ~Rogue();
        
        void setUnitType();
};

class RogueAbility : public Ability {
    public:
        RogueAbility(Unit* unit);
        ~RogueAbility();
        
        void action(Unit* enemy);
};

#endif // ROGUE_H