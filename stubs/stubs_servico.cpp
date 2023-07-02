#include "stubs_servico.h"

bool StubServicoAutenticacao::autenticar(Matricula matricula, Senha senha){
    if(matricula.getMatricula() == "9876543" && senha.getSenha()=="a9@Bc7"){
        return true;
    }

    return false;
}
