#include "Soldier.h"

Soldier::Soldier(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    // std::cout << "DEBUG: Soldier constructor works" << std::endl;
}

Soldier::~Soldier() {
    // std::cout << "DEBUG: Soldier destructor works" << std::endl;
}
