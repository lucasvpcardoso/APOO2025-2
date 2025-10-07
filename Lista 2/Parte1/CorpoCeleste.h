#ifndef CORPOCELESTE_H
#define CORPOCELESTE_H

#include <string>

enum TipoCorpo { Estrela, Planeta, Lua, Asteroide, Cometa, Outro };

class CorpoCeleste {
private:
    std::string nome;
    TipoCorpo tipo;
    double massaKg;
    double raioKm;

public:
    // Construtores
    CorpoCeleste();
    CorpoCeleste(std::string nome, TipoCorpo tipo, double massaKg, double raioKm);
    
    // Getters
    std::string getNome();
    TipoCorpo getTipo();
    double getMassaKg();
    double getRaioKm();
    
    // Setters
    void setNome(std::string nome);
    void setTipo(TipoCorpo tipo);
    void setMassaKg(double massaKg);
    void setRaioKm(double raioKm);
    
    // Métodos específicos
    double calcularDensidade();
    double calcularGravidadeSuperficial();
    std::string descricao();
};

#endif