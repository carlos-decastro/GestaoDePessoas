#ifndef Fornecedor_hpp
#define Fornecedor_hpp

#include <iostream>
#include "Pessoa.hpp"
using namespace std;

class Fornecedor : public Pessoa {

public:

    Fornecedor(){};
    Fornecedor (string nome, string endereco, string telefone, float valorCredito, float valorDivida);

    void setValorCredito(float valorCredito);
    void setValorDivida(float valorDivida);
    void obterSaldo();
    void atualizar(int campoEdit);

    float getValorCredito(){return valorCredito;};
    float getValorDivida(){return valorDivida;};

private:

    float valorCredito;
    float valorDivida;

};

#endif