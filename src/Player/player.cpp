#include "player.h"

Player::Player()
{
    name = ' ';
}

void Player::setO(){
    name = 'O';
}

void Player::setX(){
    name = 'X';
}

const std::string Player::getName(){
    return name;
}
