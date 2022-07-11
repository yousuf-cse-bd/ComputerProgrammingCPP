/**
 * @file Program12_1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Binaray to Decimal
 * @version 0.1
 * @date 2022-07-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char binaryNumber[50] = "10110";
    unsigned int decimal = 0;
    unsigned int power = strlen(binaryNumber);
    --power;
    for(unsigned int i = 0; binaryNumber[i] != '\0'; i++){
        decimal += ((binaryNumber[i] - '0') * pow(2,power));
        --power;
    }
    cout<<"Decimal Number: "<<decimal<<endl;

    return 0;
}
