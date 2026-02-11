cmake_minimum_required(VERSION 3.25)

project(Herencia)

# 1. Configuración del estándar
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 2. Dónde están los .h
include_directories(include)

# 3. Creación del ejecutable
# AQUÍ ESTÁ EL TRUCO: Listamos TODOS los .cpp necesarios
add_executable(Herencia 
    src/main.cpp
    src/Persona.cpp
    src/Estudiante.cpp
)