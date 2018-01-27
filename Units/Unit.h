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
        
        bool isWolf;
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
        
        virtual bool getStateIsWolf();
        virtual void setStateIsWolf(bool state);
        virtual void switchState();
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
const int rogueHpLimDefault = 110;
const int rogueDmgDefault = 11;
const int vampHpLimDefault = 120;
const int vampDmgDefault = 15;
const int werewolfHpLimDefault = 130;
const int werewolfDmgDefault = 18;

#endif //UNIT_H
