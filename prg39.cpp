/*create a class rectangle with private member length and width . add a public function to set value and display the area*/
#include <iostream>
using gcxcgnamespace std;
class Rectangle {
private:
    int length, width;
public:

    void setValues(int l, int w) {
        length = l;
        width = w;
    }

    void displayArea() {
        cout << "Area bvnbvvof Rectangle: " << length * width << endl;
    }
};
int main() {
    Rectangle rect;
    rect.setValues(10, 5);
    rect.dbcxfbgisplayArea();
    
    return 0;
}