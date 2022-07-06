/**
 * @file Program6_10ComplexArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple program just to understand an complex array
 * @version 0.1
 * @date 2022-07-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int totalMarks[] = {6, 7, 4, 6, 9, 7, 6, 2, 4, 3, 4, 1};
    unsigned int size = sizeof(totalMarks) / sizeof(int);
    unsigned int countMark[size + 1] = {0};
    for(unsigned int i = 0; i<size; i++){
        countMark[totalMarks[i]] ++;
       
        // cout<<endl;
    }
    for(short i = 1; i<=10; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for(unsigned int j = 1; j<=10; j++){
        cout<<countMark[j]<<" ";
    }
    return 0;
}
