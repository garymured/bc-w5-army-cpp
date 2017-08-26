#include "Rogue.h"

Rogue::Rogue(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->ability = new RogueAbility(this);
    
    setUnitType();
    
    // std::cout << "DEBUG: Rogue constructor works" << std::endl;
}

Rogue::~Rogue() {
    // std::cout << "DEBUG: Rogue destructor works" << std::endl;
}

void Rogue::setUnitType() {
    this->state->setUnitType("Rogue");
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
