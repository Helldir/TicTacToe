#include "opponent.h"

Opponent::Opponent(Player* player)
{
    if(player->getName() == "X"){
        name = "O";
    } else
        name = "X";
}
