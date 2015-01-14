#include "Node.h"
bool up;
bool down;
bool left;
bool right;
Node::Node()
{
    up=true;
    down=true;
    left=true;
    right=true;
}
Node::Node(bool up, bool down, bool left, bool right)
{
    this.up=up;
    this.down=down;
    this.left=left;
    this.right=right;
}

char Node::printNode(){
return "o";
}

Node::~Node()
{
    //dtor
}
