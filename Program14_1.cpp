/**
 * @file Program14_1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Palindrome string optimal solution
 * @version 0.1
 * @date 2022-07-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    string word;
    cout<<"Enter a word here: ";
    cin>>word;
    bool flag = true;
    for(int i = 0, j = word.length() - 1; i != word.length(); i++, j--){
        if(word[i] != word[j]){
            flag = false;
            break;
        }
    }
    (flag == true)?cout<<"Palindrome String..!\n":
    cout<<"Not Palindrome String.."<<endl;
    return 0;
}
