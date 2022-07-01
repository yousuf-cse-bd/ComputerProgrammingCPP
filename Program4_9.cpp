/**
 * @file Program4_6.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple application using adder and for loop
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
    unsigned int n = 5;
    unsigned int m = 0;
    for(unsigned int i = 1; i<=10; i++){
        m = m + n;
        cout<<n<<" X "<<i<<" = "<<m<<endl;
    }
   
    return 0;
}
