/**
 * @file Program2_8.cpp
 * @author  Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Check data type limitaion
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
    int a;
    a = 1000;
    cout<<"Value of a is: "<<a<<endl;
    a = -21000;
    cout<<"Value of a is: "<<a<<endl;
    a = 100000001;
    cout<<"Value of a is: "<<a<<endl;
    a = -100000001;
    cout<<"Value of a is: "<<a<<endl;
    a = 100020004000503;
    cout<<"Value of a is: "<<a<<endl;
    a = -4325987632;
    cout<<"Value of a is: "<<a<<endl;
    return 0;
}
