/**
 * @file Program6_1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Three terms exam result calculation
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
    unsigned int firstTerm, secondTerm, final;
    cout<<"Enter First Term Exam Result Number: ";
    cin>>firstTerm;
    cout<<"Enter Second Term Exam Result Number: ";
    cin>>secondTerm;
    cout<<"Final Exam Result Number: ";
    cin>>final;
    float totalMarks;
    totalMarks = (double)(firstTerm / 4.0 + secondTerm / 4.0 + final / 2.0); 
    cout<<"The Total Marks: "<<totalMarks<<endl;
    return 0;
}
