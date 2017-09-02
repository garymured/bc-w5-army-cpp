#include "Ability.h"

Ability::Ability(Unit* unit) {
    this->unit = unit;
    
    // std::cout << "DEBUG: Ability constructor works" << std::endl;
}

Ability::~Ability() {
    
}


// AbilityType::AbilityType(Ability* ability) {
//     this->ability = ability;
// }

// AbilityType::~AbilityType() {
    
// }

// void AbilityType::useAbility(Unit* unit) {
//     this->ability->action(unit);
// }

// void AbilityType::setAbility(Ability* ability) {
    
// }

// void VampireAbility::infect(Unit* victim) {
//     if ( victim->getUnitType() != "Werevolf" ) {
//         victim->setAbility(new VampireAbility(victim));
//         victim->setUnitType("Vampire");
//     }
// }



// void Ability::infect(Unit* victim) {
    
// }

// void Ability::action(Unit* unit) = 0;

// void Ability::action(Unit* enemy) {
//     std::cout << "DEBUG: Ability action works" << std::endl;
// }
