/*find the area of rectangle and triangle using class*/
#include<iostream>
using namespace std;
class Rectangle {
    int length, breadth;
public:
    Rectangle(int l, int b) : length(l), breadth(b) {}
    
    int area() {
        return length * breadth;
    }
};  
class Triangle {
    int base, height;
public:
    Triangle(int b, int h) : base(b), height(h) {}
    
    int area() {
        return (base * height) / 2;
    }
};
int main() {
    Rectangle rect(10, 5);
    Triangle tri(10, 5);
    
    cout << "Area of Rectangle: " << rect.area() << endl;
    cout << "Area of Triangle: " << tri.area() << endl;
    
    return 0;
}
