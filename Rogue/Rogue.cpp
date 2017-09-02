#include "Rogue.h"

Rogue::Rogue() : Unit() {
    this->ability = new RogueAbility(this);
    
    setState("Rogue", 120, 120, 15);
}

Rogue::~Rogue() {
    // std::cout << "DEBUG: Rogue destructor works" << std::endl;
}

RogueAbility::RogueAbility(Unit* unit) : Ability(unit) {
    // std::cout << "DEBUG: RogueAbility constructor works" << std::endl;
}

RogueAbility::~RogueAbility() {
    
}

void RogueAbility::action(Unit* enemy) {
    // std::cout << "DEBUG: RogueAbility::action works" << std::endl;
    
    enemy->ensureIsAlive();
    enemy->takeDamage(this->unit->getDamage());
}
