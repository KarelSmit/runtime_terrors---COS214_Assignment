#include "CombatBarracks.h"
#include "TankDriver.h"
#include "Infantry.h"
CombatBarracks::CombatBarracks() {

}

FootUnit* CombatBarracks::createFootUnit() {
    return new Infantry(5, 3); // HP first, then damage
}

TransportUnit* CombatBarracks::createTransportUnit() {
    return new TankDriver(5, 4); // HP first, then damage
}

CombatBarracks::~CombatBarracks() {
    
}