#include "Sniper.h"
Sniper::Sniper(Infantry* soldier) {
    soldier->setDamage(soldier->getDamage() + 3);
}

Sniper::~Sniper() {
    
}