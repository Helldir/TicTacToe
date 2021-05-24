#include "src/Opponent/opponent.h"
#include "src/Map/map.h"
#pragma once


class Game
{
private:
    Player* player;
    Opponent* opponent;
    Map* gameMap;
public:
    Game() = delete;
    Game(Player* player);
    std::string getPlayer();
    void turnOpponent();
};

