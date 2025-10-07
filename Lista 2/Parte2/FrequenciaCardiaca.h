#ifndef FREQUENCIACARDIACA_H
#define FREQUENCIACARDIACA_H

#include <string>

class FrequenciaCardiaca {
private:
    std::string primeiroNome;
    std::string sobrenome;
    int diaNasc;
    int mesNasc;
    int anoNasc;

public:
    // Construtores
    FrequenciaCardiaca();
    FrequenciaCardiaca(std::string primeiroNome, std::string sobrenome, 
                       int diaNasc, int mesNasc, int anoNasc);
    
    // Getters
    std::string getPrimeiroNome();
    std::string getSobrenome();
    int getDiaNasc();
    int getMesNasc();
    int getAnoNasc();
    
    // Setters com validação
    void setPrimeiroNome(std::string primeiroNome);
    void setSobrenome(std::string sobrenome);
    void setDiaNasc(int diaNasc);
    void setMesNasc(int mesNasc);
    void setAnoNasc(int anoNasc);
    
    // Métodos específicos
    int obterIdade(int diaAtual, int mesAtual, int anoAtual);
    int obterFrequenciaMaxima(int idade);
    void obterFrequenciaIdeal(int idade, int& minAlvo, int& maxAlvo);
    std::string getDataNascimento();
    std::string getNomeCompleto();
};

#endif