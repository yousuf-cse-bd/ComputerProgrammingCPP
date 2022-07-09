/**
 * @file Program10_1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find prime number normal methode
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
    for(unsigned int i = 2; i<n; i++){
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
            printf(" %c%c%c\n", 1,2,3);
        }else{
            printf("\t%c%c%c ", 4,5,6);
            cout<<n<<" is a not prime number.";
            printf(" %c%c%c\n", 4,5,6);
        }
    }
    return 0;
}
