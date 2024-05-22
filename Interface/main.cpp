
#include <iostream>
#include "Game.hpp"
#include "Foot.hpp"
#include "Combat.hpp"
#include "Strategie.hpp"

int main() {
    
    Football football(10);
    Combat combat(5);     
    Strategy strategy(7); 


    std::cout<<"\n"<<std::endl;
    football.start();
    combat.start();
    strategy.start();


    std::cout<<"\n"<<std::endl;
    football.play();
    combat.play();
    strategy.play();

    
    std::cout << "\nNombre de vies restantes dans le jeu de football: " << football.getNumberOfLife() << std::endl;
    std::cout << "Nombre de vies restantes dans le jeu de combat: " << combat.getNumberOfLife() << std::endl;
    std::cout << "Nombre de vies restantes dans le jeu de stratégie: " << strategy.getNumberOfLife() << std::endl;

    std::cout<<"\n"<<std::endl;
    football.pause();
    combat.restart();
    strategy.quit();

    return 0;
}
