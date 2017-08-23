#include "UnitState.h"

UnitState::UnitState() {
    // std::cout << "DEBUG: UnitState constructor works" << std::endl;
}

UnitState::~UnitState() {
    // std::cout << "DEBUG: UnitState destructor works" << std::endl;
}

int UnitState::getHitPoints() const {
    return this->hitPoints;
}

int UnitState::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

int UnitState::getDamage() const {
    return this->physicalDamage;
}

const std::string& UnitState::getName() const {
    return this->name;
}

void UnitState::setName(std::string name) {
    this->name = name;
}

void UnitState::setHitPoints(int hp) {
    this->hitPointsLimit = hp;
    this->hitPoints = hp;
}

void UnitState::setPhysicalDamage(int dmg) {
    this->physicalDamage = dmg;
}