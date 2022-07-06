/**
 * @file Program6_8.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief All marks particular marks person count smart way
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
    int totalMarks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
    65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88,
    73, 62, 66, 76, 70, 67, 65, 77, 63};
    int marksCount[101] = {0};
    for(unsigned int i = 0; i<40; i++){
        marksCount[totalMarks[i]]++;
    }
    for(unsigned int i = 50; i<=100; i++){
        cout<<"Marks: "<<i<<" Counter = "<<marksCount[i]<<endl;
    }
    return 0;
}
