#include "Dado.h"
#include <cstdlib>
#include <ctime>

// Construtor padrão
Dado::Dado() : faces(6) {
    std::srand(std::time(0));
}

// Construtor parametrizado
Dado::Dado(int numFaces) : faces(numFaces) {
    std::srand(std::time(0));
}

// Método rolar
int Dado::rolar() {
    return (std::rand() % faces) + 1;
}

// Setters e Getters
void Dado::setFaces(int numFaces) {
    faces = numFaces;
}

int Dado::getFaces() {
    return faces;
}