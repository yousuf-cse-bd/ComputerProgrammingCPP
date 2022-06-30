/**
 * @file Program_2_14iv.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Add, Sub, Mult, Div (Arithmetic Operation), differnt variable & sign char
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
    double num1, num2;
    cout<<"Please enter a number here: ";
    cin>>num1;
    cout<<"Please eneter another number here: ";
    cin>>num2;
    char adder, substractor, muliplier, divider;
    adder = '+';
    substractor = '-';
    muliplier = 'x';
    divider = '/';
    double add, sub, mult, div;
    add = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    cout<<num1<<" "<<adder<<" "<<num2<<" = "<<add<<endl;
    cout<<num1<<" "<<substractor<<" "<<num2<<" = "<<sub<<endl;
    cout<<num1<<" "<<muliplier<<" "<<num2<<" = "<<mult<<endl;
    cout<<num1<<" "<<divider<<" "<<num2<<" = "<<div<<endl;
    return 0;
}
