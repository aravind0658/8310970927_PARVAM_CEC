//find the given number is emirp number or not
A NUMBER IS CALLED AN EMIRP NUMBER IF WE GET ANOTHER PRIME NUMBER ON REVERSING THE NUMBER ITSELF.
IN OTHER WORDS, AN EMITIP NUMBER IS A NUMBER THAT IS PRIME FORWARDS OR BACKWARDS.
IT IS ALSO KONWN AS TWISTED PRIME NUMBER.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int temp = n;
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversedd = reversed * 10 + digit;