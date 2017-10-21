#include "catch.hpp"
#include "../Units/Vampire.h"
#include "../Units/Soldier.h"

TEST_CASE( "Vampire's getters", "[Vampire]" ) {
    Vampire* unit = new Vampire("Misha");
    
    REQUIRE( unit->getName() == "Misha" );
    REQUIRE( unit->getUnitType() == "Vampire" );
    REQUIRE( unit->getDamage() == vampDmgDefault );
    REQUIRE( unit->getHitPoints() == vampHpLimDefault );
    REQUIRE( unit->getHitPointsLimit() == vampHpLimDefault );
    
    delete unit;
}

TEST_CASE( "Vampire attack", "[Vampire]" ) {
    Vampire* vamp = new Vampire("Sanya");
    Soldier* sold = new Soldier("Lyoha");
    int temp1;
    int temp2;
    
    // std::cout << sold << std::endl;
    // std::cout << vamp << std::endl;
    
    sold->attack(vamp);
    
    // std::cout << sold << std::endl;
    // std::cout << vamp << std::endl;
    
    temp1 = vamp->getHitPointsLimit() - sold->getDamage() + vamp->getDamage() / 2 / 2;
    temp2 = sold->getHitPointsLimit() - vamp->getDamage() / 2;
    
    REQUIRE( vamp->getHitPoints() == temp1 );
    REQUIRE( sold->getHitPoints() == temp2 );
    
    vamp->attack(sold);
    
    // std::cout << sold << std::endl;
    // std::cout << vamp << std::endl;
    
    temp1 = vamp->getHitPointsLimit() - sold->getDamage() / 2;
    temp2 = temp2 - vamp->getDamage();
    
    REQUIRE( vamp->getHitPoints() == temp1 );
    REQUIRE( sold->getHitPoints() == temp2 );
    
    REQUIRE( sold->getUnitType() == "Vampire" );
    
    
    delete vamp;
    delete sold;
}