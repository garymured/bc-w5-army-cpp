#include "Ability.h"

Ability::Ability(Unit* unit) {
    this->unit = unit;
    
    // std::cout << "DEBUG: Ability constructor works" << std::endl;
}

Ability::~Ability() {
    
}

// void Ability::action(Unit* unit) = 0;

// void Ability::action(Unit* enemy) {
//     std::cout << "DEBUG: Ability action works" << std::endl;
// }
