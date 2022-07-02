/**
 * @file Program6_4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Array traversing
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
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for(unsigned int i = 0; i<10; i++){
        cout<<"Index: ["<<i<<"] = "<<arr[i]<<endl;
    }
    cout<<"\n\n";
    for(int i = 9; i>=0; --i){
        cout<<"Index: ["<<i<<"] = "<<arr[i]<<endl;
    }
    return 0;
}
