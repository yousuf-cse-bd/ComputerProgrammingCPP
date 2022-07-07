/**
 * @file Program9_4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Lower case to upper case and vice versa
 * @version 0.1
 * @date 2022-07-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char  countryName[] = "bangladesh";
    cout<<"The given a string: "<<countryName<<endl;
    for(unsigned int i = 0; countryName[i] != '\0'; i++){
       if(countryName[i] >= 'a' && countryName[i]<='z'){
            countryName[i] = 'A' + (countryName[i] - 'a');
       } 
    }
    cout<<"The upper case all letter: "<<countryName<<endl;
    for(unsigned int i = 0; countryName[i] != '\0'; i++){
        if(countryName[i] >= 'A' && countryName[i]<='Z'){
            countryName[i] = 'a' + (countryName[i] - 'A');
        }
    }
    cout<<"The lower case all letter: "<<countryName<<endl;
    return 0;
}
