/**
 * @file Program14_5.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Gready algorithm using 2D array
 * @version 0.1
 * @date 2022-07-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    bool grid[10][10];
    for(unsigned int i = 0; i<10;i++){
        for(unsigned j = 0; j<10; j++){
            grid[i][j] = true;
        }
    }
    unsigned int n, x, y;
    cout<<"Please, Enter the number of block cells: ";
    cin>>n;
    cout<<"Enter the cells:"<<endl;
    for(unsigned int i = 0; i<n; i++){
        cin>>x>>y;
        grid[x][y] = false;
    } 
    for(unsigned int i = 0; i<10; i++){
        for(unsigned int j = 0; j<10; j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    /*Main logic*/
    char command;
    cout<<"Enter the initial position:"<<endl;
    cin>>x>>y;
    bool flag = true;
    for(unsigned int i = 0; i<10 && flag == true; i++){
        for(unsigned int j = 0; j<10; j++){
            cout<<"Enter the command here: ";
            cin>>command;
            if(grid[x][y] == true){
                if(command == 'u' || command == 'U' ){
                   (grid[x-1][y])?:--x;
                }
                if(command == 'd' || command == 'D'){
                    (grid[x+1][y] == false)?:++x;
                }
                if(command == 'l' || command == 'L'){
                    (grid[x][y-1] == false)?:--y;
                }
                if(command == 'r' || command == 'L'){
                    (grid[x][y+1] == false)?:++y;
                }
                if(command == 'S' || command == 's'){
                    flag = false;
                    break;
                }else{
                    continue;
                }
            }
            else{
                if(command == 'S' || command == 's'){
                    flag = false;
                    break;
                }
            }
        }      
    }
    cout<<"Final position of the robot: ("<<x<<", "<<y<<")"<<endl;  
    return 0;
}
