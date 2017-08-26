#include "Vampire.h"

Vampire::Vampire(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->ability = new VampireAbility(this);
    
    setUnitType();
    
    // std::cout << "DEBUG: Vampire constructor works" << std::endl;
}

Vampire::~Vampire() {
    // std::cout << "DEBUG: Vampire destructor works" << std::endl;
}

void Vampire::setUnitType() {
    this->state->setUnitType("Vampire");
}

VampireAbility::VampireAbility(Unit* unit) : Ability(unit) {
    // std::cout << "DEBUG: VampireAbility constructor works" << std::endl;
}

VampireAbility::~VampireAbility() {
    
}

void VampireAbility::action(Unit* enemy) {
    // std::cout << "DEBUG: VampireAbility::action works" << std::endl;
    int enemyHpBeforeAttack = enemy->getHitPoints();
    int enemyHpAfterAttack;
    
    enemy->ensureIsAlive();
    
    enemy->takeDamage(this->unit->getDamage());
    enemyHpAfterAttack = enemy->getHitPoints();
    this->unit->addHitPoints((enemyHpBeforeAttack - enemyHpAfterAttack) / 2);
    
    enemy->ensureIsAlive();
    this->unit->takeDamage(enemy->getDamage() / 2);
}
