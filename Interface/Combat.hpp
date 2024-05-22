
#pragma once
#include "Game.hpp"
#include <iostream>

class Combat : public GameInterface {
public:
    Combat(int life);
    ~Combat();

    void start() override;
    void quit() override;
    void restart() override;
    bool gameOver() const override;
    bool win() const override;
    int getNumberOfLife() const override;
    void pause() override;
    void play() override;

private:
    int life;
};
