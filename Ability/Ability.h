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
        // virtual void infect(Unit* victim) = 0;
};





// class AbilityType {
//     protected:
//         Ability* ability;
//     public:
//         AbilityType(Ability* ability);
//         ~AbilityType();
        
//         void useAbility(Unit*);
//         // void setAbility(Ability*);
// };



#endif // ABILITY_H