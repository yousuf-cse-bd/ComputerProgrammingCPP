/**
 * @file Program11_3.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief SAARC names
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
    char saarc[8][20] = {"Bangladesh", "Pakistan","Afghanistan", "Maldives", "Nepal", "Bhutan", 
    "Sri Lanka", "India"};
    for(unsigned int i = 0; i<8; i++){
        cout<<i+1<<". "<<saarc[i]<<endl;
    }
    return 0;
}
