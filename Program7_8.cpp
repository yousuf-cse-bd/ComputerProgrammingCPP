/**
 * @file Program7_8.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Array not only value pass, that is like call by refference
 * @version 0.1
 * @date 2022-07-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
/*Array and pointer almost same things */
void testFunction(int A[]){
    A[0] = 101; // value uptded done
}

int main(int argc, char const *argv[])
{
    /* code */
    int A[5] = {10, 12, 20, 25, 5};
    testFunction(A);
    for(auto x: A){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
