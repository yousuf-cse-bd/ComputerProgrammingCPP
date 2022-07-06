/**
 * @file Program7_7.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find average of array using user defined function
 * @version 0.1
 * @date 2022-07-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

double caculateAvgElements(int A[], unsigned int size){
    double avg = 0.0;
    for(unsigned int i = 0;i<size; i++){
        avg += A[i];
    }
    avg = avg / size;
    return avg;
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
    cout<<"The Min Element: "<<caculateAvgElements(A, size)<<endl;
    return 0;
}
