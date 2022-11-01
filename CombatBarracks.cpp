#include "CombatBarracks.h"
#include "TankDriver.h"
#include "Infantry.h"
CombatBarracks::CombatBarracks() {
    std::cout << "Combat Barracks created." << std::endl;
}

Battalions* CombatBarracks::createConcreteProductA() {
    return new TankDriver(); 
}

Battalions* CombatBarracks::createConcreteProductB() {
    return new Infantry(); 
}

CombatBarracks::~CombatBarracks() {
    
}