#pragma once

#include <string>

using namespace std;

class Person
{
public:
    Person();
    Person(string newFirstName, float newWeight);  // ← FIXED: now matches main.cpp

    ~Person();
    //Overload the add operator
    float operator + (const Person& otherPerson);

    // For 2(d) - relational operators using mFirstName
    bool operator == (const Person& otherPerson);
    bool operator != (const Person& otherPerson);

    // For 2(e) - relational operators using mAge
    bool operator < (const Person& otherPerson);
    bool operator > (const Person& otherPerson);

    // For 3 - conversion operator to int
    operator int();

    // For 4 - conversion operators to string and float
    operator string();
    operator float();

private:
    float mWeight;
    string mFirstName;
    int mAge;
};