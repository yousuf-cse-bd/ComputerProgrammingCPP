/**
 * @file Program11_2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Multiplication table using array
 * @version 0.1
 * @date 2022-07-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    unsigned int multiplicationTable[10][10];
    for(unsigned int i = 0; i<10; i++){
        for(unsigned int j = 0; j<10; j++){
            multiplicationTable[i][j] = (i + 1) * (j + 1);
            cout<<i+1<<" x "<<j+1<<" = "<<multiplicationTable[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
