#include "../include/recipe.h"
#include <iostream>
#include <algorithm>

Recipe::Recipe(const std::string& n, const std::string& c) : name(n), category(c), rating(0) {}

std::string Recipe::getName() const { return name; }
std::string Recipe::getCategory() const { return category; }
int Recipe::getRating() const { return rating; }

void Recipe::setRating(int newRating) {
    if (newRating >= 1 && newRating <= 5) rating = newRating;
}

void Recipe::addIngredient(const std::string& ing) { ingredients.push_back(ing); }
void Recipe::addInstruction(const std::string& inst) { instructions.push_back(inst); }

void Recipe::display() const {
    std::cout << "Name: " << name << " | Category: " << category << " | Rating: " << rating << "/5\n";
    std::cout << "Ingredients:\n";
    for (const auto& i : ingredients) std::cout << "  - " << i << "\n";
    std::cout << "Instructions:\n";
    for (size_t i = 0; i < instructions.size(); ++i)
        std::cout << "  " << (i+1) << ". " << instructions[i] << "\n";
    std::cout << "\n";
}
