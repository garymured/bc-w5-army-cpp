#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../UnitState/UnitState.h"
#include "../Ability/Ability.h"

class Unit {
    private:
        
    protected:
        UnitState* state;
        Ability* ability;
    public:
        
        Unit(std::string name);
        virtual ~Unit();
        
        const std::string& getName() const;
        const std::string& getUnitType() const;
        int getDamage() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        
        void ensureIsAlive() const;
        
        void print() const;
        
        // virtual void setUnitType() = 0;
        
        void setState(std::string unitType, int hp, int hpLim, int dmg);
        
        void setAbility(Ability* newAbility);
        void setName(std::string name);
        void setUnitType(const std::string unitType);
        // virtual void infect(Unit* victim);
        
        virtual void takeDamage(int dmg);
        virtual void addHitPoints(int hp);
        
        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
};

class DefaultAbility : public Ability {
    public:
        DefaultAbility(Unit* unit);
        ~DefaultAbility();
        
        void attack(Unit* enemy);
        void counterAttack(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, const Unit* unit);

const int soldHpLimDefault = 100;
const int soldDmgDefault = 10;
const int rogueHpLimDefault = 120;
const int rogueDmgDefault = 15;
const int vampHpLimDefault = 150;
const int vampDmgDefault = 20;
const int werewolfHpLimDefault = 160;
const int werewolfDmgDefault = 18;

#endif //UNIT_H
