/**
 * @file Program4_10.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Multple table
 * @version 0.1
 * @date 2022-07-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    for(unsigned int i = 1; i<=20; i++){
        unsigned int m = 0;
        for(unsigned int j = 1; j<=10; j++){
            m = m + i;
            cout<<i<<" x "<<j<<" = "<<m<<endl;
        }
        cout<<endl;
    }
    return 0;
}
