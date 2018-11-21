#ifndef MakeWorld_hpp
#define MakeWorld_hpp

#include <stdio.h>
#include <iostream>
#include "Map.hpp"



using namespace std;

class MakeWorld {
public:
    MakeWorld(string);
    Map* init_map();
private:
    const string path;
};

#endif /* MakeWorld_hpp */
