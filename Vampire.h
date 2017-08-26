#ifndef VAMPIRE_H
#define VAMPIRE_H

#include <iostream>
#include "Unit.h"

class Vampire : public Unit {
    private:
        
    protected:
    
    public:
        Vampire(const std::string& name, int hp, int dmg);
        ~Vampire();
        
        void setUnitType();
};

class VampireAbility : public Ability {
    public:
        VampireAbility(Unit* unit);
        ~VampireAbility();
        
        void action(Unit* enemy);
};

#endif // VAMPIRE_H