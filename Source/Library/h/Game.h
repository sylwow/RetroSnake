#pragma once
#include <list>
#include <vector>

#include "Board.h"
#include "Food.h"
#include "Snake.h"

class Game
{
  private:
    double _gameSpeed = 5.0;

    int _points = 0;
    enum class State
    {
        Ok,
        Over,
        Won
    } _state = State::Ok;

    Board _board;
    Snake _snake;
    Food _food;

  public:
    Game(size_t width, size_t height);
    void run();

  private:
    void update(Direction direction);
    void print() const;
    void spawnNewFood();
};
