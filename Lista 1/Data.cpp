#include "Data.h"
#include <iostream>

Data::Data(int d, int m, int a) {
    dia = d;
    mes = m;
    ano = a;
}

void Data::imprimirData() {
    std::cout << dia << "/" << mes << "/" << ano << std::endl;
}

void Data::imprimirDataPorExtenso(std::string cidade) {
    std::string meses[12] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    std::cout << cidade << ", " << dia << " de " << meses[mes - 1] << " de " << ano << std::endl;
}