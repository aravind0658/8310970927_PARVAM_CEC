/*create a class employee and make three objects. store and display data for three different employee using each object*/
#include <iostream>
using namespace std;    
class Employee {
public:
    int id;
    string name;
    float salary;

    Employee(int Id, string Name, float Salary) {
        id = Id;
        name = Name;
        salary = Salary;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};
int main() {
    Employee e1(101, "sai", 50000.0);
    Employee e2(102, "reddy", 60000.0);
    Employee e3(103, "kiran", 660000.0);

    cout << "Employee 1: ";
    e1.display();
    cout << "Employee 2: ";
    e2.display();
    cout << "Employee 3: ";
    e3.display();

    return 0;
}
