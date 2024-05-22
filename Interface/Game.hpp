
#pragma once

class GameInterface {
public:
    virtual void start() = 0;
    virtual void quit() = 0;
    virtual void restart() = 0;
    virtual bool gameOver() const = 0;
    virtual bool win() const = 0;
    virtual int getNumberOfLife() const = 0;
    virtual void pause() = 0;
    virtual void play() = 0;
};
