#include "Unit.h"

Unit::Unit(std::string name) {
    this->state = new UnitState();
    this->ability = new DefaultAbility(this);
    
    setName(name);
    // this->state->setName(name);
    // this->state->setHitPoints(hp);
    // this->state->setHitPointsLimit(hp);
    // this->state->setPhysicalDamage(dmg);
    
    // std::cout << "DEBUG: Unit constructor works" << std::endl;
}

Unit::~Unit() {
    delete state;
    delete ability;
    // std::cout << "DEBUG: Unit destructor works" << std::endl;
}

void Unit::setState(std::string unitType, int hp, int hpLim, int dmg) {
    this->state->setUnitType(unitType);
    this->state->setHitPoints(hp);
    this->state->setHitPointsLimit(hpLim);
    this->state->setPhysicalDamage(dmg);
}

const std::string& Unit::getName() const {
    return this->state->getName();
}

const std::string& Unit::getUnitType() const {
    return this->state->getUnitType();
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

void Unit::setAbility(Ability* newAbility) {
    delete this->ability;
    
    this->ability = newAbility;
}

void Unit::setName(std::string name) {
    this->state->setName(name);
}

void Unit::setUnitType(const std::string unitType) {
    this->state->setUnitType(unitType);
}

// void Unit::infect(Unit* victim) {
//     std::cout << "DEBUG: Unit infect works" << std::endl;
// }

void Unit::attack(Unit* enemy) {
    
    this->ability->attack(enemy);
    // enemy->counterAttack(this);
}

void Unit::counterAttack(Unit* enemy) {
    
    this->ability->counterAttack(enemy);
    // enemy->counterAttack(this);
}

void Unit::print() const {
    std::cout << "Unit name:       " << this->getName() << "\n"
              << "Unit type:       " << this->getUnitType() << "\n"
              << "Unit hit points: " << this->getHitPoints() << "/"
              << this->getHitPointsLimit() << "\n"
              << "Unit damage:     " << this->getDamage() << std::endl << std::endl;
}



void Unit::addHitPoints(int hpToAdd) {
    ensureIsAlive();
    
    int hitPoints = this->state->getHitPoints();
    int hitPointsLimit = this->state->getHitPointsLimit();
    
    if ( hitPointsLimit - hitPoints >= hpToAdd ) {
        this->state->setHitPoints(hitPoints + hpToAdd);
    } else {
        this->state->setHitPoints(hitPointsLimit);
    }
}

bool Unit::getStateIsWolf() {}
void Unit::setStateIsWolf(bool state) {}

void Unit::switchState() {}

DefaultAbility::DefaultAbility(Unit* unit) : Ability(unit) {
    
    
    // std::cout << "DEBUG: DefaultAbility constructor works" << std::endl;
}

DefaultAbility::~DefaultAbility() {
    
}

void DefaultAbility::attack(Unit* enemy) {
    enemy->ensureIsAlive();
    enemy->takeDamage(this->unit->getDamage());
    
    enemy->ensureIsAlive();
    enemy->counterAttack(this->unit);
}

void DefaultAbility::counterAttack(Unit* enemy) {
    enemy->ensureIsAlive();
    
    enemy->takeDamage(this->unit->getDamage() / 2);
}



// void Unit::takeDamage(int dmg) = 0;

std::ostream& operator<<(std::ostream& out, const Unit* unit) {
    out << "Unit type:       " << unit->getUnitType() << "\n"
        << "Unit name:       " << unit->getName() << "\n"
        << "Unit hit points: " << unit->getHitPoints() << "/" << unit->getHitPointsLimit() << "\n"
        << "Unit damage:     " << unit->getDamage() << std::endl;
        
        return out;
}
