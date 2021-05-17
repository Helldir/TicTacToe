#include "src/Opponent/opponent.h"
#pragma once


class Game
{
private:
    Player* player;
    Opponent* opponent;
public:
    Game() = delete;
    Game(Player* player);
    std::string getPlayer();
};

