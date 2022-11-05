#include "SpecialSkill.h"
SpecialSkill::SpecialSkill(Infantry* soldier, int choice) {
    this->soldier = soldier; 
    this->choice = choice; 
}

void SpecialSkill::addSkill() {
    if (choice == 1) {
        Sniper decorator(soldier);
    } else if (choice == 2) {
        Stealth decorator(soldier); 
    }
}