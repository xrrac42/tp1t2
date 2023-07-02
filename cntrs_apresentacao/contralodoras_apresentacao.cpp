#include <iostream>
#include "controladoras_apresentacao.h"

void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao* cntr) {
    cntrApresentacaoAutenticacao = cntr;
}

void CntrApresentacaoControle::setCntrApresentacaoDesenvolvedor(IApresentacaoDesenvolvedor* cntr) {
    cntrApresentacaoDesenvolvedor = cntr;
}

void CntrApresentacaoControle::setCntrApresentacaoTestes(IApresentacaoTestes* cntr) {
    cntrApresentacaoTestes = cntr;
}

void CntrApresentacaoControle::executar() {
    bool autenticado = false;

    while (true) {
        system("cls");

        cout << "Bem-vindo ao sistema DEV" << endl;
        cout << "1 - Autenticar" << endl;
        cout << "2 - Cadastrar" << endl;
        cout << "3 - Sair" << endl;

        int opcao;
        cout << "Digite a opção desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                autenticado = cntrApresentacaoAutenticacao->autenticar(&matricula);
                if (autenticado) {
                    executarAutenticado();
                }
                break;
            case 2:
                cntrApresentacaoDesenvolvedor->cadastrar();
                break;
            case 3:
                return;
            default:
                cout << "Opcao Invalida" << endl;
                break;
        }
        
        cout << "Pressione Enter para continuar...";
        cin.ignore();
        cin.get();
    }
}

void CntrApresentacaoControle::executarAutenticado() {
    while (true) {
        system("cls");
        cout << "Sistema DEV" << endl;
        cout << "Usuario: " << matricula.getMatricula() << endl;
        cout << "1 - Servicos de Desenvolvedor" << endl;
        cout << "2 - Sair" << endl;

        int opcao;
        cout << "Digite a opção desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cntrApresentacaoDesenvolvedor->executar(&matricula);
                if (matricula.getMatricula() == "") {
                    return;
                }
                break;
            case 2:
                return;
            default:
                cout << "Opcao Invalida" << endl;
                break;
        }
    }
}

void CntrApresentacaoAutenticacao::setCntrServicoAutenticacao(IServicoAutenticacao* cntr) {
    cntrServicoAutenticacao = cntr;
}

bool CntrApresentacaoAutenticacao::autenticar(Matricula* matricula) {
    string matriculaStr, senhaStr;
    while (true) {
        system("cls");

        cout << "Sistema DEV" << endl;
        cout << "Login usuário" << endl;
        cout << "Digite a Matrícula: ";
        cin >> matriculaStr;
        cout << "Digite sua senha: ";
        cin >> senhaStr;

        Matricula matriculaObj;
        matriculaObj.setMatricula(matriculaStr);
        Senha senhaObj;
        senhaObj.setSenha(senhaStr);

        bool autenticado = cntrServicoAutenticacao->autenticar(matriculaObj, senhaObj);
        if (autenticado) {
            matricula->setMatricula(matriculaObj.getMatricula());
            return true;
        } else {
            cout << "Senha ou matrícula incorretos" << endl;
            cout << "Pressione qualquer tecla para sair" << endl;
            cin.ignore();
            cin.get();
        }
    }
}
void CntrApresentacaoDesenvolvedor::executar(Matricula* matricula) {
    while (true) {
        system("cls");

        cout << "Sistema DEV" << endl;
        cout << "Usuário: " << matricula->getMatricula() << endl;
        cout << "1 - Descadastrar" << endl;
        cout << "2 - Sair" << endl;

        int opcao;
        cout << "Digite a opção desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Tem certeza que deseja se descadastrar?" << endl;
                char confirmacao;
                cin >> confirmacao;
                if (confirmacao == 's' || confirmacao == 'S') {
                    if (cntrServicoDesenvolvedor->descadastrar(*matricula)) {
                        cout << "Desenvolvedor descadastrado com sucesso" << endl;
                        matricula->setMatricula("");
                        cin.ignore();
                        cin.get();
                        return;
                    } else {
                        cout << "Erro ao descadastrar desenvolvedor" << endl;
                        cin.ignore();
                        cin.get();
                    }
                }
                break;
            case 2:
                return;
            default:
                cout << "Opção inválida" << endl;
                cin.ignore();
                cin.get();
                break;
        }
    }
}
void CntrApresentacaoDesenvolvedor::cadastrar() {
    std::string matriculaStr, senhaStr;

    while (true) {
        system("cls");
        std::cout << "Sistema de Bloco DEV" << std::endl;
        std::cout << "Cadastro de Usuário" << std::endl;

        std::cout << "Digite a matrícula: ";
        std::cin >> matriculaStr;

        std::cout << "Digite a senha: ";
        std::cin >> senhaStr;

        Matricula matriculaObj;
        matriculaObj.setMatricula(matriculaStr);

        Senha senhaObj;
        senhaObj.setSenha(senhaStr);

        Desenvolvedor desenvolvedor;
        desenvolvedor.setMatricula(matriculaObj);
        desenvolvedor.setSenha(senhaObj);

        if (cntrServicoDesenvolvedor->cadastrar(desenvolvedor)) {
            std::cout << "Usuário cadastrado com sucesso" << std::endl;
            break;
        } else {
            std::cout << "Erro ao cadastrar usuário" << std::endl;
            std::cout << "Pressione Enter para continuar ou digite 'sair' para sair" << std::endl;

            std::string input;
            std::cin.ignore();
            getline(std::cin, input);

            if (input == "sair")
                return;
        }
    }
}
void CntrApresentacaoTestes::setCntrServicoTestes(IServicoTestes*cntr
){
    cntrServicoTestes =cntr;
}

void CntrApresentacaoTestes::executar(Matricula* matricula) {
    while (true) {
        system("cls");
        std::cout << "Em desenvolvimento" << std::endl;

        std::cout << "Digite qualquer caractere para sair: ";
        std::string input;
        std::cin >> input;
        if (!input.empty()) {
            break;
        }
    }
}





