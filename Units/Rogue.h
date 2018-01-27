#ifndef ROGUE_H
#define ROGUE_H

#include <iostream>
#include "Unit.h"

class Rogue : public Unit {
    private:
    
    protected:
    
    public:
        Rogue(std::string name);
        ~Rogue();
};

class RogueAbility : public Ability {
    public:
        RogueAbility(Rogue* unit);
        ~RogueAbility();
        
        void attack(Unit* enemy);
        void counterAttack(Unit* enemy);
};


#endif // ROGUE_H