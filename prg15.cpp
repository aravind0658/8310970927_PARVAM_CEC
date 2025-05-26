/*array of adding two number*/

#include <iostream>
using namespace std;    
int main() {
    int arr1[5], arr2[5], sum[5];

    cout << "Enter 5 elements for first array: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }

    cout << "Enter 5 elements for second array: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < 5; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    cout << "Sum of the two arrays: ";
    for (int i = 0; i < 5; i++) {
        cout << sum[i] << " ";
    }
    cout << endl;

    return 0;
}