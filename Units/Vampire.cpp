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
    enemy->counterAttack(this->unit);
    
    infect(enemy);
}

void VampireAbility::counterAttack(Unit* enemy) {
    int enemyHpBeforeAttack = enemy->getHitPoints();
    int enemyHpAfterAttack;
    
    enemy->ensureIsAlive();
    
    enemy->takeDamage(this->unit->getDamage() / 2);
    enemyHpAfterAttack = enemy->getHitPoints();
    this->unit->addHitPoints((enemyHpBeforeAttack - enemyHpAfterAttack) / 2);
}

void VampireAbility::infect(Unit* victim) {
    int victimHp = victim->getHitPoints();
    
    if ( victim->getUnitType() != "Werewolf" || victim->getUnitType() != "Vampire" ) {
        victim->setAbility(new VampireAbility(victim));
        victim->setUnitType("Vampire");
        // victim->setState("Vampire", victimHp, vampHpLimDefault, vampDmgDefault);
    }
}
