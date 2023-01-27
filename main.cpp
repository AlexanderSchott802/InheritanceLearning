#include <iostream>
#include <ctime>

#include "Wizzard.h"
#include "Character.h"

int main() {
    srand(time(nullptr));
    Character *gandolf = new Wizzard("Gandolf", 100, 9);
    Wizzard *saron = new Wizzard("Saron", 100, 7);

    do{
        saron->startBattle();
        gandolf->startBattle();

        saron->battle(gandolf);
        gandolf->battle(saron);

        std::cout << *gandolf << std::endl;
        std::cout << *saron << std::endl;
    }while(saron->getHp() > 0 && gandolf->getHp() > 0);

    if(saron->getHp() > gandolf->getHp()){
        std::cout << "Saron won!" << std::endl;
    }else{
        std::cout << "Gandalf won!" << std::endl;
    }
    return 0;
}
