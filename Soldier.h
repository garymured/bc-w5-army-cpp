#ifndef SOLDIER_H
#define SOLDIER_H

#include <iostream>
#include "Unit.h"

class Soldier : public Unit {
    private:
    
    public:
        Soldier(const std::string& name, int hp, int dmg);
        ~Soldier();
        
        void setUnitType();
};

#endif // SOLDIER_H