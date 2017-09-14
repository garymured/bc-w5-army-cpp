#include "catch.hpp"
#include "../Units/Werewolf.h"

TEST_CASE( "Werewolf's getters", "[Werewolf]" ) {
    Werewolf* unit = new Werewolf("Misha");
    
    REQUIRE( unit->getName() == "Misha" );
    REQUIRE( unit->getUnitType() == "Werewolf" );
    REQUIRE( unit->getDamage() == werewolfDmgDefault );
    REQUIRE( unit->getHitPoints() == werewolfHpLimDefault );
    REQUIRE( unit->getHitPointsLimit() == werewolfHpLimDefault );
    
    delete unit;
}
