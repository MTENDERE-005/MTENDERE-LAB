#include <iostream>
using namespace std;

// Function to calculate square area
double squareArea(double side) {
    return side * side;
}

// Function to calculate rectangle area
double rectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate triangle area
double triangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    double side, length, width, base, height;
    
    do {
        // Display menu
        cout << "\nPlease select the shape to calculate the area:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit Program" << endl;
        cout << "Enter selection: ";
        cin >> choice;
        
        // Process user choice
        if (choice == 1) {
            cout << "Enter side length: ";
            cin >> side;
            cout << "Area: " << squareArea(side) << endl;
        }
        else if (choice == 2) {
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            cout << "Area: " << rectangleArea(length, width) << endl;
        }
        else if (choice == 3) {
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            cout << "Area: " << triangleArea(base, height) << endl;
        }
        else if (choice == 4) {
            cout << "Exiting now" << endl;
        }
        else {
            cout << "Invalid input! Please enter 1, 2, 3, or 4" << endl;
        }
        
    } while (choice != 4);
    
    return 0;
}