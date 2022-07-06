/**
 * @file Program7_9.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Area of triangle
 * @version 0.1
 * @date 2022-07-03
 * @since SunDay, 11:35 AM 
 * @copyright Copyright (c) 2022
 * 
 */


#include <iostream>
#include <cmath>
using namespace std;

double areaOfTriangle(float base, float heigt){
    double area = base * heigt * 0.5;
    return area;
}

double areaOfTriangle(float a, float b, float c){
    double s = (a + b + c) / 2.0;
    double area = s*(s - a);
    area = area * (s - b);
    area = area * (s - c);
    area = sqrt(area);
    return area;
}

int main(int argc, char const *argv[])
{
    /* code */
    cout<<"Area of triangle: "<<areaOfTriangle(5, 10)<<endl;
    cout<<"Area of triangle: "<<areaOfTriangle(20, 20, 20)<<endl;

    return 0;
}
