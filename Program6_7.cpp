/**
 * @file Program6.7.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Marking program
 * @version 0.1
 * @date 2022-07-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int firstTermMarks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41,
     42, 47, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83,
     47, 95, 69, 82, 82, 58, 69, 67, 53, 56,71,62};
    unsigned int secondTermMarks[40] = {86, 97, 95, 93, 95, 89, 52, 49, 41, 42, 47,
    90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 42,
    58, 69, 67, 53, 56, 71, 62, 49};
    unsigned int finalMarks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64,
    55, 69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100,
    64, 55, 69, 85, 81, 67, 88, 71};
    double totalMarks[40];
    for(unsigned int i = 0; i<40; i++){
        totalMarks[i] = firstTermMarks[i] / 4.0 + secondTermMarks[i] / 4.0 + finalMarks[i] / 2.0;
    }
    for(unsigned int i = 0; i<40; i++){
        cout<<"Roll Nubmber: "<<i+1<<"\tTotalMark = "<<totalMarks[i]<<endl;
    }
    
    return 0;
}
