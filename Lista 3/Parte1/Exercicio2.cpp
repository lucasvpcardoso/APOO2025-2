#include <iostream>
#include <iomanip>
#include <cmath>

struct Ponto {
    float x;
    float y;
};

int main() {
    int n;
    float r;
    
    // Solicitar dados
    std::cout << "Digite o número de pontos na circunferência: ";
    std::cin >> n;
    
    do {
        std::cout << "Digite o raio (0.0 < r ≤ 10.0): ";
        std::cin >> r;
    } while (r <= 0.0 || r > 10.0);
    
    // Alocar array dinamicamente
    Ponto* pontos = new Ponto[n];
    
    // Calcular pontos na circunferência
    float delta_theta = 2 * M_PI / n;
    
    for (int i = 0; i < n; i++) {
        float theta = i * delta_theta;
        pontos[i].x = r * cos(theta);
        pontos[i].y = r * sin(theta);
    }
    
    // Imprimir resultados
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nPontos na circunferência (raio " << r << "):" << std::endl;
    
    for (int i = 0; i < n; i++) {
        std::cout << "P" << i+1 << ": (" << pontos[i].x << ", " << pontos[i].y << ")" << std::endl;
    }
    
    // Liberar memória
    delete[] pontos;
    
    return 0;
}