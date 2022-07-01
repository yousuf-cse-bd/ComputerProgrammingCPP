/**
 * @file Program3_12.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Vowel or Consonant
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
    cout<<"Enter a letter here: ";
    char letter = getchar();
    /*First check include alphabet*/
    if((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z')){
        if(letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' ||
        letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O'||
        letter == 'u' || letter == 'U'){
            cout<<"The letter is a vowel."<<endl;
        }else{
            cout<<"The letter is a consonant."<<endl;
        }
    }else{
        cout<<"Entered the letter is not alphabet."<<endl;
    }
    return 0;
}
