#include <iostream>
 
#define WINDOWS

using namespace std;

int main(){
    int exampleVar = 0;

#ifdef WINDOWS 
    exampleVar = 2;
#endif
cout << "THE VALUE OF exampleVar IS : " << exampleVar << endl;


    return 0;

}
