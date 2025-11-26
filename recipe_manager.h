#ifndef RECIPE_MANAGER_H
#define RECIPE_MANAGER_H

#include "recipe.h"
#include <vector>
#include <string>

class RecipeManager {
private:
    std::vector<Recipe> recipes;
    std::string filename;

public:
    RecipeManager(const std::string& f = "recipes.txt");

    void addRecipe(const Recipe& r);
    Recipe* findRecipe(const std::string& name);
    std::vector<Recipe*> searchByIngredient(const std::string& ing);
    void displayAll() const;

    bool loadFromFile();
    bool saveToFile() const;
};

#endif // RECIPE_MANAGER_H
