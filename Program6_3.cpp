/**
 * @file Program6_2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Basic Array : index issue
 * @version 0.1
 * @date 2022-07-02
 * @since Saturday, 9.24PM
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int arr[5] = {16, 7, 4, 6, 9};
    cout<<arr[-1]<<endl;
    cout<<arr[5]<<endl;
    cout<<arr[100]<<endl;
    return 0;
}