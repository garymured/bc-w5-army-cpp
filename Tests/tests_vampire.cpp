#include "catch.hpp"
#include "../Units/Vampire.h"

TEST_CASE( "Vampire's getters", "[Vampire]" ) {
    Vampire* unit = new Vampire("Misha");
    
    REQUIRE( unit->getName() == "Misha" );
    REQUIRE( unit->getUnitType() == "Vampire" );
    REQUIRE( unit->getDamage() == vampDmgDefault );
    REQUIRE( unit->getHitPoints() == vampHpLimDefault );
    REQUIRE( unit->getHitPointsLimit() == vampHpLimDefault );
    
    delete unit;
}
