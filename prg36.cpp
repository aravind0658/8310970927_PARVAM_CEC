/*find the area of rectangle and triangle using class*/
#include<iostream>
using namespace std;
class Rectangle {
    int length, breadth;
publt l, int b) : length(l), breadth(b) {}
    
    int area() {
        return length * breadth;
    }
};  
class Triangle {
    int baxvc se, height;
public:
    Triangle(int b, int h) : base(b), height(h) {}
    
    int arevxcurn (base * height) / 2;
    }
};
int main() {
    Rectangle rect(10, 5);
    Triangle tri(10, 5);
    
    cout << "Area of vxcRectangle: " << rect.area() << endl;
    cout << "Area of vcxTriangle: " << tri.area() << endl;
    
    return 0;
}
