/**
 * @file Program11_1_1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculate schoool class exam results and publish orderly
 * @version 0.1
 * @date 2022-07-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int marks[4][10] = {{80, 70, 92, 78, 58, 83, 85, 66, 99, 81,},
                                {75, 67, 55, 100, 91, 84, 79, 61, 90, 97},
                                {98, 67, 75, 89, 81, 83, 80, 90, 88, 77},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    // for(unsigned int i = 0; i<4; i++){
    //     for(unsigned int j = 0; j<10; j++){
    //         cout<<marks[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    /*Calculate all marks and store last row of marks*/
    for(unsigned int column = 0; column < 10; column++){
        marks[3][column] = marks[0][column] / 4.0 + marks[1][column] / 4.0 + marks[2][column] /2.0;
    }
    /*Sorting Technique: Bubble sort algorithm*/
    bool flag = true;
    for(unsigned int i = 0; i<10 - 1 && flag == true; i++){
        for(unsigned int j = 0; j<10 - (i + 1); j++){
            if(marks[3][j] < marks[3][j+1]){
                swap(marks[3][j], marks[3][j+1]);
                flag = true;
            }
        }
    }
    /*Print them*/
    for(unsigned int column = 0; column < 10; column++){
        cout<<"Roll NO: "<<column + 1<<"\tMarks = "<<marks[3][column]<<endl;
    }

    return 0;
}
