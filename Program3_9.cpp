/**
 * @file Program3_8.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Odd-even number no extra variable
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
    int number = 5;
    
    if(number % 2 == 0){
        cout<<"The number is even."<<endl;
    }
    else{
        cout<<"The number is odd."<<endl;
    }
    return 0;
}
