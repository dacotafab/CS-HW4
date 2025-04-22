#include "character.h"
#include <iostream>

using namespace std;

//Constructor????????????
Character::Character(string charName, int hp, int atk, int def) {
    name = charName;
    health = hp;
    attackPower = atk;
    defense = def;
}

//Take damage function??????????
void Character::takeDamage(int damageTaken) {
    int damageAfterDefense = damageTaken - defense;
    if (damageAfterDefense < 0) damageAfterDefense = 0;

    health -= damageAfterDefense;
    if (health < 0) health = 0;

    cout << name << " took " << damageAfterDefense << " damage!" << endl;
}

//Show character stats
void Character::showStatus() {
    cout << "---- " << name << " ----" << endl;
    cout << "Health: " << health << endl;
    cout << "Attack Power: " << attackPower << endl;
    cout << "Defense: " << defense << endl;
    cout << "------------------" << endl;
}




/*//Functions for Character class


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
*/