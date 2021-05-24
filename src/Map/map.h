#ifndef MAP_H
#define MAP_H
#include <map>

using namespace std;

class Map
{
private:
    map <int, string> gameMap;
public:
    Map();
    void insertCell(int key, string name);
    bool searchVictory(string name);
};

#endif // MAP_H
