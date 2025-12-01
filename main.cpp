#include <iostream>
#include "../include/recipe.h"
#include "../include/recipe_manager.h"

void displayMenu();

int main() {
    RecipeManager manager("recipes.txt");
    manager.loadFromFile();

    int choice;
    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: std::cout << "TODO: Add recipe\n"; break;
            case 2: std::cout << "TODO: Search by ingredient\n"; break;
            case 3: manager.displayAll(); break;
            case 4: std::cout << "TODO: Rate recipe\n"; break;
            case 5: manager.saveToFile(); std::cout << "Goodbye!\n"; break;
            default: std::cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}

void displayMenu() {
    std::cout << "\n=== Recipe Manager ===\n";
    std::cout << "1. Add new recipe\n";
    std::cout << "2. Search by ingredient\n";
    std::cout << "3. Display all recipes\n";
    std::cout << "4. Rate a recipe\n";
    std::cout << "5. Save and quit\n";
    std::cout << "Choice: ";
}
std::cout << "4. Rate a recipe\n";
