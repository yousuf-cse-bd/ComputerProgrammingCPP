/**
 * @file Program7_6.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Global Variable Declared and update by user-define-function 
 * @version 0.1
 * @date 2022-07-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

float PI =  3.14;

void piValueUpadte(){
    PI = 3.14159;
}

int main(int argc, char const *argv[])
{
    /* code */
    cout<<"Before update, PI = "<<PI<<endl;
    piValueUpadte();
    cout<<"After update, PI = "<<PI<<endl;

    return 0;
}
