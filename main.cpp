#include <iostream>
#include "Units/Soldier.h"
#include "Units/Rogue.h"
#include "Units/Vampire.h"
#include "Units/Werewolf.h"

int main() {
    /* 
    TESTING Vampire
    */
    
    // Unit* vamp1 = new Vampire("Sanya");
    // Unit* rogue1 = new Rogue("Vova");
    // Unit* sold1 = new Soldier("Dima");
    // Unit* werewolf1 = new Werewolf("Serega");
    
    Vampire* vamp1 = new Vampire("Sanya");
    Rogue* rogue1 = new Rogue("Vova");
    Soldier* sold1 = new Soldier("Dima");
    Werewolf* werewolf1 = new Werewolf("Serega");
    
    sold1->print();
    rogue1->print();
    
    rogue1->attack(sold1);
    
    sold1->print();
    rogue1->print();
    
    sold1->attack(rogue1);
    
    sold1->print();
    rogue1->print();
    
    delete vamp1;
    delete rogue1;
    delete sold1;
    
    /* 
    TESTING Soldier
    */
    
    // Unit* sold1 = new Soldier("Petr");
    // Unit* sold2 = new Soldier("Alex");
    
    // sold1->print();
    // sold2->print();
    
    // sold1->attack(sold2);
    
    // sold1->print();
    // sold2->print();
    
    // delete sold1;
    // delete sold2;
    
    /* 
    TESTING Rogue
    */
    
    // Unit* rogue1 = new Rogue("Petya");
    // Unit* sold1 = new Soldier("Vanya");
    // Unit* rogue2 = new Rogue("Vasya");
    
    // rogue1->print();
    // sold1->print();
    
    // rogue1->attack(sold1);
    
    // rogue1->print();
    // sold1->print();
    
    // sold1->attack(rogue1);
    
    // rogue1->print();
    // sold1->print();
    
    // delete rogue1;
    // delete sold1;
    // delete rogue2;
    
    return 0;
}
