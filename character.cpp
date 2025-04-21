//Functions for Character class


#include <string>
#include "character.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void Character::useAbility(Character &target) {
    cout << name << " attacks " << target << "with " << abilityName;
    target.takeDamage(attackPower);
}  

void takeDamage(int damageTaken); 
void showStatus(); 
