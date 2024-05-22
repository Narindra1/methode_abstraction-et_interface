
#include "Strategie.hpp"

Strategy::Strategy(int life) : life(life) {}
Strategy::~Strategy() {}

void Strategy::start() {
    std::cout << "Le jeu de stratégie commence." << std::endl;
}

void Strategy::quit() {
    std::cout << "Le jeu de stratégie se termine." << std::endl;
}

void Strategy::restart() {
    std::cout << "Le jeu de stratégie est redémarré." << std::endl;
}

bool Strategy::gameOver() const {
    
    return false; 
}

bool Strategy::win() const {
    
    return false; 
}

int Strategy::getNumberOfLife() const {
    return life;
}

void Strategy::pause() {
    std::cout << "Le jeu de stratégie est mis en pause." << std::endl;
}

void Strategy::play() {
    std::cout << "La partie de stratégie commence." << std::endl;
}
