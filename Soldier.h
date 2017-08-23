#ifndef SOLDIER_H
#define SOLDIER_H

#include <iostream>
#include "Unit.h"

class Soldier : public Unit {
    private:
    
    
    public:
        Soldier(const std::string& name, int hp, int dmg);
        // Soldier(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg);
        ~Soldier();
        
        void takeDamage(int dmg);
};

#endif // SOLDIER_H