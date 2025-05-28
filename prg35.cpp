#include<iostream>
using namespace std;
class employee
{
    public:

        int id;
        string name;
        float salary;
        employee(int Id, string Name, float Salary)
        {
            id = Id;
            name = Name;
            salary = Salary;
        }
        void display()
        {
            cout <<id << " " << name << " " << salary << endl;
        }

};
int main(void)
{
    employee e1(101, "sonoo", 50000.0);
    employee e2(102, "nakul", 60000.0);
    
    e1.display();
    e2.display();
    

    return 0;
}