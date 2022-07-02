/**
 * @file Program6_5.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Array swapping internal
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
    int A[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100,110};
    int temp, i, j;

    for(i = 10, j = 0; i>=5; j++, i--){
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;

    }
    
    // for(i = 0, j = 10; i<5; i++,j --){
    //     temp = A[j];
    //     A[j] = A[i];
    //     A[i] = temp;
    // }
    for( i = 0; i<11; i++){
        cout<<"Index["<<i<<"] = "<<A[i]<<endl;
    }

    return 0;
}