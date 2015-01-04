#include "Maze.h"
#include <iostream>

using namespace std;

        int length=10;
        int width=10;
        char grid[10][10];
        maze::maze()
        {
//            int xlen=grid.size();
//            int ylen=grid[0].size();
            for(int i=0;i<length;i++){
                for(int n=0;n<width;n++){
                    grid[i][n]='o';
                }
            }
            return;
        }
        void maze::printmaze(){
//            int xlen=grid.size();
//            int ylen=grid[0].size();
            for(int i=0;i<length;i++){
                for(int n=0;n<width;n++){
                    cout << grid[i][n];
                    cout << "\t";
                }
                cout << "\n";
            }
            return;
        }


