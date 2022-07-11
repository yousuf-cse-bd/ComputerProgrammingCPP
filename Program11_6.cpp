/**
 * @file Program11_6.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sum of row-column wise in 2D Array or Matrix
 * @version 0.1
 * @date 2022-07-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int Array2D[5][5] = {{6, 4, 7, 8, 9},
                                 {3, 7, 1, 9, 9},
                                 {8, 6, 4, 2, 7},
                                 {2, 4, 2, 5, 9},
                                 {4, 1, 6, 7, 3}};
    // for(unsigned int row = 0; row<5; row++){
    //     for(unsigned int column = 0; column < 5; column++){
    //         cout<<Array2D[row][column]<<"\t";
    //     }
    //     cout<<endl;
    // }
    /*Calculate row wise from the 2D array*/
    unsigned int sumOfRows;
    for(unsigned int row = 0, column = 0; row<5; row++){
        sumOfRows = 0;
        for(unsigned int column = 0; column <5 ; column++){
            sumOfRows += Array2D[row][column];
        }
        cout<<"Row: "<<row+1<<" Sum of them: "<<sumOfRows;
        cout<<endl;
    }
    cout<<"\n\n";
    /*Calculate column wise from the 2D array*/
    unsigned int sumOfColumn ;
    for(unsigned int row = 0, column = 0; row<5; row++){
        sumOfColumn = 0;
        for(unsigned int column = 0; column <5 ; column++){
            sumOfColumn += Array2D[column][row];
        }
        cout<<"Columm: "<<row+1<<" Sum of them: "<<sumOfColumn;
        cout<<endl;
    }

    return 0;
}
