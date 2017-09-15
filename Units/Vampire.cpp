#include "Vampire.h"

Vampire::Vampire(std::string name) : Unit(name) {
    this->ability = new VampireAbility(this);
    
    setState("Vampire", vampHpLimDefault, vampHpLimDefault, vampDmgDefault);
    
    // std::cout << "DEBUG: Vampire constructor works" << std::endl;
}

Vampire::~Vampire() {
    // std::cout << "DEBUG: Vampire destructor works" << std::endl;
}


VampireAbility::VampireAbility(Unit* unit) : Ability(unit) {
    // std::cout << "DEBUG: VampireAbility constructor works" << std::endl;
}

VampireAbility::~VampireAbility() {
    
}

void VampireAbility::attack(Unit* enemy) {
    // std::cout << "DEBUG: VampireAbility::action works" << std::endl;
    int enemyHpBeforeAttack = enemy->getHitPoints();
    int enemyHpAfterAttack;
    
    enemy->ensureIsAlive();
    
    enemy->takeDamage(this->unit->getDamage());
    enemyHpAfterAttack = enemy->getHitPoints();
    this->unit->addHitPoints((enemyHpBeforeAttack - enemyHpAfterAttack) / 2);
    
    enemy->ensureIsAlive();
    this->unit->takeDamage(enemy->getDamage() / 2);
    
    infect(enemy);
}

void VampireAbility::counterAttack(Unit* enemy) {
    
}

void VampireAbility::infect(Unit* victim) {
    int victimHp = victim->getHitPoints();
    
    if ( victim->getUnitType() != "Werewolf" ) {
        victim->setAbility(new VampireAbility(victim));
        victim->setUnitType("Vampire");
        // victim->setState("Vampire", victimHp, vampHpLimDefault, vampDmgDefault);
    }
}
