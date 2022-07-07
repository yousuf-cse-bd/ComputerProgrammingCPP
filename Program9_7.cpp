/**
 * @file Program9_7.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief String concatenate: addition without function
 * @version 0.1
 * @date 2022-07-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

unsigned int stringLength(char str[]){
    unsigned int length;
    for(length = 0; str[length] != '\0'; length++);
    return length;
}

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int i, j;
    char str1[] = "Bangla", str2[] = "desh";
    unsigned int length = stringLength(str1) + stringLength(str2);
    char str3[length + 1];
    for( i = 0, j = 0; i<stringLength(str1); i++, j++){
        str3[j] = str1[i];
    }
    for(i = 0; i<stringLength(str2); i++,j++){
        str3[j] = str2[i];
    }
    str3[j] = '\0';
    cout<<str3<<endl;
    return 0;
}
