#ifndef Vendedor_hpp
#define Vendedor_hpp

#include <iostream>
#include "Empregado.hpp"
using namespace std;

class Vendedor : public Empregado {

public:

    Vendedor(){};
    Vendedor (string nome, string endereco, string telefone, int codSetor, float valorVendas, float comissao);

    void setValorVendas(float valorVendas);
    void setComissao(float comissao);
    void calcularSalario();
    void atualizar(int campoEdit);

    float getValorVendas(){return valorVendas;};
    float getComissao(){return comissao;};

private:

    float valorVendas;
    float comissao;

};

#endif