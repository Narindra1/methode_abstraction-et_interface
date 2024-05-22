
#include "Combat.hpp"

Combat::Combat(int life) : life(life) {}
Combat::~Combat() {}

void Combat::start() {
    std::cout << "Le jeu de combat commence." << std::endl;
}

void Combat::quit() {
    std::cout << "Le jeu de combat se termine." << std::endl;
}

void Combat::restart() {
    std::cout << "Le jeu de combat est redémarré." << std::endl;
}

bool Combat::gameOver() const {

    return false; 
}

bool Combat::win() const {
    
    return false; 
}

int Combat::getNumberOfLife() const {
    return life;
}

void Combat::pause() {
    std::cout << "Le jeu de combat est mis en pause." << std::endl;
}

void Combat::play() {
    std::cout << "La bataille commence." << std::endl;
}
