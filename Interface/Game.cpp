

#include "Game.hpp"
#include <iostream>

class ExampleGame : public GameInterface {
public:
    ExampleGame(int numberOfLives) : lives(numberOfLives) {}

    void start() override {
        std::cout << "Le jeu commence." << std::endl;
    }

    void quit() override {
        std::cout << "Le jeu se termine." << std::endl;
    }

    void restart() override {
        std::cout << "Le jeu est redémarré." << std::endl;
    }

    bool gameOver() const override {
        
        return lives == 0;
    }

    bool win() const override {
        
        return lives > 0;
    }

    int getNumberOfLife() const override {
        return lives;
    }

    void pause() override {
        std::cout << "Le jeu est mis en pause." << std::endl;
    }

    void play() override {
        std::cout << "La partie commence." << std::endl;
    }

private:
    int lives;
};

