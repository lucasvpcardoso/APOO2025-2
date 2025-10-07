#include "FrequenciaCardiaca.h"
#include <stdexcept>

// Construtor padrão
FrequenciaCardiaca::FrequenciaCardiaca() 
    : primeiroNome(""), sobrenome(""), diaNasc(1), mesNasc(1), anoNasc(1900) {}

// Construtor parametrizado
FrequenciaCardiaca::FrequenciaCardiaca(std::string primeiroNome, std::string sobrenome, 
                                       int diaNasc, int mesNasc, int anoNasc) {
    setPrimeiroNome(primeiroNome);
    setSobrenome(sobrenome);
    setDiaNasc(diaNasc);
    setMesNasc(mesNasc);
    setAnoNasc(anoNasc);
}

// Getters
std::string FrequenciaCardiaca::getPrimeiroNome() { return primeiroNome; }
std::string FrequenciaCardiaca::getSobrenome() { return sobrenome; }
int FrequenciaCardiaca::getDiaNasc() { return diaNasc; }
int FrequenciaCardiaca::getMesNasc() { return mesNasc; }
int FrequenciaCardiaca::getAnoNasc() { return anoNasc; }

// Setters com validação
void FrequenciaCardiaca::setPrimeiroNome(std::string primeiroNome) {
    this->primeiroNome = primeiroNome;
}

void FrequenciaCardiaca::setSobrenome(std::string sobrenome) {
    this->sobrenome = sobrenome;
}

void FrequenciaCardiaca::setDiaNasc(int diaNasc) {
    if (diaNasc < 1 || diaNasc > 31) {
        throw std::invalid_argument("Dia deve estar entre 1 e 31");
    }
    this->diaNasc = diaNasc;
}

void FrequenciaCardiaca::setMesNasc(int mesNasc) {
    if (mesNasc < 1 || mesNasc > 12) {
        throw std::invalid_argument("Mês deve estar entre 1 e 12");
    }
    this->mesNasc = mesNasc;
}

void FrequenciaCardiaca::setAnoNasc(int anoNasc) {
    if (anoNasc <= 1900) {
        throw std::invalid_argument("Ano deve ser maior que 1900");
    }
    this->anoNasc = anoNasc;
}

// Métodos específicos
int FrequenciaCardiaca::obterIdade(int diaAtual, int mesAtual, int anoAtual) {
    int idade = anoAtual - anoNasc;
    
    // Ajuste se ainda não fez aniversário este ano
    if (mesAtual < mesNasc || (mesAtual == mesNasc && diaAtual < diaNasc)) {
        idade--;
    }
    
    return idade;
}

int FrequenciaCardiaca::obterFrequenciaMaxima(int idade) {
    return 220 - idade;
}

void FrequenciaCardiaca::obterFrequenciaIdeal(int idade, int& minAlvo, int& maxAlvo) {
    int freqMaxima = obterFrequenciaMaxima(idade);
    minAlvo = static_cast<int>(freqMaxima * 0.5);
    maxAlvo = static_cast<int>(freqMaxima * 0.85);
}

std::string FrequenciaCardiaca::getDataNascimento() {
    return std::to_string(diaNasc) + "/" + std::to_string(mesNasc) + "/" + std::to_string(anoNasc);
}

std::string FrequenciaCardiaca::getNomeCompleto() {
    return primeiroNome + " " + sobrenome;
}