#ifndef ABILITY_H
#define ABILITY_H

#include <iostream>

class Unit;

class Ability {
    private:
        
    protected:
        Unit* unit;
    public:
        Ability(Unit* unit);
        ~Ability();
        
        virtual void action(Unit* unit) = 0;
};



#endif // ABILITY_H