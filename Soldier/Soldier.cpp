#include "Soldier.h"

Soldier::Soldier() : Unit() {
    // this->state->setUnitType("Soldier");
    // this->state->setHitPoints(100);
    // this->state->setHitPointsLimit(100);
    // this->state->setPhysicalDamage(10);
    
    setState("Soldier", 100, 100, 10);
    
    // std::cout << "DEBUG: Soldier constructor works" << std::endl;
}

Soldier::~Soldier() {
    // std::cout << "DEBUG: Soldier destructor works" << std::endl;
}
