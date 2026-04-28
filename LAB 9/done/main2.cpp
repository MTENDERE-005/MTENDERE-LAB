#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
Rectangle rect;
Triangle trgl;

// Polygon poly;  // ← ERROR! Cannot create abstract class object

Polygon* pPoly1 = &rect;
Polygon* pPoly2 = &trgl;

pPoly1->SetValues(4,5);
pPoly2->SetValues(4,5);

cout << pPoly1->Area() << '\n';
cout << pPoly2->Area() << '\n';

return 0;
}