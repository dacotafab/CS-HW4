#include <string>

using namespace std;

class Character {
    protected:
        int health; //Variables to track attributes health, defense, attack power, etc
        int defense;
        int attackPower;
        string name;
    public:
        Character(string, int, int, int); //string name, followed by int attributes
        void useAbility(int, int); //arguments are int ability, int amount of damage
            //useAbility will be defined as below in character.cpp:
            /*if abilityValue = 1 (1 for fireball): 
                int fireDamage = fire damage math
                monsterHealth -= fireDamage*/  
        void takeDamage(int); //int amount of damage
        int updateStatus(int, int); //damage taken, damage remaining

    };