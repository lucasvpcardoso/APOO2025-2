#include <iostream>
#include <iomanip>

struct Ponto {
    float x;
    float y;
};

int main() {
    Ponto p1, p2;
    int n;
    
    // Solicitar pontos extremos
    std::cout << "Digite as coordenadas de P1 (x y): ";
    std::cin >> p1.x >> p1.y;
    
    std::cout << "Digite as coordenadas de P2 (x y): ";
    std::cin >> p2.x >> p2.y;
    
    std::cout << "Digite o número de pontos intermediários: ";
    std::cin >> n;
    
    // Alocar array dinamicamente
    Ponto* pontos = new Ponto[n];
    
    // Calcular pontos intermediários
    float delta_t = 1.0f / (n + 1);
    
    for (int i = 0; i < n; i++) {
        float t = (i + 1) * delta_t;
        pontos[i].x = p1.x + t * (p2.x - p1.x);
        pontos[i].y = p1.y + t * (p2.y - p1.y);
    }
    
    // Imprimir resultados
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nPontos gerados:" << std::endl;
    std::cout << "P1: (" << p1.x << ", " << p1.y << ")" << std::endl;
    
    for (int i = 0; i < n; i++) {
        std::cout << "P" << i+2 << ": (" << pontos[i].x << ", " << pontos[i].y << ")" << std::endl;
    }
    
    std::cout << "P" << n+2 << ": (" << p2.x << ", " << p2.y << ")" << std::endl;
    
    // Liberar memória
    delete[] pontos;
    
    return 0;
}