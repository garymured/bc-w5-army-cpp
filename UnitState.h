#ifndef UNITSTATE_H
#define UNITSTATE_H

#include <iostream>

class UnitState {
    protected:
        std::string name;
        int hitPoints;
        int hitPointsLimit;
        int physicalDamage;
        int magicDamage;
    public:
        UnitState();
        ~UnitState();
        
        int getHitPoints() const;
        int getHitPointsLimit() const;
        int getDamage() const;
        const std::string& getName() const;
        
        void setName(std::string name);
        void setHitPoints(int hp);
        void setPhysicalDamage(int dmg);
};

# endif // UNITSTATE_H
