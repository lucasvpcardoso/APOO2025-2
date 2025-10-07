#include <iostream>
#include "Mago.h"
#include "Data.h"

int main() {
    std::cout << "=== MAGOS ===" << std::endl;
    Mago mago1("Gandalf", 10, "Luz", 100);
    Mago mago2("Merlin", 15, "Elemental", 120);
    Mago mago3("Saruman", 12, "Trevas", 90);

    mago1.lancarFeitico();
    mago1.meditar();
    mago1.mostrarEspecialidade();

    mago2.lancarFeitico();
    mago2.mostrarEspecialidade();

    mago3.meditar();
    mago3.lancarFeitico();

    std::cout << "\n=== DATAS ===" << std::endl;
    Data hoje(25, 4, 2023);
    hoje.imprimirData();
    hoje.imprimirDataPorExtenso("São Leopoldo");

    return 0;
}