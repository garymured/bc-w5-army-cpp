#ifndef VAMPIRE_H
#define VAMPIRE_H

#include <iostream>
#include "Unit.h"

class Vampire : public Unit {
    private:
        
    protected:
    
    public:
        Vampire(std::string name);
        ~Vampire();
        
};

class VampireAbility : public Ability {
    public:
        VampireAbility(Unit* unit);
        ~VampireAbility();
        
        void attack(Unit* enemy);
        void counterAttack(Unit* enemy);
        void infect(Unit* victim);
};

#endif // VAMPIRE_H