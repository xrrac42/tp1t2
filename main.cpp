#include <iostream>
#include "include/interfaces.h"
#include "cntrs_apresentacao/controladoras_apresentacao.h"
#include "stubs/stubs_servico.h"

using namespace std;

int main() {
    CntrApresentacaoControle cntrapresentacaoControle;

    IApresentacaoAutenticacao* cntrapresentacaoAutenticacao;
    IApresentacaoDesenvolvedor* cntrapresentacaoDesenvolvedor;
    IApresentacaoTestes* cntrapresentacaoTestes;

    cntrapresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
   

    cntrapresentacaoControle.setCntrApresentacaoAutenticacao(cntrapresentacaoAutenticacao);
    cntrapresentacaoControle.setCntrApresentacaoDesenvolvedor(cntrapresentacaoDesenvolvedor);
    cntrapresentacaoControle.setCntrApresentacaoTestes(cntrapresentacaoTestes);

    IServicoAutenticacao* stubServicoAutenticacao;
    IServicoDesenvolvedor* cntrServicoDesenvolvedor;
    IServicoTestes* stubServicoTestes;

    stubServicoAutenticacao = new StubServicoAutenticacao();


    cntrapresentacaoAutenticacao->setCntrServicoAutenticacao(stubServicoAutenticacao);

    cntrapresentacaoControle.executar();

    delete cntrapresentacaoAutenticacao;
    delete cntrapresentacaoDesenvolvedor;


    return 0;
}
