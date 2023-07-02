#ifndef STUBS_SERVICO_H
#define STUBS_SERVICO_H

#include "../include/interfaces.h"
#include "../include/entidades.h"
#include "../include/dominios.h"

using namespace std;

class StubServicoAutenticacao: public IServicoAutenticacao{
    public:
    bool autenticar(Matricula,Senha);
};




#endif