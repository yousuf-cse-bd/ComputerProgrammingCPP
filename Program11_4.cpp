/**
 * @file Program11_4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief SAARC names character wise
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
    for(unsigned int i = 0; i<8; i++){
        // unsigned int lenght = strlen(saarc[i]);
        cout<<i+1<<": ";
        for(unsigned int j = 0; saarc[i][j] != '\0'; j++){
            cout<<saarc[i][j];
        }
        cout<<endl;
    }
    return 0;
}
