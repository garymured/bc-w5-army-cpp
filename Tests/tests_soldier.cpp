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
