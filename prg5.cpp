/*calculate the simple inttrest*/
#include <iostream>
using namespace std;
int main()
 {
    float p, r, t, si;

    cout << "Enter Principal Amount: ";
    cin >> p;
    cout << "Enter Rate of Interest: ";
    cin >> r;
    cout << "Enter Time : ";
    cin >> t;
    si = (p * r * t) / 100;

    cout << "Simple Interest = " << si << endl;

    return 0;
}
