/*
Date: 19 February 2024

problem definition: Have to create a Reectangle from user input: 
for example: if user input rows = 3 and columns= 6 
the expected result will be like: 

*  *  *  *  *  *
*  *  *  *  *  *
*  *  *  *  *  *

*/

//Solution:

#include<iostream>
using namespace std;

int main() {
    int row,col;
    cout << "How many rows you want?" << endl;
    cin >>row;
    cout << "How many column you want?" << endl;
    cin >> col;
    cout << "you selected: "<< row << " rows" << endl;
    cout << "you selected: "<< col << " columns" << endl;
    cout << "you rectangle will be: "<< row << " * " << col << endl;
    cout << endl;

    for (int i=1; i <= row;i++){
        for (int j=1; j<=col;j++) {
            cout << " * ";
        }

        cout << endl;
    }
cout << endl;
}