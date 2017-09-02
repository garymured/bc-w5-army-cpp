#ifndef ROGUE_H
#define ROGUE_H

#include <iostream>
#include "../Unit/Unit.h"

class Rogue : public Unit {
    private:
    
    protected:
    
    public:
        Rogue();
        ~Rogue();
};

class RogueAbility : public Ability {
    public:
        RogueAbility(Unit* unit);
        ~RogueAbility();
        
        void action(Unit* enemy);
};


#endif // ROGUE_H