/**
 * @file Program5_4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Interest and origin bank loan
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
    double loanAmount, interestRate, payableTotatlAmount;
    unsigned int numberOfYears;
    cout<<"Enter the Loan Amount Here: ";
    cin>>loanAmount;
    cout<<"Enter Interest Rate Here: ";
    cin>>interestRate;
    cout<<"Number of Years: ";
    cin>>numberOfYears;
    interestRate = interestRate / 100;
    payableTotatlAmount = loanAmount + (loanAmount * interestRate);
    unsigned int numberOfMonth = numberOfYears * 12;
    cout<<"Total Pay Able Loan: "<<payableTotatlAmount<<endl;
    cout<<"Amount: "<<payableTotatlAmount / numberOfMonth<<" Per Month"<<endl;
    return 0;
}
