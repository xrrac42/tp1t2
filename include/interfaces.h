#ifndef INTERFACES_H
#define INTERFACES_H

#include <string>
#include <list>

#include "dominios.h"
#include "entidades.h"

using namespace std;

class IServicoAutenticacao;
class IServicoDesenvolvedor;
class IServicoTestes;

class IApresentacaoAutenticacao {
public:
    virtual bool autenticar(Matricula*) = 0;
    virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
};

class IApresentacaoDesenvolvedor {
public:
    virtual void executar(Matricula*) = 0;
    virtual void cadastrar(Desenvolvedor) = 0;
    virtual void setCntrServicoDesenvolvedor(IServicoDesenvolvedor*) = 0;
};

class IApresentacaoTestes {
public:
    virtual void executar(Matricula*) = 0;
    virtual void setCntrServicoTestes(IServicoTestes*) = 0;
};

class IServicoAutenticacao {
public:
    virtual bool autenticar(Matricula, Senha) = 0;
    virtual ~IServicoAutenticacao() {}
};

class IServicoDesenvolvedor {
public:
    virtual bool cadastrar(Desenvolvedor) = 0;
    virtual bool descadastrar(Matricula) = 0;
    virtual bool recuperar(Desenvolvedor, Matricula*) = 0;
    virtual ~IServicoDesenvolvedor() {}
};

class IServicoTestes {
public:
    virtual bool cadastrarTeste(Matricula, Teste) = 0;
    virtual bool descadastrarTeste(Codigo) = 0;
    virtual bool editarTeste(Teste) = 0;
    virtual bool verTeste(Teste, Codigo*) = 0;

    virtual bool cadastrarCasoTeste(Codigo, CasoTeste) = 0;
    virtual bool descadastrarCasoTeste(Codigo) = 0;
    virtual bool editarCasoTeste(CasoTeste) = 0;
    virtual bool verCasoTeste(CasoTeste, Codigo*) = 0;
};

#endif // INTERFACES_H
