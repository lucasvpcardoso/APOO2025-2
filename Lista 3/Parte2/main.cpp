#include <iostream>
#include "Dado.h"

int main() {
    std::cout << "=== PARTE 4a ===" << std::endl;
    
    // 4a: Ponteiro para dado com 6 faces
    Dado* dado6 = new Dado(6);
    std::cout << "Dado de " << dado6->getFaces() << " faces: " 
              << dado6->rolar() << std::endl;
    delete dado6;
    
    std::cout << "\n=== PARTE 4b ===" << std::endl;
    
    // 4b: Array de 3 dados
    Dado* dados = new Dado[3];
    
    // Configurar faces
    dados[0].setFaces(6);
    dados[1].setFaces(8);
    dados[2].setFaces(12);
    
    // Jogar cada dado 3 vezes
    for (int i = 0; i < 3; i++) {
        std::cout << "Dado " << i+1 << " (" << dados[i].getFaces() << " faces): ";
        for (int j = 0; j < 3; j++) {
            std::cout << dados[i].rolar();
            if (j < 2) std::cout << ", ";
        }
        std::cout << std::endl;
    }
    
    // Liberar memória
    delete[] dados;
    
    return 0;
}