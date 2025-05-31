/*create a string just to remove the duplicates*/
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    unordered_set<char> charSet;
    string result;

    for (char c : str) {
        if (charSet.find(c) == charSet.end()) {
            charSet.insert(c);
            result += c;
        }
    }

    cout << "String after removing duplicates: " << result << endl;

    return 0;
}


