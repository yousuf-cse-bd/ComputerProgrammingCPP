/**
 * @file Program9_8StringCompare.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief string compare without function.
 * @version 0.1
 * @date 2022-07-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int stringCompare(char a[], char b[]){
    unsigned int i;
    short status;
    i = 0;
    while(a[i] != '\0' && b[i] != '\0'){
        if(a[i] < b[i]){
            status = -1;
        }
        if(a[i] > b[i]){
            status = 1;
        }
        if(a[i] == b[i]){
            status = 0;
        }
        i++;
    }
    return status;
}

int main(int argc, char const *argv[])
{
    char str1[100],str2[100];
    cout<<"Enter First String Here: ";
    cin>>str1;
    cout<<"Enter Next String Here: ";
    cin>>str2;

    if(stringCompare(str1, str2) == 1){
        cout<<"First String is Greater than Second String."<<endl;
    }
    else if(stringCompare(str1, str2) == -1){
        cout<<"First String is Less than Second String."<<endl;
    }
    else{
        cout<<"Both Strings are Same."<<endl;
    }
    return 0;
}
