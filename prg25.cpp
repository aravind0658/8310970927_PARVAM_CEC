/*create a rectangle of * using for loop*/
#include <iostream>
using namespace std;
int main() {
    int rows, cols;

    cout << "Enter the number of rows for the rectangle: ";
    cin >> rows;
    cout << "Enter the number of columns for the rectangle: ";
    cin >> cols;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}