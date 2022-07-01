/**
 * @file Program3_6.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief if vs else if
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
    int n = 10;
    if(n < 30){
        cout<<n<<" is less than 30."<<endl;
    }
    else if(n < 50){
        cout<<n<<" is less than 50."<<endl;
    }
    return 0;
}
