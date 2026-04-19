#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Cast time_t to unsigned int
    srand((unsigned int)time(0));
    
    // Generate random number between 0 and 11
    int daysUntilExpiration = rand() % 12;
    
    cout << "Days until expiration: " << daysUntilExpiration << endl;
    
    // Check conditions
    if (daysUntilExpiration <= 0) {
        cout << "Your subscription has expired." << endl;
    }
    else if (daysUntilExpiration == 1) {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;  // Fixed: should be 20% for 1 day
    }
    else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl;
        cout << "Renew now and save 10%!" << endl;
    }
    else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    }
    else {
        cout << "You have an active subscription." << endl;
    }
    
    return 0;
}