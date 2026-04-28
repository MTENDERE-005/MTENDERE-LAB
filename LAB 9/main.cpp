#include <iostream>
#include "Derived.h"

using namespace std;

int main()
{
    Base* pba = new Derived();    // Base pointer actually points to Derived
    Base* pbb = new Base();       // Base pointer actually points to Base
    Derived* pd;                  // Derived pointer (will be assigned)

    // First dynamic cast - should succeed
    pd = dynamic_cast<Derived*>(pba);
    if (pd == nullptr)
    {
        cout << "Null pointer on first type-cast.\n";
    }
    else
    {
        cout << "First cast succeeded!\n";
    }

    // Second dynamic cast - should fail
    pd = dynamic_cast<Derived*>(pbb);
    if (pd == nullptr)
    {
        cout << "Null pointer on second type-cast.\n";
    }

    delete pba;
    delete pbb;

    return 0;
}