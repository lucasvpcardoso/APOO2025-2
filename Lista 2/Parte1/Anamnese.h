#ifndef ANAMNESE_H
#define ANAMNESE_H

#include <string>

class Anamnese {
private:
    std::string nome;
    int idade;
    double pesoKg;
    double alturaM;
    std::string alergias;
    std::string doençasPreExistentes;
    std::string medicamentosEmUso;

public:
    // Construtores
    Anamnese();
    Anamnese(std::string nome, int idade, double pesoKg, double alturaM, 
             std::string alergias, std::string doençasPreExistentes, 
             std::string medicamentosEmUso);
    
    // Getters
    std::string getNome();
    int getIdade();
    double getPesoKg();
    double getAlturaM();
    std::string getAlergias();
    std::string getDoencasPreExistentes();
    std::string getMedicamentosEmUso();
    
    // Setters
    void setNome(std::string nome);
    void setIdade(int idade);
    void setPesoKg(double pesoKg);
    void setAlturaM(double alturaM);
    void setAlergias(std::string alergias);
    void setDoencasPreExistentes(std::string doençasPreExistentes);
    void setMedicamentosEmUso(std::string medicamentosEmUso);
    
    // Métodos específicos
    double calcularIMC();
    std::string gerarResumo();
};

#endif