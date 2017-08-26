#include "Soldier.h"

Soldier::Soldier(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    setUnitType();
    // std::cout << "DEBUG: Soldier constructor works" << std::endl;
}

Soldier::~Soldier() {
    // std::cout << "DEBUG: Soldier destructor works" << std::endl;
}

void Soldier::setUnitType() {
    this->state->setUnitType("Soldier");
    // std::cout << "DEBUG: Soldier setUnitType works" << std::endl;
}
