#ifndef CONTRALADORAS_APRESENTACAO_H
#define CONTRALADORAS_APRESENTACAO_H

#include "../include/dominios.h"
#include "../include/entidades.h"
#include "../include/interfaces.h"

using namespace std;
    class CntrApresentacaoControle{
        private:
            IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
            IApresentacaoDesenvolvedor *cntrApresentacaoDesenvolvedor;
            IApresentacaoTestes * CntrApresentacaoTestes;
            Matricula matricula;
        public:
        void executar();
        void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao*);
        void setCntrApresentacaoDesenvolvedor(IApresentacaoDesenvolvedor*);
        void setCntrApresentacaoTestes(IApresentacaoTestes*);

    };

    class CntrApresentacacaoAutenticacao:public IApresentacaoAutenticacao{
        private:
        IServicoAutenticacao *cntrSerivoAutenticacao;
        void autenticar();
        public:
        bool autenticar(Matricula*);
        void setCntrServicoAutenticacao(IServicoAutenticacao*);
    };


    class CntrApresentacacaoDesenvolvedor:public IApresentacaoDesenvolvedor{
        private:
        IServicoDesenvolvedor *cntrSerivoDesenvolverdor;
        void autenticar();
        public:
        void executar(Matricula*);
        void cadastrar();
        void setCntrServicoDesenvolvedor(IServicoDesenvolvedor*);
    };

    class CntrApresentacacaoTestes:public IApresentacaoTestes{
        private:
        IServicoTestes *cntrSerivoDesenvolvedor;
        void autenticar();
        public:
        void executar(Matricula*);
        void setCntrServicoTestes(IServicoTestes*);
    };

#endif