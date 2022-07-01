/**
 * @file Program3_4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Positive & negative value without consider zero
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
    int n = -10;
    if(n == 0){
        cout<<"The number is zero."<<endl;
    }else if(n>0){
        cout<<"The number is positive."<<endl;
    }
    else{
        cout<<"The number is negative."<<endl;
    }
    return 0;
}
