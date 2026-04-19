#include "Person.h"
#include <iostream> // for debugging if needed
using namespace std;

// Default constructor
Person::Person()
{
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

// Parameterized constructor
Person::Person(string newFirstName, float newWeight)
{
    mFirstName = newFirstName;
    mWeight = newWeight;
    mAge = 30
    ; // Default age for demonstration
}

// Destructor
Person::~Person()
{
    // Nothing to clean up
}

// Overload + operator: returns sum of weights
float Person::operator+(const Person& otherPerson)
{
    return this->mWeight + otherPerson.mWeight;
}

// Overload == operator: compare first names
bool Person::operator==(const Person& otherPerson)
{
    return this->mFirstName == otherPerson.mFirstName;
}

// Overload != operator: compare first names
bool Person::operator!=(const Person& otherPerson)
{
    return this->mFirstName != otherPerson.mFirstName;
}

// Overload < operator: compare ages
bool Person::operator<(const Person& otherPerson)
{
    return this->mAge < otherPerson.mAge;
}

// Overload > operator: compare ages
bool Person::operator>(const Person& otherPerson)
{
    return this->mAge > otherPerson.mAge;
}

// Conversion operator to int: returns age
Person::operator int()
{
    return mAge;
}

// Conversion operator to string: returns first name
Person::operator string()
{
    return mFirstName;
}

// Conversion operator to float: returns weight
Person::operator float()
{
    return mWeight;
}