#ifndef MAGO_H
#define MAGO_H

#include <string>

class Mago {
private:
    std::string nome;
    int nivel;
    std::string especialidade;
    int mana;

public:
    Mago(std::string nome, int nivel, std::string especialidade, int mana);
    void lancarFeitico();
    void meditar();
    void mostrarEspecialidade();
    std::string getNome();
    int getNivel();
    std::string getEspecialidade();
    int getMana();
};

#endif