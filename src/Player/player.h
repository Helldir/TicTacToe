#pragma once
#include <iostream>

class Player
{
protected:
    std::string name;
public:
    Player();
    void setX();
    void setO();
    const std::string getName();
};

