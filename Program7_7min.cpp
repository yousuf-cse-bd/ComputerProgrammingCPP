/**
 * @file Program7_7.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find min value from array using user defined function
 * @version 0.1
 * @date 2022-07-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int findMinElement(int A[], unsigned int size){
    int minElement = A[0];
    for(unsigned int i = 1;i<size; i++){
        if(A[i] < minElement){
            minElement = A[i];
        }
    }
    return minElement;
}
int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cout<<"Enter nth value here: ";
    cin>>n;

    unsigned int size = (n > 0)? n : (-1)*n;
    int A[size];
    for(unsigned int i = 0; i<size; i++){
        cout<<"Index: ["<<i<<"] = Element = ";
        cin>>A[i];
    }
    cout<<"The Min Element: "<<findMinElement(A, size)<<endl;
    return 0;
}
