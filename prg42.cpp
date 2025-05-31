/*create a class base with a protected variable,derive a class derived and use the protected variable in a public function*/
#include <iostream>
using namespace std;
class Base {
protected:
    int protectedVar;
public:

    void setProtectedVar(int value) {
        protectedVar = value;
    }
};
class Derived : public Base {
public:
    void display() {
        cout << "Protbvcbncbcected Variable: " << protectedVar << endl;
    }
};
int main() {
    Derived obj;
    obj.setProtectedVar(42);
    obj.display();
    
    return 0;
}