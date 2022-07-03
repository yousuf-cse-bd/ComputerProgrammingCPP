/**
 * @file Program7_5.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Local variable manipulation
 * @version 0.1
 * @date 2022-07-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int testFunction(int x){
    int y = x;
    x = 2 * y;
    return (x*y);
}

int main(int argc, char const *argv[])
{
    /* code */
    int x = 10, y = 20, z = 30;
    z = testFunction(x);
    cout<<x<<"\t"<<y<<"\t"<<z<<endl;
    return 0;
}
