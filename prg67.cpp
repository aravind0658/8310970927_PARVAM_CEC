/*create a prg to convert a celcius to fahrenheit by using switch statment*/
#include <iostream>
using namespace std;    
int main() {
    float celsius, fahrenheit;
    int choice;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    cout << "Choose conversion option:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            fahrenheit = (celsius * 9 / 5) + 32;
            cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit." << endl;
            break;
        case 2:
            fahrenheit = (celsius - 32) * 5 / 9;
            cout << celsius << " Fahrenheit is equal to " << fahrenheit << " Celsius." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}