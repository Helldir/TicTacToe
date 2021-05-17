#include "game.h"

Game::Game(Player* player)
{    
    this->player = player;
    opponent = new Opponent(player);
}

std::string Game::getPlayer(){
    return player->getName();
}
