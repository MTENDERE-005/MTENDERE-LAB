#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle() {
        length = 0.0;
        width = 0.0;
        cout << "Rectangle object created and initialized to zero" << endl;
    }
    
    // Destructor
    ~Rectangle() {
        cout << "Rectangle object destroyed" << endl;
    }
    
    // Setters
    void setLength(double len) {
        length = len;
    }
    
    void setWidth(double wid) {
        width = wid;
    }
    
    // Getters
    double getLength() const {
        return length;
    }
    
    double getWidth() const {
        return width;
    }
    
    // Calculate area
    double calculateArea() const {
        return length * width;
    }
};

int main() {
    Rectangle myRectangle;
    
    double inputLength, inputWidth;
    
    cout << "Enter the length of the rectangle: ";
    cin >> inputLength;
    myRectangle.setLength(inputLength);
    
    cout << "Enter the width of the rectangle: ";
    cin >> inputWidth;
    myRectangle.setWidth(inputWidth);
    
    cout << "\n--- Rectangle Information ---" << endl;
    cout << "Length: " << myRectangle.getLength() << endl;
    cout << "Width: " << myRectangle.getWidth() << endl;
    cout << "Area: " << myRectangle.calculateArea() << endl;
    
    return 0;
}