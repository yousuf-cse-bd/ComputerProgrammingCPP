/**
 * @file Program4_4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief While loop break statement
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
    int n = 1;
    while(n <= 100){
        cout<<n<<" ";
        ++n;
        if(n > 10){
            break;
        }
    }
    return 0;
}
