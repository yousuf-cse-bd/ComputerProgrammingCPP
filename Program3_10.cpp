/**
 * @file Program3_9x.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Uppercase || Lowercase
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
    char letter = 'u';
    if(letter >= 'A' && letter <= 'Z'){
        cout<<"Upper Case"<<endl;
    }
    else if(letter >= 'a' && letter <= 'z'){
        cout<<"Lower Case"<<endl;
    }

    // if('A' < 'a'){
    //     cout<<"a is greater than A?"<<endl;
    // }else{
    //     cout<<"A is greater than a?"<<endl;
    // }

    return 0;
}
