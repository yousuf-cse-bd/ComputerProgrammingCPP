/**
 * @file Program5_8.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Least Common Divisor(GCD) || Highest Common Factor(HCF)
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int firstNumber, secondNumber, remainder;
    cout<<"Enter First Number: ";
    cin>>firstNumber;
    cout<<"Enter Second Number: ";
    cin>>secondNumber;
    while(secondNumber != 0){
        remainder = firstNumber % secondNumber;
        firstNumber = secondNumber;
        secondNumber = remainder;
    }
    cout<<"GCD: "<<firstNumber<<endl;
    return 0;
}
