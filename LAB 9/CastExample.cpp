#include <iostream>
using namespace std;

int main() {
    int x = 65;
    int* pInt = &x;
    
    // reinterpret int pointer as char pointer
    char* pChar = reinterpret_cast<char*>(pInt);
    
    cout << "As int: " << *pInt << endl;    // Output: 65
    cout << "As char: " << *pChar << endl;  // Output: 'A' (ASCII 65)
    
    return 0;
}