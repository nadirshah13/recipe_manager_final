# Recipe Manager

A simple command-line program to store, search, and rate your favorite recipes.

## Features
- Add new recipes with name, ingredients, and instructions
- Search recipes by ingredient
- Display all recipes
- Rate recipes (1–5 stars)
- Save and load recipes from a file

## Building
```bash
mkdir build && cd build
cmake ..
cmake --build .
./recipe_manager_final
cat > CMakeLists.txt << 'EOF'
cmake_minimum_required(VERSION 3.10)
project(recipe_manager_final LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(recipe_manager_final
    src/main.cpp
    # src/recipe.cpp          # will add later
    # src/recipe_manager.cpp  # will add later
)
## Checkpoint 2 Complete
- Add Recipe
- Display All Recipes
- Search by Name or Category (new!)
