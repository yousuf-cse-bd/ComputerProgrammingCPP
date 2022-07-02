/**
 * @file Program5_7.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief F = (c * 1.8) + 32; vice versa
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
    double f,c;
    cout<<"Enter Celsius value here: ";
    cin>>c;
    /*Conversion celsius to fahreinheit*/
    f = (c * 1.8) + 32;
    cout<<"Fahreinheit: "<<f<<" in Degree"<<endl;
    /*Conversion fahreinheit to celsius*/
    c = (f - 32) / 1.8;
    cout<<"Celsius: "<<c<<" in Degree"<<endl;
    return 0;
}
