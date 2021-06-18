#ifndef Administrador_hpp
#define Administrador_hpp

#include <iostream>
#include "Empregado.hpp"
using namespace std;

class Administrador : public Empregado {

public:

    Administrador(){};
    Administrador (string nome, string endereco, string telefone, int codSetor);

    void setAjudaDeCusto(float ajudaDeCusto);
    void calcularSalario();
    void atualizar(int campoEdit);

    float getAjudaDeCusto(){return ajudaDeCusto;};

private:

    float ajudaDeCusto = 1500;

};

#endif