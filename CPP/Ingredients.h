#pragma once
#include "TypeOfIngredients.h"
#include <string>
using namespace std;

class Ingredient {
public:
    Ingredient();
    Ingredient (const TypeOfIngredient inIngredientTypes, float inAmount);
    string IngredientName();
    float GetAmount();
    bool operator == (const Ingredient & otherIngredient);
    bool operator == (const TypeOfIngredient & IngredienType);

private:
    TypeOfIngredient mIngredientType;
    float mAmount;
};
