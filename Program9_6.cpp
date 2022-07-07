/**
 * @file Program9_6.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief String input using gets()
 * @version 0.1
 * @date 2022-07-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char str[100];
    while(NULL != gets(str)){
        cout<<"Entered: "<<str<<endl;
    }
    return 0;
}

