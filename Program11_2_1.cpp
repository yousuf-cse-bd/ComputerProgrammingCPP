/**
 * @file Program11_2_1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Multiplication table using array, count odd-even and sum of them
 * @version 0.1
 * @date 2022-07-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    unsigned int multiplicationTable[10][10];
    register unsigned int counterOdd = 0, counterEven = 0;
    unsigned long long int sum = 0;
    for(unsigned int i = 0; i<10; i++){
        for(unsigned int j = 0; j<10; j++){
            multiplicationTable[i][j] = (i + 1) * (j + 1);
            cout<<i+1<<" x "<<j+1<<" = "<<multiplicationTable[i][j]<<endl;
            if(multiplicationTable[i][j] % 2 == 0){
                ++counterEven;
            }
            else{
                ++counterOdd;
            }
            sum += multiplicationTable[i][j];
        }
        cout<<endl;
    }

    cout<<"\nEven Numbers is: "<<counterEven<<endl;
    cout<<"Odd Number is: "<<counterOdd<<endl;
    cout<<"Sum of them: "<<sum<<endl;
    
    return 0;
}
