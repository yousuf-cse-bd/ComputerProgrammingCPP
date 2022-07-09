/**
 * @file Program10_2_1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implementation sieve of Eratosthenes for prime numbers.
 * @version 0.1
 * @date 2022-07-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
const unsigned int size = 40;
int arr[size];
void printArray(){
    for(unsigned int i = 2; i<size; i++){
        printf("%4d", arr[i]);
    }
    printf("\n");

    for(unsigned int i = 2; i<size; i++){
        printf("----");
    }
    printf("\n");
    for(unsigned int i = 2; i<size; i++){
        printf("%4d", i);
    }
    printf("\n\n\n");
}

void sieve(){
    int i,j;
    for(i = 2; i<size; i++){
        arr[i] = 1;
    }
    printArray();
    for(i = 2; i * i <= size; i++){
        if(arr[i] == 1){
            for(j = 2; i*j<=size; j++){
                arr[i * j] = 0;
            }
            printArray();
        }
    }
}
int isPrime(int n){
    int i;
    if(n < 2){
        return 0;
    }
    return arr[n];
}
int main(int argc, char const *argv[])
{
    /* code */
    int n, m;
    sieve();
    while(true){
        printf("Please, Enter a number (Enter 0 to EXIT):?");
        cin>>n;
        if(n == 0){
            break;
        }
        if(n >= size){
            cout<<"The number should be less than "<<size<<endl;
            continue;
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
