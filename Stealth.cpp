#include "Stealth.h"
Stealth::Stealth(Infantry* soldier) {
    soldier->setHP(soldier->getHP() + 3);
}

Stealth::~Stealth() {

}