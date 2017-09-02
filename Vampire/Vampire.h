#ifndef VAMPIRE_H
#define VAMPIRE_H

#include <iostream>
#include "../Unit/Unit.h"

class Vampire : public Unit {
    private:
        
    protected:
    
    public:
        Vampire();
        ~Vampire();
        
};


class VampireAbility : public Ability {
    public:
        VampireAbility(Unit* unit);
        ~VampireAbility();
        
        void action(Unit* enemy);
        void infect(Unit* victim);
};

#endif // VAMPIRE_H