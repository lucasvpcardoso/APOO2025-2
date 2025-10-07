#ifndef DATA_H
#define DATA_H

#include <string>

class Data {
private:
    int dia;
    int mes;
    int ano;

public:
    Data(int d, int m, int a);
    void imprimirData();
    void imprimirDataPorExtenso(std::string cidade);
};

#endif