#include "map.h"

using namespace std;

Map::Map()
{
    for (int i = 1; i <= 9; i++)
        gameMap.emplace(i, " ");
}

void Map::insertCell(int key, string name){
    gameMap[key] = name;
}

bool Map::searchVictory(string name){
    if(gameMap[1] == name && gameMap[2] == name && gameMap[3] == name)
        return true;
    if(gameMap[4] == name && gameMap[5] == name && gameMap[6] == name)
        return true;
    if(gameMap[7] == name && gameMap[8] == name && gameMap[9] == name)
        return true;
    if(gameMap[1] == name && gameMap[5] == name && gameMap[9] == name)
        return true;
    if(gameMap[3] == name && gameMap[5] == name && gameMap[7] == name)
        return true;
    if(gameMap[1] == name && gameMap[4] == name && gameMap[7] == name)
        return true;
    if(gameMap[2] == name && gameMap[5] == name && gameMap[8] == name)
        return true;
    if(gameMap[3] == name && gameMap[6] == name && gameMap[9] == name)
        return true;
    else
        return false;
}
