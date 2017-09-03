#ifndef WEREWOLF_H
#define WEREWOLF_H

#include <iostream>
#include "Unit.h"

class Werewolf : public Unit {
    private:
    protected:
    
    public:
        Werewolf(std::string name);
        ~Werewolf();
        
        bool isWolf;
        
};

class WerewolfAbility : public Ability {
    public:
        WerewolfAbility(Unit* unit);
        ~WerewolfAbility();
        
        void action(Unit* enemy);
        void infect(Unit* victim);
        
        // void switchState();
};

#endif // WEREWOLF_H