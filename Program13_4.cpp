/**
 * @file Program13_4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Shape: Half butterfly
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
    for(unsigned int row = 1; row<=10; row++){
        for(unsigned int column = 1; column <= row; column++){
            cout<<"*";
        }
        for(unsigned int space = 2*10 - 2*row; space>=1; space--){
            cout<<" ";
        }
        for(unsigned int column = 1; column <= row; column++){
            cout<<"*";
        }
       cout<<endl;
    }    
    return 0;
}
