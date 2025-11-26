#ifndef RECIPE_H
#define RECIPE_H

#include <string>
#include <vector>

class Recipe {
private:
    std::string name;
    std::vector<std::string> ingredients;
    std::vector<std::string> instructions;
    int rating;          // 0 = not rated, 1-5 = stars
    std::string category;

public:
    Recipe();
    Recipe(const std::string& n);

    std::string getName() const;
    const std::vector<std::string>& getIngredients() const;
    const std::vector<std::string>& getInstructions() const;
    int getRating() const;

    void setRating(int r);
    void addIngredient(const std::string& ing);
    void addInstruction(const std::string& step);
    bool hasIngredient(const std::string& ing) const;
    void display() const;
};

#endif // RECIPE_H
