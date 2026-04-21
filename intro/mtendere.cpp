#include <iostream>
using namespace std;
int main(){
    int  pmypointer = 10;
    int *ptr = &pmypointer; 
    cout << "Value of pmypointer: " << pmypointer << endl;
    cout << "Address of pmypointer: " << &pmypointer << endl;   
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    return 0;
}
