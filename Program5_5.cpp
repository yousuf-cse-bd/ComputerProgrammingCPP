/**
 * @file Program5_5.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 1 + 2 + 3 + .... + N = sum
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int n;
    cout<<"Enter nth value here: ";
    cin>>n;
    unsigned int sum;
    sum = n*(n + 1)/2;
    cout<<"Sum = "<<sum<<endl;
    return 0;
}
