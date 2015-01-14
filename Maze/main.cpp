#include <iostream>
#include "Maze.h"

using namespace std;

int main()
{
    cout << "what up\n";
    maze test;
    test.printmaze();
    test.grid[0][0].changeFig('x');
    test.printmaze();
    return 0;
}
