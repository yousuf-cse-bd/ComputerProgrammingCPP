/**
 * @file Program4_6.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple application using for loop
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
    unsigned int n = 5;
    for(unsigned int increament = 1;increament <= 10; increament++){
        cout<<n<<" X "<<increament<<" = "<<n*increament<<endl;
    }
    return 0;
}
