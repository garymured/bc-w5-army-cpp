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
        
        void setHitPoints(int hp);
        void setHitPointsLimit(int hp);
        void setPhysicalDamage(int dmg);
        void setName(std::string name);
};

# endif // UNITSTATE_H
