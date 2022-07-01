/**
 * @file Program5_1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief x + y = 15, x - y = 5 -> x,y?
 * @version 0.1
 * @date 2022-07-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    double x_plus_y = 15; 
    double x_minus_y = 5;
    double x = (x_plus_y + x_minus_y)/2;
    double y = (x_plus_y - x_minus_y)/2;
    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;
    return 0;
}
