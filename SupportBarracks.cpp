#include "SupportBarracks.h"
#include "Supply.h"
#include "Medic.h"
SupportBarracks::SupportBarracks() {
   
}

FootUnit* SupportBarracks::createFootUnit() {
    return new Medic(5,3); // HP first then rejuvenationPower 
}

TransportUnit* SupportBarracks::createTransportUnit() {
    return new Supply(5); // HP 
}

