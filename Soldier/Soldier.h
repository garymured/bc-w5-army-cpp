#ifndef SOLDIER_H
#define SOLDIER_H

#include <iostream>
#include "../Unit/Unit.h"

class Soldier : public Unit {
    private:
    
    public:
        Soldier();
        ~Soldier();
};

// std::ostream& operator<<(std::ostream& out, const Soldier* soldier);

#endif // SOLDIER_H
