/*convert  binary todecimal*/
#include <iostream>
using namespace std;    
int main() {
    int n, dec = 0, base = 1, rem;
    cout << "Enter a binary number: ";
    cin >> n;

    while (n > 0) {
        rem = n % 10;
        dec = dec + rem * base;
        n = n / 10;
        base = base * 2;
    }

    cout << "Decimal equivalent: " << dec << endl;
    return 0;
}