#include "Rogue.h"

Rogue::Rogue(std::string name) : Unit(name) {
    this->ability = new RogueAbility(this);
    
    setState("Rogue", rogueHpLimDefault, rogueHpLimDefault, rogueDmgDefault);
}

Rogue::~Rogue() {
    // std::cout << "DEBUG: Rogue destructor works" << std::endl;
}

RogueAbility::RogueAbility(Rogue* unit) : Ability(unit) {
    // std::cout << "DEBUG: RogueAbility constructor works" << std::endl;
}

RogueAbility::~RogueAbility() {
    
}

void RogueAbility::attack(Unit* enemy) {
    // std::cout << "DEBUG: RogueAbility::action works" << std::endl;
    
    enemy->ensureIsAlive();
    enemy->takeDamage(this->unit->getDamage());
}

void RogueAbility::counterAttack(Unit* enemy) {
    enemy->ensureIsAlive();
    
    enemy->takeDamage(this->unit->getDamage() / 2);
}
