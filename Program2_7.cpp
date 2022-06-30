/**
 * @file Program2_7.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief type casting example
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
    int n1, n2;
    double x = 10.5;
    n1 = x; // Automatic type-casting
    n2 = (int)x; //Formal type-casting
    cout<<"Value of n1 is: "<<n1<<endl;
    cout<<"Value of n2 is: "<<n2<<endl;
    cout<<"Value of x is: "<<x<<endl;
    return 0;
}
