//
// Created by Alexander Schott on 1/27/23.
//

#ifndef INHERITANCELEARNING_CHARACTER_H
#define INHERITANCELEARNING_CHARACTER_H

#include "iostream"
class Character{
public:
    Character() : name("Unnamed"), hp(0){}
    Character(std::string uName, int uHp) : name(uName), hp(uHp){}

    virtual void startBattle(){
        attack = (rand() % 10) + 2;
        defence = (rand() % 10) + 2;
    }

    virtual void takeDamage(int damage){
        hp -= damage;
    }

    void battle(Character *enemy){
        if(attack > enemy->defence){
            int damage = attack - enemy->defence;
            enemy->takeDamage(damage);
            std::cout << name << " Hits for " << damage << " damage!" << std::endl;
        }else{
            std::cout << name << " attempts to hit, but is blocked!" << std::endl;
        }
    }

    int getHp(){
        return hp;
    }

    friend std::ostream &operator << (std::ostream &output, const Character &c){
        output << c.name << " " << c.hp << std::endl;
        return output;
    }
protected:
    std::string name;
    int defence;
    int attack;
    int hp;
};


#endif //INHERITANCELEARNING_CHARACTER_H
