/**
 * @file Program6_5.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Array copping
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
    int arr1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int arr2[10];
    for(int i = 9, j = 0; i>=0; j++, i--){
        arr2[j] = arr1[i];
    }
    for(unsigned int i = 0; i<10; i++){
       arr1[i] = arr2[i];
    }
    for(unsigned int i = 0; i<10; i++){
        cout<<arr1[i]<<" ";
    }

    return 0;
}