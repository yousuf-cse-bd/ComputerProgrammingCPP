/**
 * @file Program14_4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Gready algorithm
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
    int x, y;
    cout<<"Please, Enter the initial position:"<<endl;
    cin>>x>>y;
    char command;
    while(true){
        cout<<"Enter your command here: ";
        cin>>command;
        if(command == 's' || command == 'S'){
            cout<<"Final position of the robot: ("<<x<<","<<y<<")"<<endl;
            break;
        }
        if(command == 'U' || command == 'u'){
            --x;
        }
        else if(command == 'D' || command == 'd'){
            ++x;
        }
        else if(command == 'R' || command == 'r'){
            ++y;
        }else if(command == 'L' || command == 'l'){
            --y;
        }
        else{
            continue;
        }
    }
   
    return 0;
}
