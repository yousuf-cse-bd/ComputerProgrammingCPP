/**
 * @file Program7_3.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief User defined function
 * @version 0.1
 * @date 2022-07-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
/*Auto casting in paramter-argument*/
float add(int a, int b){
    return (a + b);
}

int main(int argc, char const *argv[])
{
    /* code */
    float a = 2.7;
    float b = 7.1;
    cout<<add(a, b)<<endl;
    return 0;
}
