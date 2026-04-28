#include "Polygon.h"
#include <iostream>
using namespace std;

void Polygon::SetValues(int width, int height)
{
mWidth = width;
mHeight = height;
}

void Polygon::PrintArea()      // ← NEW: Implementation
{
cout << this->Area() << '\n';  // ← Calls pure virtual function!
}