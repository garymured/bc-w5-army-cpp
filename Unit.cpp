#include "Unit.h"

Unit::Unit(const std::string& name, int hp, int dmg) {
    this->state = new UnitState();
    this->ability = new DefaultAbility(this);
    
    this->state->setName(name);
    this->state->setHitPoints(hp);
    this->state->setHitPointsLimit(hp);
    this->state->setPhysicalDamage(dmg);
    
    // std::cout << "DEBUG: Unit constructor works" << std::endl;
}

Unit::~Unit() {
    delete state;
    delete ability;
    // std::cout << "DEBUG: Unit destructor works" << std::endl;
}

const std::string& Unit::getName() const {
    return this->state->getName();
}

int Unit::getDamage() const {
    return this->state->getDamage();
}

int Unit::getHitPoints() const {
    return this->state->getHitPoints();
}

int Unit::getHitPointsLimit() const {
    return this->state->getHitPointsLimit();
}

void Unit::ensureIsAlive() const {
    if ( this->state->getHitPoints() == 0 ) {
        
        // throw UnitIsDead();
    }
}

void Unit::takeDamage(int dmg) {
    this->ensureIsAlive();
    
    if ( this->state->getHitPoints() > dmg ) {
        this->state->setHitPoints( this->state->getHitPoints() - dmg );
    } else {
        this->state->setHitPoints(0);
    }
}

void Unit::attack(Unit* enemy) {
    this->ability->action(enemy);
    // enemy->counterAttack(this);
}

void Unit::print() const {
    std::cout << "Unit name: " << this->getName() << "\n"
              << "Unit hit points: " << this->getHitPoints() << "/"
              << this->getHitPointsLimit() << "\n"
              << "Unit damage: " << this->getDamage() << std::endl << std::endl;
}

DefaultAbility::DefaultAbility(Unit* unit) : Ability(unit) {
    
    
    // std::cout << "DEBUG: DefaultAbility constructor works" << std::endl;
}

DefaultAbility::~DefaultAbility() {
    
}

void DefaultAbility::action(Unit* enemy) {
    enemy->ensureIsAlive();
    enemy->takeDamage(this->unit->getDamage());
    
    if ( enemy->getHitPoints() != 0 ) {
        this->unit->takeDamage(enemy->getDamage() / 2);
    }
}

// void Unit::addHitPoints(int hp) {
//     ensureIsAlive();
    
//     if ( this->hitPointsLimit - this->hitPoints >= hp ) {
//         this->hitPoints += hp;
//     } else {
//         this->hitPoints = this->hitPointsLimit;
//     }
// }




// void Unit::takeDamage(int dmg) = 0;

// std::ostream& operator<<(std::ostream& out, const UnitState& state) {
//     out << "Unit name: " << state.getName() << std::endl;
//     out << "Unit hit points: " << state.getHitPoints() << "/" << state.getHitPointsLimit() << std::endl;
//     out << "Unit damage: " << state.getDamage() << std::endl;
// }
