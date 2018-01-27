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

bool Werewolf::getStateIsWolf() {
    return this->isWolf;
}

void Werewolf::setStateIsWolf(bool state) {
    this->isWolf = state;
}

void Werewolf::switchState() {
    this->ability->switchState();
}

WerewolfAbility::WerewolfAbility(Unit* unit) : Ability(unit) {
    // std::cout << "DEBUG: WerewolfAbility constructor works" << std::endl;
    
}

WerewolfAbility::~WerewolfAbility() {
    
}

void WerewolfAbility::attack(Unit* enemy) {
    std::cout << "DEBUG: WerewolfAbiity::action works" << std::endl;
    enemy->ensureIsAlive();
    
    enemy->takeDamage(this->unit->getDamage());
    
    enemy->ensureIsAlive();
    enemy->counterAttack(this->unit);
    
    infect(enemy);
}

void WerewolfAbility::counterAttack(Unit* enemy) {
    enemy->ensureIsAlive();
    
    enemy->takeDamage(this->unit->getDamage() / 2);
    
    enemy->ensureIsAlive();
    
    // infect(enemy);
}

void WerewolfAbility::infect(Unit* victim) {
    int victimHp = victim->getHitPoints();
    
    if ( victim->getUnitType() != "Vampire" || victim->getUnitType() != "Werewolf" ) {
        victim->setAbility(new WerewolfAbility(victim));
        victim->setState("Werewolf", victimHp, werewolfHpLimDefault, werewolfDmgDefault);
    }
}

void WerewolfAbility::switchState() {
    float coef = 1.5;
    
    if ( this->unit->getStateIsWolf() == false ) {
        this->unit->setState("Werewolf", 
                        this->unit->getHitPoints() * coef, 
                        this->unit->getHitPointsLimit() * coef,
                        this->unit->getDamage() * coef); 
        this->unit->setStateIsWolf(true);
        std::cout << "DEBUG: isWolf is " << this->unit->getStateIsWolf() << std::endl;
    } else {
        this->unit->setState("Werewolf", 
                        this->unit->getHitPoints() / coef, 
                        this->unit->getHitPointsLimit() / coef,
                        this->unit->getDamage() / coef);
        this->unit->setStateIsWolf(false);
    }
    
    // if ( this->unit->getStateIsWolf() == false ) {
    //     this->unit->setState("Werewolf", 
    //                     this->unit->getHitPoints() * 1.5, 
    //                     this->unit->getHitPointsLimit() * 1.5,
    //                     this->unit->getDamage() * 1.5); 
    //     this->unit->isWolf = true;
    // } else {
    //     this->unit->setState("Werewolf", 
    //                     this->unit->getHitPoints() / 1.5, 
    //                     this->unit->getHitPointsLimit() / 1.5,
    //                     this->unit->getDamage() / 1.5);
    //     this->unit->isWolf = false;
    // }
}
