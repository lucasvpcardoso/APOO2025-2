#include "Mago.h"
#include <iostream>

Mago::Mago(std::string nome, int nivel, std::string especialidade, int mana) {
    this->nome = nome;
    this->nivel = nivel;
    this->especialidade = especialidade;
    this->mana = mana;
}

void Mago::lancarFeitico() {
    std::cout << nome << " lançou um feitiço!" << std::endl;
}

void Mago::meditar() {
    mana += 10;
    std::cout << nome << " meditou e recuperou 10 de mana." << std::endl;
}

void Mago::mostrarEspecialidade() {
    std::cout << nome << " é um mago especialista em " << especialidade << std::endl;
}

std::string Mago::getNome() { return nome; }
int Mago::getNivel() { return nivel; }
std::string Mago::getEspecialidade() { return especialidade; }
int Mago::getMana() { return mana; }