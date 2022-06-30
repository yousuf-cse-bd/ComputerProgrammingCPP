/**
 * @file Program2_10.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Value input (int) from user by keyboard
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
    int a, b, sum;
    cout<<"Enter first value here: ";
    cin>>a;
    cout<<"Enter second value here: ";
    cin>>b;
    sum = a + b;
    cout<<a<<" + "<<b<<" = "<<sum<<endl;
    return 0;
}
