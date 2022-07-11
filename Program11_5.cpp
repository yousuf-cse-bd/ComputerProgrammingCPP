/**
 * @file Program11_5.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief SAARC names character wise and row and column numbers
 * @version 0.1
 * @date 2022-07-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char saarc[8][20] = {"Bangladesh", "Pakistan","Afghanistan", "Maldives", "Nepal", "Bhutan", 
    "Sri Lanka", "India"};
    for(unsigned int row = 0; row<8; row++){
        for(unsigned int column = 0; saarc[row][column] != '\0'; column++){
            cout<<"["<<row<<", "<<column<<"] = "<<saarc[row][column];
        }
        cout<<endl;
    }
    return 0;
}
