/**
 * @file Program4_11.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Permutation using nested loops
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
    unsigned int i,j,k;
    for(i = 1; i<=3; i++){
        for(j = 1; j<=3; j++){
            for(k = 1; k<=3; k++){
                if(i != j && j!= k && i!=k){
                    cout<<i<<", "<<j<<", "<<k<<endl;
                }
            }
        }
    }
    return 0;
}
