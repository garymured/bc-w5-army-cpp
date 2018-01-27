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
        virtual ~Ability();
        
        virtual void attack(Unit* unit) = 0;
        virtual void counterAttack(Unit* enemy) = 0;
        virtual void infect(Unit* victim);
        
        // void takeDamage(int dmg);
        virtual void switchState();
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