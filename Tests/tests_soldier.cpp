#include "catch.hpp"
#include "../Units/Soldier.h"

TEST_CASE( "Soldier's getters", "[Soldier]" ) {
    Soldier* unit = new Soldier("Ahmed");
    
    REQUIRE( unit->getName() == "Ahmed" );
    REQUIRE( unit->getUnitType() == "Soldier" );
    REQUIRE( unit->getDamage() == soldDmgDefault );
    REQUIRE( unit->getHitPoints() == soldHpLimDefault );
    REQUIRE( unit->getHitPointsLimit() == soldHpLimDefault );
    
    delete unit;
}

TEST_CASE( "Soldier attack", "[Soldier]" ) {
    Soldier* soldat1 = new Soldier("Ahmed");
    Soldier* soldat2 = new Soldier("Ivan-23");
    
    soldat1->attack(soldat2);
    
    REQUIRE ( soldat1->getHitPoints() == soldat1->getHitPointsLimit() - soldat2->getDamage() / 2 );
    REQUIRE ( soldat2->getHitPoints() == soldat2->getHitPointsLimit() - soldat1->getDamage() );
    
    delete soldat1;
    delete soldat2;
}
