#ifndef SMARTHOUSE_H
#define SMARTHOUSE_H

#include <string>

class SmartHouse {
private:
    bool luzesLigadas;
    double temperaturaDesejada;
    bool alarmeAtivo;
    bool portaTrancada;
    std::string modo;

public:
    // Construtores
    SmartHouse();
    SmartHouse(bool luzesLigadas, double temperaturaDesejada, bool alarmeAtivo, 
               bool portaTrancada, std::string modo);
    
    // Getters
    bool getLuzesLigadas();
    double getTemperaturaDesejada();
    bool getAlarmeAtivo();
    bool getPortaTrancada();
    std::string getModo();
    
    // Setters
    void setLuzesLigadas(bool luzesLigadas);
    void setTemperaturaDesejada(double temperaturaDesejada);
    void setAlarmeAtivo(bool alarmeAtivo);
    void setPortaTrancada(bool portaTrancada);
    void setModo(std::string modo);
    
    // Métodos específicos
    void ligarLuzes();
    void desligarLuzes();
    void ativarAlarme();
    void desativarAlarme();
    void trancarPorta();
    void destrancarPorta();
    std::string status();
    void aplicarCena(std::string cena);
};

#endif