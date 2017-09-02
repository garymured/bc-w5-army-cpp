#include <iostream>
#include "Soldier/Soldier.h"
#include "Rogue/Rogue.h"
#include "Vampire/Vampire.h"

int main() {
    /* 
    TESTING Vampire
    */
    
<<<<<<< HEAD
    Unit* vamp1 = new Vampire("Drakula", 150, 20);
    Unit* rogue1 = new Rogue("Robin", 140, 15);
    Unit* sold1 = new Soldier("John", 100, 18);
    Unit* sold2 = new Soldier("Sold", 110, 22);
=======
    Unit* vamp1 = new Vampire();
    Unit* rogue1 = new Rogue();
    Unit* sold1 = new Soldier();
>>>>>>> unit-constructor-without-arguments
    
    rogue1->attack(vamp1);
    
    vamp1->print();
    rogue1->print();
    
    rogue1->attack(vamp1);
    
    vamp1->print();
    rogue1->print();
    
    vamp1->attack(rogue1);
    
    vamp1->print();
    rogue1->print();
    
    // vamp1->ability->infect(rogue1);
    
    vamp1->print();
    rogue1->print();
    
    rogue1->attack(sold1);
    
    rogue1->print();
    sold1->print();
    
    
    delete vamp1;
    delete rogue1;
    delete sold1;
    
    /* 
    TESTING Soldier
    */
    
    // Unit* sold1 = new Soldier();
    // Unit* sold2 = new Soldier();
    
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
    
    // Unit* rogue1 = new Rogue();
    // Unit* sold1 = new Soldier();
    
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
    
    return 0;
}
