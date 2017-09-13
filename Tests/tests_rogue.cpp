#include "catch.hpp"
#include "../Units/Rogue.h"

TEST_CASE( "Rogue's getters", "[Rogue]" ) {
    Rogue* unit = new Rogue("Ahmed");
    
    REQUIRE( unit->getName() == "Ahmed" );
    REQUIRE( unit->getUnitType() == "Rogue" );
    REQUIRE( unit->getDamage() == rogueDmgDefault );
    REQUIRE( unit->getHitPoints() == rogueHpLimDefault );
    REQUIRE( unit->getHitPointsLimit() == rogueHpLimDefault );
    
    delete unit;
}
