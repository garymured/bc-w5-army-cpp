#include "Soldier.h"

Soldier::Soldier(std::string name) : Unit(name) {
    // this->state->setUnitType("Soldier");
    // this->state->setHitPoints(100);
    // this->state->setHitPointsLimit(100);
    // this->state->setPhysicalDamage(10);
    
    setState("Soldier", soldHpLimDefault, soldHpLimDefault, soldDmgDefault);
    
    
    // std::cout << "DEBUG: Soldier constructor works" << std::endl;
}

Soldier::~Soldier() {
    // std::cout << "DEBUG: Soldier destructor works" << std::endl;
}

// std::ostream& operator<<(std::ostream& out, const Soldier* soldier) {
//     out << *((Unit*)(&soldier));
    
//     return out;
// }

