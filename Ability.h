#ifndef ABILITY_H
#define ABILITY_H

#include <iostream>

class Unit;

class Ability {
    private:
        
    protected:
        
    public:
        Ability();
        ~Ability();
        
        void action(Unit* enemy);
};



#endif // ABILITY_H