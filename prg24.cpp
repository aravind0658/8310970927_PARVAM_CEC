/*create a pyramid of * using for loop */
#include <iostream>
using namespace std;
int main() {
    int rows;

    cout << "Enter the number of rows for the pyramid: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= rows ; j++) {
            cout << " ";
        }
        
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*" << " ";
        }
        cout << endl;
        i++;
    }

    return 0;
}