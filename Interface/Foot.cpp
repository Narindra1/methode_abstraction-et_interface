
#include "Foot.hpp"

Football::Football(int life) : life(life) {}
Football::~Football() {}

void Football::start() {
    std::cout << "Le jeu de football commence." << std::endl;
}

void Football::quit() {
    std::cout << "Le jeu de football se termine." << std::endl;
}

void Football::restart() {
    std::cout << "Le jeu de football est redémarré." << std::endl;
}

bool Football::gameOver() const {
    
    return false;
}

bool Football::win() const {
    
    return false;
}

int Football::getNumberOfLife() const {
    return life;
}

void Football::pause() {
    std::cout << "Le jeu de football est mis en pause." << std::endl;
}

void Football::play() {
    std::cout << "La partie de football commence." << std::endl;
}
