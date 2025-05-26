/*convert decimal to binary*/
#include <iostream>
using namespace std;
int main() {
    int n, bi = 0, base = 1, rem;
    cout << "Enter a decimal number: ";
    cin >> n;

    while (n > 0) {
        rem = n % 2;
        bi = bi + rem * base;
        n = n / 2;
        base = base * 10;
    }

    cout << "Binary equivalent: " << bi << endl;
    return 0;
}