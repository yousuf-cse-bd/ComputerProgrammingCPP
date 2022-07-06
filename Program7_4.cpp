/**
 * @file Progrm7_4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A user-defined function declared down to main function
 * @version 0.1
 * @date 2022-07-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    double a = 2.7;
    double b = 7.1;
    /*Function prototype but locally*/
    /* it may globally, and may be better than local segment*/
    double add(double, double); 
    /*Function calling*/
    cout<<add(a, b)<<endl;
    return 0;
}
/*User defined function declare under main-function*/
double add(double a, double b){
    return (a + b);
}
