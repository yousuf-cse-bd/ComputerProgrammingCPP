/**
 * @file Program10_1_1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find prime number all even numbers are not prime except 2
 * @version 0.1
 * @date 2022-07-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n < 2){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    if(n%2 == 0){
        return 0;
    }
    for(unsigned int i = 3; i <=n / 2; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    while(true){
        printf("Please, Enter a number (Enter 0 to EXIT):?");
        cin>>n;
        if(n == 0){
            break;
        }
        if(isPrime(n)){
            printf("\t%c%c%c ", 1,2,3);
            cout<<n<<" is a prime number.";
            printf(" %c%c%c\n",3,1,2);
        }else{
            printf("\t%c%c%c ", 4,5,6);
            cout<<n<<" is a not prime number.";
            printf(" %c%c%c\n", 6,5,4);
        }
    }
    return 0;
}