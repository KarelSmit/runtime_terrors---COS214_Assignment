#include "SupportBarracks.h"
#include "Supply.h"
#include "Medic.h"
SupportBarracks::SupportBarracks() {
    std::cout << "Support Barracks created." << std::endl;
}

Battalions* SupportBarracks::createConcreteProductA() {
    return new Supply(); 
}

Battalions* SupportBarracks::createConcreteProductB() {
    return new Medic(); 
}