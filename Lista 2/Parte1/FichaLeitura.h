#ifndef FICHALEITURA_H
#define FICHALEITURA_H

#include <string>

class Fichaleitura {
private:
    std::string titulo;
    std::string autor;
    int anoPublicacao;
    int numPaginas;
    int paginaAtual;
    bool lido;
    double nota0a5;

public:
    // Construtores
    Fichaleitura();
    Fichaleitura(std::string titulo, std::string autor, int anoPublicacao, 
                 int numPaginas, int paginaAtual, bool lido, double nota0a5);
    
    // Getters
    std::string getTitulo();
    std::string getAutor();
    int getAnoPublicacao();
    int getNumPaginas();
    int getPaginaAtual();
    bool getLido();
    double getNota0a5();
    
    // Setters
    void setTitulo(std::string titulo);
    void setAutor(std::string autor);
    void setAnoPublicacao(int anoPublicacao);
    void setNumPaginas(int numPaginas);
    void setPaginaAtual(int paginaAtual);
    void setLido(bool lido);
    void setNota0a5(double nota0a5);
    
    // Métodos específicos
    void iniciarLeitura();
    void marcarLido();
    void avancarPaginas(int paginas);
    void avaliar(double nota);
    double percentualLido();
    std::string resumo();
};

#endif