#include "player.h"
#include <iostream>

using namespace std;

//Constructor???????????
Player::Player() : Character("Player", 100, 20, 5) {} //name, health, attack, defense respectively

//method (? function?) to choose ability:
void Player::userInput() {
    int abilityNum;
    cout << "choose ability blah blah" << endl;
    cout << "list of abilities meow meow" << endl;
    cin >> abilityNum;

    cout << "you chose [ability]!" << abilityNum << "!" << endl;
    
}
