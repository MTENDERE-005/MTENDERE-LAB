#include <iostream>
#include <string>
using namespace std;

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;
    
    // Dynamically allocate a string
    string* dynamicString = new string;

    // Get integer value from user
    cout << "Enter a value for the integer: ";
    cin >> *dynamicInt;

    // Clear input buffer before getting string
    cin.ignore();
    
    // Get string value from user
    cout << "Enter a value for the string: ";
    getline(cin, *dynamicString);

    // Output the values
    cout << "\n--- Values Stored ---" << endl;
    cout << "Integer value: " << *dynamicInt << endl;
    cout << "String value: " << *dynamicString << endl;

    // Free the dynamically allocated memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}