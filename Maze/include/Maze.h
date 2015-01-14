#ifndef MAZE_H
#define MAZE_H
#include <iostream>
#include <string>

class node
{
    bool up;
    bool down;
    bool left;
    bool right;
    char figure;
public:
    node();
    node(bool,bool,bool,bool);
    char printNode();
    void changeFig(char);
    ~node();
};

class maze
{

public:

    int length=10;
    int width=10;
    node grid[10][10];
    maze();
    void printmaze();

};



#endif // MAZE_H
