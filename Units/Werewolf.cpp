#include "Werewolf.h"

Werewolf::Werewolf(std::string name) : Unit(name) {
    this->ability = new WerewolfAbility(this);
    
    setState("Werewolf", werewolfHpLimDefault, werewolfHpLimDefault, werewolfDmgDefault);
    
    this->isWolf = false;
    
    // std::cout << "DEBUG: Werewolf constructor works" << std::endl;
}

Werewolf::~Werewolf() {
    // std::cout << "DEBUG: Werewolf destructor works" << std::endl;
}

WerewolfAbility::WerewolfAbility(Unit* unit) : Ability(unit) {
    // std::cout << "DEBUG: WerewolfAbility constructor works" << std::endl;
}

WerewolfAbility::~WerewolfAbility() {
    
}

void WerewolfAbility::attack(Unit* enemy) {
    // std::cout << "DEBUG: WerewolfAbility::action works" << std::endl;
    // int enemyHpBeforeAttack = enemy->getHitPoints();
    // int enemyHpAfterAttack;
    
    // enemy->ensureIsAlive();
    
    // enemy->takeDamage(this->unit->getDamage());
    // enemyHpAfterAttack = enemy->getHitPoints();
    // this->unit->addHitPoints((enemyHpBeforeAttack - enemyHpAfterAttack) / 2);
    
    // enemy->ensureIsAlive();
    // this->unit->takeDamage(enemy->getDamage() / 2);
}

void WerewolfAbility::counterAttack(Unit* enemy) {
    
}

void WerewolfAbility::infect(Unit* victim) {
    // int victimHp = victim->getHitPoints();
    
    // if ( victim->getUnitType() != "Werevolf" ) {
    //     victim->setAbility(new WerewolfAbility(victim));
    //     victim->setState("Werewolf", victimHp, vampHpLimDefault, vampDmgDefault);
    // }
}

// void WerewolfAbility::switchState() {
//     if ( this->unit->isWolf == false ) {
//         std::cout << "FALSE" << std::endl;
//     } else {
//         std::cout << "TRUE" << std::endl;
//     }
// }
