/**
 * @file Program2_11.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Value input (Real Number) from user by keyboard
 * @version 0.1
 * @date 2022-06-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    double a, b, sum;
    cout<<"Enter first value here: ";
    scanf("%lf", &a);
    cout<<"Enter second value here: ";
    cin>>b;
    sum = a + b;
    cout<<a<<" + "<<b<<" = "<<sum<<endl;
    return 0;
}
