/**
 * @file Program8_1BinarySearch.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Static binary search algorithm
 * @version 0.1
 * @date 2022-07-06
 * @since 10:36 PM; Wednesday
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

void binarySearchAlgorithm(int allItems[], unsigned int size){
    unsigned int lowerIndex = 0;
    unsigned int upperIndex = size - 1;
    unsigned int midIndex;

    int findingNumber = 97;
    while(lowerIndex <= upperIndex){
        midIndex = lowerIndex + (upperIndex - lowerIndex)/2;
        // cout<<"Mid Index = "<<midIndex<<endl;
        if(allItems[midIndex] == findingNumber){
            cout<<"Founding the number: "<<allItems[midIndex]<<endl;
            break;
        }
        else if(allItems[midIndex] < findingNumber){
            lowerIndex = midIndex + 1;
        }
        else if(allItems[midIndex] > findingNumber){
            upperIndex = midIndex - 1;
        }
    }
    if(lowerIndex > upperIndex){
        cout<<"Not found..!"<<endl;
    }
    
}

int main(int argc, char const *argv[])
{
    /* code */
    /*Sorted all item here*/
    int allItems[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    unsigned int size = sizeof(allItems) / sizeof(int);
    binarySearchAlgorithm(allItems, size);
    return 0;
}
