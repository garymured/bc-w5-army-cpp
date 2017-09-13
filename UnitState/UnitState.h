#ifndef UNITSTATE_H
#define UNITSTATE_H

#include <iostream>

class UnitState {
    protected:
        std::string name;
        std::string unitType;
        int hitPoints;
        int hitPointsLimit;
        int physicalDamage;
        int magicDamage;
    public:
        UnitState();
        ~UnitState();
        
        const std::string& getName() const;
        const std::string& getUnitType() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        int getDamage() const;
        
        void setName(std::string name);
        void setUnitType(std::string unitType);
        void setHitPoints(int hp);
        void setHitPointsLimit(int hp);
        void setPhysicalDamage(int dmg);
        
        // void takePhysicalDamage(int dmg);
};

# endif // UNITSTATE_H
