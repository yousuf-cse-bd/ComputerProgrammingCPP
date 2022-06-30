/**
 * @file Program2_14.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Add, Sub, Mult, Div (Arithmetic Operation)
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
    int num1, num2;
    cout<<"Please enter a number here: ";
    cin>>num1;
    cout<<"Please eneter another number here: ";
    cin>>num2;

    cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
    cout<<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;
    cout<<num1<<" x "<<num2<<" = "<<num1 * num2<<endl;
    cout<<num1<<" / "<<num2<<" = "<<num1 / num2<<endl;
    return 0;
}
