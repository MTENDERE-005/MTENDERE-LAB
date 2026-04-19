#include <iostream>
#include <string>
using namespace std;

int main() {
    int userInput;
    bool validInput = false;
    
    while (!validInput) {
        cout << "Enter an integer value between 5 and 10: ";
        
        if (cin >> userInput) {
            if (userInput >= 5 && userInput <= 10) {
                validInput = true;
            } else {
                cout << "You entered " << userInput << ". Please enter a number between 5 and 10." << endl;
            }
        } else {
            cout << "Sorry, you entered an invalid number, please try again." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
    
    cout << "Your input value (" << userInput << ") has been accepted." << endl;
    
    return 0;
}