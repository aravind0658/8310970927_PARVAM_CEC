/*create a simple calculator using switch statement*/
#include <iostream>
using namespace std;
int main() {
    char op;
    float num1, num2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
           result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;}