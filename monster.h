#pragma once
#include <string>
#include "character.h"

using namespace std;

class Monster : public Character {
    private:

    public:
        Monster();
        void randomAbility();
};
