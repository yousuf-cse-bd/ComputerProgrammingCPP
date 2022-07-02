/**
 * @file Program5_8.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Least Common Divisor(GCD) || Highest Common Factor(HCF)
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a = 3, b = 19;
    cout<<"GCD: "<<__gcd(a, b)<<endl;
    
    int x = (a < b)? a : b; 
    int gcd;
   while(true){
    if(a % x == 0 && b % x == 0){
        cout<<"GCD: "<<x<<endl;
        break;
    }
    --x;
   }
  
    return 0;
}
