/**
 * @file Program3_8.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Odd-even number
 * @version 0.1
 * @date 2022-07-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int number, remainder;
    number = 5;
    remainder = number % 2;
    if(remainder == 0){
        cout<<"The number is even."<<endl;
    }
    else{
        cout<<"The number is odd."<<endl;
    }
    return 0;
}
