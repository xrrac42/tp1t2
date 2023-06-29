/**
 * @file entidades.h
 * @brief Arquivo que contém as declarações das classes de entidade.
 * 
 * @details
 * As classes de entidade são responsáveis por armazenar os dados de saída do programa.
 * Cada classe de entidade é responsável por armazenar um tipo de dado.
*/
#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"

using namespace std;

// ---------------------------------------------------------------------------------
// Entidade Teste
// ---------------------------------------------------------------------------------

/**
 * @brief Entidade Teste que armazena um código, uma classe e um nome.
 * 
 * @details
 * A entidade Teste armazena um código, uma classe e um nome.
*/

class Teste{
    private:
        Codigo codigo;
        Classe classe;
        Texto nome;
    
    public:
        void setCodigo(const Codigo &codigo); // Seta o código
        void setClasse(const Classe &classe); // Seta a classe
        void setNome(const Texto &nome); // Seta o nome

        Codigo getCodigo() const; // Retorna o código
        Classe getClasse() const; // Retorna a classe
        Texto getNome() const; // Retorna o nome
};

/**
 * @brief Retorna o código.
 * 
 * @return Codigo.
*/
inline void Teste::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline void Teste::setClasse(const Classe &classe){
    this->classe = classe;
}

inline void Teste::setNome(const Texto &nome){
    this->nome = nome;
}

inline Codigo Teste::getCodigo() const{
    return codigo;
}

inline Classe Teste::getClasse() const{
    return classe;
}

inline Texto Teste::getNome() const{
    return nome;
}

// ---------------------------------------------------------------------------------
// Entidade Desenvolvedor
// ---------------------------------------------------------------------------------

class Desenvolvedor{
    /**
     * @brief Entidade Desenvolvedor que armazena uma matrícula, um nome, uma senha e um telefone.
     * 
     * @details
     * A entidade Desenvolvedor armazena uma matrícula, um nome, uma senha e um telefone.
    */
    private:
        Matricula matricula;
        Texto nome;
        Senha senha;
        Telefone telefone;

    public:
        void setMatricula(const Matricula &matricula);
        void setNome(const Texto &nome);
        void setSenha(const Senha &senha);
        void setTelefone(const Telefone &telefone);

        Matricula getMatricula() const;
        Texto getNome() const;
        Senha getSenha() const;
        Telefone getTelefone() const;
};

inline void Desenvolvedor::setMatricula(const Matricula &matricula){
    this->matricula = matricula;
}

inline void Desenvolvedor::setNome(const Texto &nome){
    this->nome = nome;
}

inline void Desenvolvedor::setSenha(const Senha &senha){
    this->senha = senha;
}

inline void Desenvolvedor::setTelefone(const Telefone &telefone){
    this->telefone = telefone;
}

inline Matricula Desenvolvedor::getMatricula() const{
    return matricula;
}

inline Texto Desenvolvedor::getNome() const{
    return nome;
}

inline Senha Desenvolvedor::getSenha() const{
    return senha;
}

inline Telefone Desenvolvedor::getTelefone() const{
    return telefone;
};

// ---------------------------------------------------------------------------------
// Entidade Caso de Teste
// ---------------------------------------------------------------------------------
/**
 * @brief Entidade Caso de Teste que armazena um código, um nome, uma data, uma ação, uma resposta e um resultado.
 * 
 * @details
 * 
 * A entidade Caso de Teste armazena um código, um nome, uma data, uma ação, uma resposta e um resultado.
 * 
*/

class CasoTeste{
    private:
        Codigo codigo;
        Texto nome;
        Data data;
        Texto acao;
        Texto resposta;
        Resultado resultado;

    public:
        void setCodigo(const Codigo &codigo);
        void setNome(const Texto &nome);
        void setData(const Data &data);
        void setAcao(const Texto &acao);
        void setResposta(const Texto &resposta);
        void setResultado(const Resultado &resultado);

        Codigo getCodigo() const;
        Texto getNome() const;
        Data getData() const;
        Texto getAcao() const;
        Texto getResposta() const;
        Resultado getResultado() const;
};

/**
 * @brief Retorna o código.
 * 
 * @return Codigo.
 *
*/

inline void CasoTeste::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline void CasoTeste::setNome(const Texto &nome){
    this->nome = nome;
}

inline void CasoTeste::setData(const Data &data){
    this->data = data;
}

inline void CasoTeste::setAcao(const Texto &acao){
    this->acao = acao;
}

inline void CasoTeste::setResposta(const Texto &resposta){
    this->resposta = resposta;
}

inline void CasoTeste::setResultado(const Resultado &resultado){
    this->resultado = resultado;
}

inline Codigo CasoTeste::getCodigo() const{
    return codigo;
}

inline Texto CasoTeste::getNome() const{
    return nome;
}

inline Data CasoTeste::getData() const{
    return data;
}

inline Texto CasoTeste::getAcao() const{
    return acao;
}

inline Texto CasoTeste::getResposta() const{
    return resposta;
}

inline Resultado CasoTeste::getResultado() const{
    return resultado;
}


#endif