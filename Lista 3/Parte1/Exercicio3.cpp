#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int numVagas;
    
    // Solicitar número de vagas
    do {
        std::cout << "Digite o número de vagas (5-15): ";
        std::cin >> numVagas;
    } while (numVagas < 5 || numVagas > 15);
    
    // Alocar array dinamicamente para representar vagas
    int* estacionamento = new int[numVagas];
    
    // Inicializar todas as vagas como livres
    for (int i = 0; i < numVagas; i++) {
        estacionamento[i] = 0;
    }
    
    // Inicializar semente para números aleatórios
    std::srand(std::time(0));
    
    // Simulação por 24 horas
    for (int hora = 1; hora <= 24; hora++) {
        std::cout << "\n=== Hora " << hora << " ===" << std::endl;
        
        // Passo i: Decrementar tempo dos carros ativos
        for (int i = 0; i < numVagas; i++) {
            if (estacionamento[i] > 0) {
                estacionamento[i]--;
                if (estacionamento[i] == 0) {
                    std::cout << "Vaga " << i+1 << " liberada!" << std::endl;
                }
            }
        }
        
        // Passo iii: Novo carro tenta entrar
        bool vagaEncontrada = false;
        for (int i = 0; i < numVagas; i++) {
            if (estacionamento[i] == 0) {
                // Carro ocupa vaga livre
                estacionamento[i] = (std::rand() % 5) + 1; // 1-5 horas
                std::cout << "Novo carro estacionou na vaga " << i+1 
                          << " por " << estacionamento[i] << " horas" << std::endl;
                vagaEncontrada = true;
                break;
            }
        }
        
        if (!vagaEncontrada) {
            std::cout << "Estacionamento CHEIO! Carro não pode entrar." << std::endl;
        }
        
        // Imprimir estado atual do estacionamento
        std::cout << "Estado do estacionamento: ";
        for (int i = 0; i < numVagas; i++) {
            if (estacionamento[i] == 0) {
                std::cout << "[L] ";
            } else {
                std::cout << "[" << estacionamento[i] << "] ";
            }
        }
        std::cout << std::endl;
    }
    
    // Liberar memória
    delete[] estacionamento;
    
    return 0;
}