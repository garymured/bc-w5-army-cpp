#include <iostream>
#include "Soldier.h"

int main() {
    // Unit* a = new Unit("Unit", 200, 15);
    
    // delete a;
    
    Unit* sold1 = new Soldier("Jane", 100, 10);
    Unit* sold2 = new Soldier("Tommy", 150, 20);
    
    // std::cout << sold1 << std::endl;
    // sold1->print();
    
    // sold1->attack(sold2);
    
    delete sold1;
    delete sold2;
    
    return 0;
}
