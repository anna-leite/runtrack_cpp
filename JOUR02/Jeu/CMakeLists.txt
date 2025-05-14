cmake_minimum_required(VERSION 3.10)  # Version minimale de CMake
project(Jeu)        # Nom et version du projet

set(CMAKE_CXX_STANDARD 17)            # Standard C++ (ex : C++17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Jeu
    main.cpp
    Personnage.cpp
    Arme.cpp
)