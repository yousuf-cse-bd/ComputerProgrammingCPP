/**
 * @file Program12_2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Decimal to Binary
 * @version 0.1
 * @date 2022-07-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
void decimal2Binary(unsigned int decimal){
    unsigned int size;
    for(unsigned int i = 1; i<=decimal; i = i * 2, size ++);
    char binaryDigits[size];
    unsigned int digitWise;
    for(int i = size - 1; i>=0; i--){
        digitWise = decimal % 2;
        binaryDigits[i] = digitWise + 48;
        decimal /= 2;  
    }
    cout<<"The Binary Digits: "<<binaryDigits<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int decimal = 95;
    decimal2Binary(decimal);
    
    return 0;
}
