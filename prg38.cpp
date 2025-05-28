/*create a class person with public members name and age. use an object to set values and display them*/
#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    void setValues(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout<<"Name:"<<name<<",Age:"<<age<<endl;
    }
};
int main() {
    Person person;
    person.setValues("sai", 105);
    person.display();
    
    return 0;
}

