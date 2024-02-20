/*
Date: 20 February 2024

problem definition: Have to create a Hollow Reectangle from user input: 
for example: if user input length = 4 and width = 4 
the expected result will be like: 

****
*  *
*  *
****

*/

#include <iostream>
using namespace std;

int main() {
    int length,width;
    cout << "what will be the length?: " << endl;
    cin >> length;
    cout << "what will be the width?: " << endl;
    cin >> width;
    cout << "Hollow rectangle's length is "<< length << " and width is " << width << endl;
    cout <<endl;
    for (int i=1; i<=length;i++) {
        for (int j=1; j<=width;j++) {
            if (i==1  || i==length || j ==1 || j==width){
              cout << "*";  
            }
            else {
                cout << " ";
            }
        }
        cout <<endl;
    }
    cout <<endl;

}