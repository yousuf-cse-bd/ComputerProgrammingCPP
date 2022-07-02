/**
 * @file Program5_5.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 1 + 3 + 5 + .... + N = sum
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
    unsigned int n, sum = 1;
    cout<<"Enter nth number: ";
    cin>>n;
    for(unsigned int i = 3; i<=n; i = i + 2){
        // cout<<i<<" ";
        sum += i;
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}
