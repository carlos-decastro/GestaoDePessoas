#include "Empregado.hpp"

Empregado::Empregado (string nome, string endereco, string telefone, int codSetor){

    this -> nome = nome;
    this -> endereco = endereco;
    this -> telefone = telefone;
    this -> codSetor = codSetor;
        
};

void Empregado::setCodSetor(int codSetor){
    this -> codSetor = codSetor;
};

void Empregado::setSalarioBase(float salarioBase){
    this -> salarioBase = salarioBase;
};

void Empregado::setImposto(float imposto){
    this -> imposto = imposto;
};

void Empregado::calcularSalario(){
    cout << salarioBase - (salarioBase*(imposto/100));
};