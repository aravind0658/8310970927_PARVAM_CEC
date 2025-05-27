/*create a pattern of number and print continue number using for loop*/
#include <iostream>
using namespace std;    
int main() {
    int rows;

    cout << "Enter the number of rows for the pattern: ";
    cin >> rows;

    int num = 1; 
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " "; 
            num++;
        }
        cout << endl; 
    }

    return 0;
}