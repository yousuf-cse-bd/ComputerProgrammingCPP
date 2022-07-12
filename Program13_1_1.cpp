/**
 * @file Program13_1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Shape: Right Angle Bracket
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
    int n = 7;
    /*Upper Part*/
    for(unsigned int row = 1; row<=n; row++){
        for(unsigned int space = 1; space < row; space++){
            cout<<" ";
        }
        for(unsigned int columm = n; columm >= row; columm --){
            cout<<">";
        }
        cout<<endl;
    }
    /*Lower Part*/
     for(unsigned int row = 2; row<=n; row++){
        for(unsigned int space = n; space > row; space--){
        cout<<" ";
        }
        for(unsigned int columm = 1; columm <= row; columm ++){
            cout<<">";
        }
        cout<<endl;
    }
    return 0;
}
