#ifndef CONTRALADORAS_APRESENTACAO_H
#define CONTRALADORAS_APRESENTACAO_H

#include "../include/dominios.h"
#include "../include/entidades.h"
#include "../include/interfaces.h"

using namespace std;

class CntrApresentacaoControle {
private:
    IApresentacaoAutenticacao* cntrApresentacaoAutenticacao;
    IApresentacaoDesenvolvedor* cntrApresentacaoDesenvolvedor;
    IApresentacaoTestes* cntrApresentacaoTestes;
    Matricula matricula;
    void executarAutenticado();


public:
    void executar();
    void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao*);
    void setCntrApresentacaoDesenvolvedor(IApresentacaoDesenvolvedor*);
    void setCntrApresentacaoTestes(IApresentacaoTestes*);
};

class CntrApresentacaoAutenticacao : public IApresentacaoAutenticacao {
private:
    IServicoAutenticacao* cntrServicoAutenticacao;

public:
    bool autenticar(Matricula*);
    void setCntrServicoAutenticacao(IServicoAutenticacao*);
};

class CntrApresentacaoDesenvolvedor : public IApresentacaoDesenvolvedor {
private:
    IServicoDesenvolvedor* cntrServicoDesenvolvedor;
public:
    void executar(Matricula*);
    void cadastrar();
    void setCntrServicoDesenvolvedor(IServicoDesenvolvedor*);
};

class CntrApresentacaoTestes : public IApresentacaoTestes {
private:
    IServicoTestes* cntrServicoTestes;

public:
    void executar(Matricula*);
    void setCntrServicoTestes(IServicoTestes*);
};

#endif
