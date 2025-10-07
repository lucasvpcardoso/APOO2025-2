#ifndef FIGURINHA_H
#define FIGURINHA_H

#include <string>

class Figurinha {
private:
    int numero;
    std::string nomeJogador;
    std::string time;

public:
    // Construtores
    Figurinha();
    Figurinha(int numero, std::string nomeJogador, std::string time);
    
    // Getters
    int getNumero();
    std::string getNomeJogador();
    std::string getTime();
    
    // Setters com validação
    void setNumero(int numero);
    void setNomeJogador(std::string nomeJogador);
    void setTime(std::string time);
    
    // Métodos específicos
    std::string resumo();
};

#endif