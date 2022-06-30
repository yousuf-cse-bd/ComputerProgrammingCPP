/**
 * @file Program2_15.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple calculator, It was my dream in 2017
 * @version 0.1
 * @date 2022-06-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    double num1, num2, value;
    char sign[2];
    cout<<"Please enter a number here: ";
    cin>>num1;
    char newLine;
    newLine = getchar();
    cout<<"Enter a sign [+,-,*,/] here: ";
    sign[0] = getchar();
    if(sign[0] == '+'){
        cout<<"Again please eneter a number here: ";
        cin>>num2;
        value = num1 + num2;
    }
    else if(sign[0] == '-'){
        cout<<"Again please eneter a number here: ";
        cin>>num2;
        value = num1 - num2;
    }
    else if(sign[0] == '*'){
        cout<<"Again please eneter a number here: ";
        cin>>num2;
        value = num1 * num2;
    }
    else if(sign[0] == '/'){
        cout<<"Again please eneter a number here: ";
        cin>>num2;
        value = num1 / num2;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    cout<<num1<<" "<<sign<<" "<<num2<<" = "<<value<<endl;

    
    return 0;
}
