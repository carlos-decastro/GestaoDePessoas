#ifndef Empregado_hpp
#define Empregado_hpp

#include <iostream>
#include "Pessoa.hpp"
using namespace std;

class Empregado : public Pessoa {

public:

    Empregado(){};
    Empregado (string nome, string endereco, string telefone, int codSetor);

    void setCodSetor(int codSetor);
    void setSalarioBase(float salarioBase);
    void setImposto(float imposto);
    virtual void calcularSalario();

    int getCodSetor(){return codSetor;};
    float getSalarioBase(){return salarioBase;};
    float getImposto(){return imposto;};

protected:

    int codSetor;
    float salarioBase = 5000;
    float imposto = 10;

};

#endif