#ifndef Operario_hpp
#define Operario_hpp

#include <iostream>
#include "Empregado.hpp"
using namespace std;

class Operario : public Empregado {

public:

    Operario(){};
    Operario (string nome, string endereco, string telefone, int codSetor, float valorProducao, float comissao);

    void setValorProducao(float valorProducao);
    void setComissao(float comissao);
    void calcularSalario();
    void atualizar(int campoEdit);

    float getValorProducao(){return valorProducao;};
    float getComissao(){return comissao;};

private:

    float valorProducao;
    float comissao;

};

#endif