#pragma once
#include <string>
#include <vector>

class Recipe {
private:
    std::string name;
    std::string category;
    int rating = 0; // NEW: Rating 0-5
    std::vector<std::string> ingredients;
    std::vector<std::string> instructions;

public:
    Recipe(const std::string& name, const std::string& category = "Uncategorized");

    std::string getName() const;
    std::string getCategory() const;
    int getRating() const;
    void setRating(int newRating);

    void addIngredient(const std::string& ing);
    void addInstruction(const std::string& inst);
    void display() const;
};
