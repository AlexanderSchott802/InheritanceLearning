//
// Created by Alexander Schott on 1/27/23.
//

#ifndef INHERITANCELEARNING_WIZZARD_H
#define INHERITANCELEARNING_WIZZARD_H

#include <iostream>
#include "Character.h"

class Wizzard : public Character{
public:
    Wizzard(std::string name, int hp, int magic) : Character(name, hp), magic(magic){}

    void startBattle(){
        attack = (rand() % 10) + 2 + magic;
        defence = (rand() % 10) + 2 + magic;
    }
private:
    int magic;

};


#endif //INHERITANCELEARNING_WIZZARD_H
