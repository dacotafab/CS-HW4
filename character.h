#pragma once
#include <string>

using namespace std;

class Character {
    protected:
        string name;
        int health; //Variables to track attributes health, defense, attack power, etc
        int defense;
        int attackPower;
    public:
        Character(string name, int health, int attackPower, int defense);
        void useAbility(Character &target);  
        void takeDamage(int damageTaken); 
        void showStatus(); 

    };