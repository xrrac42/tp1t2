 /**
 * @file dominios.h
 * @brief Arquivo que contém as declarações das classes de domínio.
 * 
 * @details
 * As classes de domínio são responsáveis por armazenar os dados de entrada do usuário.
 * Cada classe de domínio é responsável por armazenar um tipo de dado.
*/

#ifndef DOMINIOS_H
#define DOMINIOS_H

#include <string>

using namespace std;

// Declaração das classes
// ---------------------------------------------------------------------------------
// Classe Codigo
// ---------------------------------------------------------------------------------

/**
* @brief Dominio Codigo que armazena um código de 6 caracteres.
*
* @details
* O código deve ser composto por 6 caracteres.
* E deve seguir o formato LLLDDD, onde:
* L é letra (A - Z ou a - z);
* D é dígito (0 - 9).
*/
class Codigo{
    private: 
        // Atributo que armazena o código
        string codigo;
        void validar(string);

    public:
        // Métodos
        void setCodigo(string);
        /**
         * @brief Seta o código.
         * 
         * @details
         * Seta o código e chama o método validar.
         * 
         * @param Codigo a ser setado.
         * 
         * @throw invalid_argument caso o código seja inválido.
        */
       
        string getCodigo();
         /**
         * @brief Retorna o código.
         * 
         * @return Codigo.
        */
};

inline string Codigo::getCodigo(){

    return codigo;
}

// ---------------------------------------------------------------------------------
// Classe Classe
// ---------------------------------------------------------------------------------

/**
* @brief Dominio Classe que armazena uma classe que corresponde a um dos valores suportados.
* 
* @details
* Os valores da classe são:
* UNIDADE, INTEGRAÇÃO, FUMAÇA, SISTEMA, REGRESSÃO, ACEITAÇÃO
*/
class Classe{
    private:
        // Atributo que armazena a classe
        string classe;
        void validar(string);

    public:
        // Métodos
        /**
         * @brief Seta a classe.
         * 
         * @details
         * Seta a classe e chama o método validar.
         * 
         * @param Classe a ser setada.
         * 
         * @throw invalid_argument caso a classe seja inválida.
        */
        void setClasse(string);
        /**
         * @brief Retorna a classe.
         * 
         * @return Classe.
        */
        string getClasse();
};

inline string Classe::getClasse(){

    return classe;
}

// ---------------------------------------------------------------------------------
// Classe texto
// ---------------------------------------------------------------------------------
/**
 * @brief Dominio Texto que armazena um texto de 10 até 20 caracteres.
 * 
 * @details
 * Cada caractere X é letra, dígito (0-9), sinal de pontuação ( . , ; ? ! : - ), @ , #, $ , % ou &
 * Não há espaços em branco em sequência
 * Não há acentuação
*/
class Texto{
    private:
        // Atributo que armazena o texto
        string texto;
        void validar(string);

    public:
        // Métodos
        /**
         * @brief Seta o texto.
         * 
         * @details
         * Seta o texto e chama o método validar.
         * 
         * @param Texto a ser setado.
         * 
         * @throw invalid_argument caso o texto seja inválido.
        */
        void setTexto(string);
        /**
         * @brief Retorna o texto.
         * 
         * @return Texto.
        */
        string getTexto();
};

inline string Texto::getTexto(){

    return texto;
}

// ---------------------------------------------------------------------------------
// Classe Data
// ---------------------------------------------------------------------------------
/**
 * @brief Dominio Data que armazena uma data.
 * 
 * @details
 * A data deve estar no formato DD/MM/AAAA, onde:
 * DD é dia (01 - 31);
 * MM é mês (01 - 12);
 * AAAA é ano (2000 - 2099).
*/
class Data{
    private:
        // Atributo que armazena a data
        string data;
        void validar(string);

    public:
        // Métodos
        /**
         * @brief Seta a data.
         * 
         * @details
         * Seta a data e chama o método validar.
         * 
         * @param Data a ser setada.
         * 
         * @throw invalid_argument caso a data seja inválida.
        */
        void setData(string);
        /**
         * @brief Retorna a data.
         * 
         * @return Data.
        */
        string getData();
};

inline string Data::getData(){

    return data;
}

// ---------------------------------------------------------------------------------
// Classe Matricula
// ---------------------------------------------------------------------------------
/**
 * @brief Dominio Matricula que armazena uma matrícula.
 * 
 * @details
 * A matrícula deve estar no formato DDDDDX, onde:
 * D é dígito (0 - 9).
 * X é dígito verificador calculado com módulo 10.
*/
class Matricula{
    private:
        // Atributo que armazena a matrícula
        string matricula;
        void validar(string);

    public:
        // Métodos
        /**
         * @brief Seta a matrícula.
         * 
         * @details
         * Seta a matrícula e chama o método validar.
         * 
         * @param Matrícula a ser setada.
         * 
         * @throw invalid_argument caso a matrícula seja inválida.
        */
        void setMatricula(string);
        /**
         * @brief Retorna a matrícula.
         * 
         * @return Matrícula.
        */
        string getMatricula();
};

inline string Matricula::getMatricula(){

    return matricula;
}

// ---------------------------------------------------------------------------------
// Classe Resultado
// ---------------------------------------------------------------------------------
/**
 * @brief Dominio Resultado que armazena um resultado.
 * 
 * @details
 * APROVADO, REPROVADO.
*/
class Resultado{
    private:
        // Atributo que armazena o resultado
        string resultado;
        void validar(string);

    public:
        // Métodos
        /**
         * @brief Seta o resultado.
         * 
         * @details
         * Seta o resultado e chama o método validar.
         * 
         * @param Resultado a ser setado.
         * 
         * @throw invalid_argument caso o resultado seja inválido.
        */
        void setResultado(string);
        /**
         * @brief Retorna o resultado.
         * 
         * @return Resultado.
        */
        string getResultado();
};

inline string Resultado::getResultado(){

    return resultado;
}
// ---------------------------------------------------------------------------------
// Classe Senha
// ---------------------------------------------------------------------------------
/**
 * @brief Dominio Senha que armazena uma senha.
 * 
 * @details
 * A senha deve estar no formato XXXXXX, onde:
 * X é letra (A - Z, a - z), dígito (0 - 9) ou @ , #, $ , % ou &.
 * Não pode haver caractere duplicado
*/
class Senha{
    private:
        // Atributo que armazena a senha
        string senha;
        void validar(string);

    public:
        // Métodos
        /**
         * @brief Seta a senha.
         * 
         * @details
         * Seta a senha e chama o método validar.
         * 
         * @param Senha a ser setada.
         * 
         * @throw invalid_argument caso a senha seja inválida.
        */
        void setSenha(string);
        /**
         * @brief Retorna a senha.
         * 
         * @return Senha.
        */
        string getSenha();
};

inline string Senha::getSenha(){

    return senha;
}

// ---------------------------------------------------------------------------------
// Classe Telefone
// ---------------------------------------------------------------------------------
/**
 * @brief Dominio Telefone que armazena um telefone.
 * 
 * @details
 * Formato +XXXXXXX (7 dígitos) a +XXXXXXXXXXXXXXX (15 dígitos), onde:
 * X é dígito (0 - 9).
*/
class Telefone{
    private:
        // Atributo que armazena o telefone
        string telefone;
        void validar(string);

    public:
        // Métodos
        /**
         * @brief Seta o telefone.
         * 
         * @details
         * Seta o telefone e chama o método validar.
         * 
         * @param Telefone a ser setado.
         * 
         * @throw invalid_argument caso o telefone seja inválido.
        */
        void setTelefone(string);
        /**
         * @brief Retorna o telefone.
         * 
         * @return Telefone.
        */
        string getTelefone();
};

inline string Telefone::getTelefone(){

    return telefone;
}

#endif