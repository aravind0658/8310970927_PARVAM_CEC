/*array of adding two number using two-dimension*/
#include <iostream>
using namespace std;    
int main() {
    int arr1[2][5], arr2[2][5], sum[2][5];

   
    cout << "Enter elements for first 2D array (2 rows, 5 columns):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter elements for second 2D array (2 rows, 5 columns):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout << "Sum of the two arrays:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}