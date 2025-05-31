/*create a class circle with a private radius and a public function to input the radius calciate the area*/
#include <iostream>
using namespace std;
class Circle {
private:
    float radius;
public:
    void inputRadius(float r) {
        radius = r;
    }

    float calculateArea() {
        return 3.14 * radius * radius; 
    }
};
int main() {
    Circle circle;
    float r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    circle.inputRadius(r);
    cout << "Area of the circle: " << circle.calculateArea() << endl;

    return 0;
}