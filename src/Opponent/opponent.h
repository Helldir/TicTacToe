#include "src/Player/player.h"
#pragma once

class Opponent : public Player
{
public:
    Opponent() = delete;
    Opponent(Player* player);
    void searchTurn();
};

