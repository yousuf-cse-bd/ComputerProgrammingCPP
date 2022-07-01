/**
 * @file Program4_4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief While loop continue statement
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
    int n = 0;
    while(n < 10){
        n = n + 1;
        if(n % 2 == 0){
            continue;
        }
        cout<<n<<" ";
    }
    return 0;
}
