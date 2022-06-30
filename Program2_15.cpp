/**
 * @file Program2_15.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple arithmetic operation
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
    int num1, num2, value;
    char sign;
    cout<<"Please enter a number here: ";
    cin>>num1;
    cout<<"Again please eneter a number here: ";
    cin>>num2;
    value = num1 + num2;
    sign = '+';
    cout<<num1<<" "<<sign<<" "<<num2<<" = "<<value<<endl;

    value = num1 - num2;
    sign = '-';
    cout<<num1<<" "<<sign<<" "<<num2<<" = "<<value<<endl;

    value = num1 * num2;
    sign = 'x';
    cout<<num1<<" "<<sign<<" "<<num2<<" = "<<value<<endl;

    value = num1 / num2;
    sign = '/';
    cout<<num1<<" "<<sign<<" "<<num2<<" = "<<value<<endl;
    return 0;
}
