#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Test different numbers with % 12
    cout << "0 % 12 = " << 0 % 12 << endl;   // 0
    cout << "5 % 12 = " << 5 % 12 << endl;   // 5
    cout << "11 % 12 = " << 11 % 12 << endl; // 11
    cout << "12 % 12 = " << 12 % 12 << endl; // 0  (not 12!)
    cout << "13 % 12 = " << 13 % 12 << endl; // 1
    cout << "24 % 12 = " << 24 % 12 << endl; // 0
    cout << "25 % 12 = " << 25 % 12 << endl; // 1
    
    return 0;
}