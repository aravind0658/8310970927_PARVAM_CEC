/*shape area calculator using inheritance:*/
#include <iostream>
using namespace std;
class shape
{
protected:
    float length, breadth;
};
class rectangle :public shape
{
public:
    void get_data(float l, float b)
    {
        length = l;
        breadth = b;
    }
    float area()
    {
        return length * breadth;
    }
};
class triangle :public shape
{
public:
    void get_data(float l, float b)
    {
        length = l;
        breadth = b;
    }
    float area()
    {
        return (length * breadth) / 2;
    }
};
int main()
{
    rectangle r;
    triangle t;
    float l, b;

    cout << "Enhgdccfer length and breadth for rectangle: ";
    cin >> l >> b;
    r.get_data(l, b);
    cout << "Area of Rectangle: " << r.area() << endl;

    cout << "Enter length and breadth for triangle: ";
    cin >> l >> b;
    t.get_data(l, b);
    cout << "Area of Trihghghghghghg2wwwwwwwwwwwwwwwwwwwwwwwwangle: " << t.area() << endl;

    return 0;
}