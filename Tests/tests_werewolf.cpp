#include "catch.hpp"
#include "../Units/Werewolf.h"
#include "../Units/Soldier.h"
#include "../Units/Rogue.h"

TEST_CASE( "Werewolf's getters", "[Werewolf]" ) {
    Werewolf* unit = new Werewolf("Misha");
    
    REQUIRE( unit->getName() == "Misha" );
    REQUIRE( unit->getUnitType() == "Werewolf" );
    REQUIRE( unit->getDamage() == werewolfDmgDefault );
    REQUIRE( unit->getHitPoints() == werewolfHpLimDefault );
    REQUIRE( unit->getHitPointsLimit() == werewolfHpLimDefault );
    
    delete unit;
}

TEST_CASE( "Werewolf's attack: Soldier", "[Werewolf]" ) {
    Werewolf* werewolf = new Werewolf("Semen");
    Soldier* sold = new Soldier("Petr");
    int soldDamage = sold->getDamage();
    int temp = soldDamage;
    
    // std::cout << soldDamage << std::endl;
    // std::cout << werewolf->getHitPointsLimit() << std::endl;
    
    sold->attack(werewolf);
    
    REQUIRE ( werewolf->getHitPoints() == werewolf->getHitPointsLimit() - soldDamage );
    
    werewolf->attack(sold);
    
    temp = sold->getHitPointsLimit() - werewolf->getDamage() - werewolf->getDamage() / 2;
    
    REQUIRE ( sold->getHitPoints() == temp );
    REQUIRE ( sold->getUnitType() == "Werewolf");
    
    delete werewolf;
    delete sold;
}