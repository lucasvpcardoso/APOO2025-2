#include "Figurinha.h"
#include <stdexcept>

// Construtor padrão
Figurinha::Figurinha() : numero(0), nomeJogador(""), time("") {}

// Construtor parametrizado
Figurinha::Figurinha(int numero, std::string nomeJogador, std::string time) {
    setNumero(numero);
    setNomeJogador(nomeJogador);
    setTime(time);
}

// Getters
int Figurinha::getNumero() { return numero; }
std::string Figurinha::getNomeJogador() { return nomeJogador; }
std::string Figurinha::getTime() { return time; }

// Setters com validação
void Figurinha::setNumero(int numero) {
    if (numero <= 0) {
        throw std::invalid_argument("Número deve ser maior que 0");
    }
    this->numero = numero;
}

void Figurinha::setNomeJogador(std::string nomeJogador) {
    this->nomeJogador = nomeJogador;
}

void Figurinha::setTime(std::string time) {
    this->time = time;
}

// Métodos específicos
std::string Figurinha::resumo() {
    return "Figurinha #" + std::to_string(numero) + " - " + nomeJogador + " (" + time + ")";
}