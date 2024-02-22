/*
Date: 22 February 2024

Problem definition: Have to create a inverted pyramid. The number of rows will be inputed from user: 
for example: if user input a number 6.
the expected result will be like: 

******
*****
****
***
**
*

*/

//Solution:

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "how many rows do you want in your pyramid?: " << endl;
    cin >> n;
    cout << endl;
    cout << "your inverted pyramid will have: "<< n << " rows" << endl;
    cout << endl;

    for (int i=n; i>=1;i--) {
        for (int j=1;j<=i;j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;

}
