/**
 * @file Program7_2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief User defined function
 * @version 0.1
 * @date 2022-07-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

double add(double a, double b){
    return (a + b);
}

int main(int argc, char const *argv[])
{
    /* code */
    double a = 2.7;
    double b = 7.1;
    cout<<add(a, b)<<endl;
    return 0;
}
