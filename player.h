#pragma once
#include <string>
#include "character.h"

using namespace std;

class Player : public Character {
    private:

    public:
        Player();
        void userInput();
};

