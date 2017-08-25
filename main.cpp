#include <iostream>
#include "Soldier.h"
#include "Rogue.h"

int main() {
    /* 
    TESTING Soldier
    */
    
    // Unit* sold1 = new Soldier("Jane", 100, 10);
    // Unit* sold2 = new Soldier("Tommy", 150, 20);
    
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
    
    Unit* rogue1 = new Rogue("Rogue1", 140, 15);
    Unit* sold1 = new Soldier("Jane", 100, 10);
    
    rogue1->print();
    sold1->print();
    
    rogue1->attack(sold1);
    
    rogue1->print();
    sold1->print();
    
    delete rogue1;
    delete sold1;
    
    return 0;
}
