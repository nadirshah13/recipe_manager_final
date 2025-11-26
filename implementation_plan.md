# Implementation Plan

## Feature 1: Add New Recipe
**Trigger**: Menu option 1  
**Input**: Name, ingredients (loop), instructions (loop)  
**Flow**:  
1. main() asks user for name → create Recipe object  
2. Loop: ask for ingredients → call addIngredient()  
3. Loop: ask for instructions → call addInstruction()  
4. manager.addRecipe(recipe)  
**Functions**: Recipe(), addIngredient(), addInstruction(), RecipeManager::addRecipe()

## Feature 2: Search by Ingredient
**Trigger**: Menu option 2  
**Input**: Ingredient name  
**Flow**:  
1. Ask user for ingredient  
2. results = manager.searchByIngredient(input)  
3. Loop through results → call display() on each  
**Functions**: searchByIngredient(), hasIngredient(), display()

## Feature 3: Display All Recipes
**Trigger**: Menu option 3  
**Flow**: manager.displayAll() → loops through vector and calls display() on each  
**Functions**: displayAll(), Recipe::display()

## Feature 4: Rate a Recipe
**Trigger**: Menu option 4  
**Input**: Recipe name + new rating (1–5)  
**Flow**:  
1. Ask for name  
2. Find recipe with findRecipe()  
3. Call setRating() on it  
**Functions**: findRecipe(), setRating()

## Feature 5: Save & Load from File
**Trigger**: On startup (load) and exit (save)  
**Flow**:  
- main() calls manager.loadFromFile() at start  
- Option 5 calls manager.saveToFile() before quitting  
**Functions**: loadFromFile(), saveToFile()
