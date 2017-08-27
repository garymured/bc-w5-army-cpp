#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "UnitState.h"
#include "Ability.h"

class Unit {
    private:
        
    protected:
        UnitState* state;
        Ability* ability;
        
    public:
        Unit(const std::string& name, int hp, int dmg);
        ~Unit();
        
        const std::string& getName() const;
        const std::string& getUnitType() const;
        int getDamage() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        
        void ensureIsAlive() const;
        
        void print() const;
        
        virtual void setUnitType() = 0;
        void setAbility(Ability* newAbility);
        void setUnitType(const std::string unitType);
        virtual void infect(Unit* victim);
        
        virtual void takeDamage(int dmg);
        void addHitPoints(int hp);
        
        void attack(Unit* enemy);
        void counterAttack(Unit* enemy);
};

class DefaultAbility : public Ability {
    public:
        DefaultAbility(Unit* unit);
        ~DefaultAbility();
        
        void action(Unit* enemy);
};

// std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H
