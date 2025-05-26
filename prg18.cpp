/*array of mulitiplying two number using two-dimension*/
#include <iostream>
using namespace std;
int main() {
    int arr1[2][5], arr2[2][5], product[2][5];

    cout << "Enter elements for first 2D array (2 rows, 5 columns):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements for second 2D array (2 rows, 5 columns):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            product[i][j] = arr1[i][j] * arr2[i][j];
        }
    }

    cout << "Product of the two arrays:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}