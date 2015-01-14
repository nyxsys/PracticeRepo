#include "Maze.h"
#include <iostream>

using namespace std;


        node::node()
        {
            node::up=true;
            node::down=true;
            node::left=true;
            node::right=true;
            figure= 'o';
        }
        node::node(bool up, bool down, bool left, bool right)
        {
            this->up=up;
            this->down=down;
            this->left=left;
            this->right=right;
        }

        char node::printNode(){
        return figure;
        }

        void node::changeFig(char newFig){
        figure=newFig;
        return;
        }

        node::~node()
        {
            //dtor
        }


        maze::maze()
        {
//            int xlen=grid.size();
//            int ylen=grid[0].size();
            for(int i=0;i<length;i++){
                for(int n=0;n<width;n++){
                    node spot;
                    grid[i][n]= spot;
                }
            }
            return;
        }
        void maze::printmaze(){
//            int xlen=grid.size();
//            int ylen=grid[0].size();
            for(int i=0;i<length;i++){
                for(int n=0;n<width;n++){
                    cout << grid[i][n].printNode();
                    cout << "\t";
                }
                cout << "\n";
            }
            cout << "\n";
            return;
        }



