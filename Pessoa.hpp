#ifndef Pessoa_hpp
#define Pessoa_hpp

#include <iostream>
using namespace std;

class Pessoa {

public:

    Pessoa(){};
    Pessoa(string nome, string endereco, string telefone);

    virtual void atualizar(int campoEdit);

    void setNome(string nome);
    void setEndereco(string endereco);
    void setTelefone(string telefone);

    string getNome(){return nome;};
    string getEndereco(){return endereco;};
    string getTelefone(){return telefone;};

protected:

    string nome;
    string endereco;
    string telefone;

};

#endif