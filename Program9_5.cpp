/**
 * @file Program9_5.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief String length counter
 * @version 0.1
 * @date 2022-07-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
// #include <cstring>
using namespace std;
/*This is mystyle*/
unsigned int stringLenght(char str[]){
    unsigned int i;
    for(i = 0; str[i] != '\0'; i++);
    return i;
}
/*Computer programming Book*/
int stringLen(char str[]){
    int i, length;
    for(i = 0; str[i] != '\0'; i++){
        length++;
    }
    return length;
}

int main(int argc, char const *argv[])
{
    /* code */
    char str[100];
    // cout<<stringLenght(str)<<endl;
    // cout<<stringLen(str)<<endl;
    // cout<<strlen(str)<<endl;
    // cout<<sizeof(str) / sizeof(char)<<endl;


    while(true == scanf(" %[^\n]", str)){
        cout<<"Lenght: "<<stringLenght(str)<<endl;
    }
    return 0;
}
