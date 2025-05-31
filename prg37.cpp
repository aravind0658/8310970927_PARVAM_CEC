/*find the area of rectangle and triangle using 3 class named polygon*/
#include<iostream>
using namespace std;
class Polygon {
protected:
    int length, breadth;
public:
void get_data(int l, int b) {
        length = l;
        breadth = b;
    }
    
};
class Rectangle : public Polygon {
public:
    int area() {
        return length * breadth;
    }
};
class Triangle : public Polygon {
public:
    int area() {
        return (length * breadth) / 2;
    }
};
int main() {
    Rectangle rect;
    Triangle tri;
    
    rect.get_data(10, 5);
    tri.get_data(10, 5);
    
    cout << "Area of Rectangle: " << rect.area() << endl;
    cout << "Area of Triangle: " << tri.area() << endl;
    
    return 0;
}