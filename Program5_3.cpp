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
    double a1,a2,b1,b2,c1,c2,d, x,y;
    cout<<"a1 = ";
    cin>>a1;
    cout<<"a2 = ";
    cin>>a2;
    cout<<"b1 = ";
    cin>>b1;
    cout<<"b2 = ";
    cin>>b2;
    cout<<"c1 = ";
    cin>>c1;
    cout<<"c2 = ";
    cin>>c2;
    d = a1 * b2 - a2 * b1;
    if((int) d == 0){
        cout<<"Value of x and y can not be determined."<<endl;
    }else{
        x = (b2 * c1 - b1 * c2) / d;
        y = (a1 * c2 - a2 * c1) / d;
        cout<<"X = "<<x<<endl;
        cout<<"Y = "<<y<<endl;
    }
    return 0;
}
