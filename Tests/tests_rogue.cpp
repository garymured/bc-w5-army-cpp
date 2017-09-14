#include "catch.hpp"
#include "../Units/Rogue.h"
#include "../Units/Soldier.h"

TEST_CASE( "Rogue's getters", "[Rogue]" ) {
    Rogue* unit = new Rogue("Ahmed");
    
    REQUIRE( unit->getName() == "Ahmed" );
    REQUIRE( unit->getUnitType() == "Rogue" );
    REQUIRE( unit->getDamage() == rogueDmgDefault );
    REQUIRE( unit->getHitPoints() == rogueHpLimDefault );
    REQUIRE( unit->getHitPointsLimit() == rogueHpLimDefault );
    
    delete unit;
}

TEST_CASE( "Rogue attack", "[Rogue]" ) {
    Rogue* rogue = new Rogue("Bandit");
    Soldier* soldier = new Soldier("Soldat");
    
    rogue->attack(soldier);
    
    REQUIRE( soldier->getHitPoints() == soldier->getHitPointsLimit() - rogue->getDamage() );
    REQUIRE( rogue->getHitPoints() == rogue->getHitPointsLimit() );
    
    soldier->attack(rogue);
    
    REQUIRE( soldier->getHitPoints() == soldier->getHitPointsLimit() - rogue->getDamage() - rogue->getDamage() / 2 );
    REQUIRE( rogue->getHitPoints() == rogue->getHitPointsLimit() - soldier->getDamage() );
    
    delete rogue;
    delete soldier;
}
