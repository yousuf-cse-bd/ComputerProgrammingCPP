/**
 * @file Program13_2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Shape: Two triangle pointed single point
 * @version 0.1
 * @date 2022-07-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    /*Upper part*/
    for(unsigned int row = 6; row>=1; row--){
        for(unsigned int space = 6; space > row; space--){
            cout<<" ";
        }
        for(unsigned int column = 2*row - 1; column >=1; column--){
            cout<<"x";
        }
        cout<<endl;
    }
    /*Lower part*/
    for(unsigned int row = 2; row<=6; row++){
        for(unsigned int space = row; space < 6; space ++){
            cout<<" ";
        }
        for(unsigned int column = 1; column <=row * 2 -1 ; column ++){
            cout<<"x";
        }
        cout<<endl;
    }
    return 0;
}
