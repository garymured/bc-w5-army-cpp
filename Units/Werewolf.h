#ifndef WEREWOLF_H
#define WEREWOLF_H

#include <iostream>
#include "Unit.h"

class Werewolf : public Unit {
    private:
        bool isWolf;
    protected:
    public:
        Werewolf(std::string name);
        ~Werewolf();
        
        bool getStateIsWolf();
        void setStateIsWolf(bool state);
        
        void switchState();
};

class WerewolfAbility : public Ability {
    public:
        WerewolfAbility(Unit* unit);
        ~WerewolfAbility();
        
        void attack(Unit* enemy);
        void counterAttack(Unit* enemy);
        void infect(Unit* victim);
        
        void switchState();
};

#endif // WEREWOLF_H