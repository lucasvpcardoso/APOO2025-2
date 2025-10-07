#ifndef DADO_H
#define DADO_H

class Dado {
private:
    int faces;

public:
    // Construtores
    Dado();
    Dado(int numFaces);
    
    // Métodos
    int rolar();
    void setFaces(int numFaces);
    int getFaces();
};

#endif