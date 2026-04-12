#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

// Constant for pi
const double PI = 3.14159265358979323846;

// ==================== NAMESPACE SHAPES ====================
namespace shapes {
    
    class Square {
    private:
        double sideLength;
    public:
        Square() : sideLength(0.0) {}
        Square(double side) : sideLength(side) {}
        ~Square() {}
        void setSideLength(double side) { sideLength = side; }
        double getSideLength() const { return sideLength; }
    };
    
    class Triangle {
    private:
        double base, height;
    public:
        Triangle() : base(0.0), height(0.0) {}
        Triangle(double b, double h) : base(b), height(h) {}
        ~Triangle() {}
        void setBase(double b) { base = b; }
        void setHeight(double h) { height = h; }
        double getBase() const { return base; }
        double getHeight() const { return height; }
    };
    
    class Circle {
    private:
        double radius;
    public:
        Circle() : radius(0.0) {}
        Circle(double r) : radius(r) {}
        ~Circle() {}
        void setRadius(double r) { radius = r; }
        double getRadius() const { return radius; }
    };
}

// ==================== AREA CLASS ====================
class Area {
public:
    static double calculateArea(const shapes::Square& square) {
        double side = square.getSideLength();
        return side * side;
    }
    
    static double calculateArea(const shapes::Triangle& triangle) {
        double base = triangle.getBase();
        double height = triangle.getHeight();
        return 0.5 * base * height;
    }
    
    static double calculateArea(const shapes::Circle& circle) {
        double radius = circle.getRadius();
        return PI * radius * radius;  // Using PI constant
    }
};

// ==================== MAIN ====================
int main() {
    int choice;
    double value1, value2;
    
    do {
        cout << "\n=========================================\n";
        cout << "        SHAPE AREA CALCULATOR\n";
        cout << "=========================================\n";
        cout << "1. Calculate area of a Square\n";
        cout << "2. Calculate area of a Triangle\n";
        cout << "3. Calculate area of a Circle\n";
        cout << "4. Quit\n";
        cout << "=========================================\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        switch(choice) {
            case 1: {
                cout << "Enter side length: ";
                cin >> value1;
                shapes::Square square(value1);
                cout << "Area of square: " << Area::calculateArea(square) << endl;
                break;
            }
            case 2: {
                cout << "Enter base: ";
                cin >> value1;
                cout << "Enter height: ";
                cin >> value2;
                shapes::Triangle triangle(value1, value2);
                cout << "Area of triangle: " << Area::calculateArea(triangle) << endl;
                break;
            }
            case 3: {
                cout << "Enter radius: ";
                cin >> value1;
                shapes::Circle circle(value1);
                cout << "Area of circle: " << Area::calculateArea(circle) << endl;
                break;
            }
            case 4: {
                cout << "Goodbye!\n";
                break;
            }
            default: {
                cout << "Invalid choice!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }
        }
    } while (choice != 4);
    
    return 0;
}