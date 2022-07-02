/**
 * @file Program5_2x.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 4x + 5y = 14, 5x + 6y = 17
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
     double a1, b1, c1; //First Equation
    double a2, b2, c2; // Second equation

    // a1 = 4, b1 = 5, c1 = 14;
    // a2 = 5, b2 = 6, c2 = 17;
    cout<<"a1x + b1y = c1"<<endl;
    cout<<"a1?: ";
    cin>>a1;
    cout<<"b1?: ";
    cin>>b1;
    cout<<"c1?: ";
    cin>>c1;
   
    cout<<"b2x + b2y = c2"<<endl;
    cout<<"a2?: ";
    cin>>a2;
    cout<<"b2?: ";
    cin>>b2;
    cout<<"c2?: ";
    cin>>c2;
    double x = ((b2*c1) - (b1*c2))/((a1*b2) - (a2*b1));
    double y = ((a1*c2) - (a2*c1))/((a1*b2) - (a2*b1));
    cout<<"X: "<<x<<endl;
    cout<<"Y = "<<y<<endl;
    return 0;
}
