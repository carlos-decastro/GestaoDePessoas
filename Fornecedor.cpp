#include "Fornecedor.hpp"

Fornecedor::Fornecedor (string nome, string endereco, string telefone, float valorCredito, float valorDivida){

    this -> nome = nome;
    this -> endereco = endereco;
    this -> telefone = telefone;
    this -> valorCredito = valorCredito;
    this -> valorDivida = valorDivida;
    
};

void Fornecedor::setValorCredito(float valorCredito){
    this -> valorCredito = valorCredito;
};

void Fornecedor::setValorDivida(float valorDivida){
    this -> valorDivida = valorDivida;
};

void Fornecedor::obterSaldo(){
    cout << valorCredito - valorDivida;
};

void Fornecedor::atualizar(int campoEdit){
    string nome, endereco, telefone;
    float valorDivida, valorCredito;
    bool updateOK = false;

    if (campoEdit == 1){
        cout << "Nome: ";
        cin >> nome;
        setNome(nome);
        cout << "\nAlteração realizada com sucesso!";
        updateOK = true;
    }

    if (campoEdit == 2){
        cout << "Endereço: ";
        cin >> endereco;
        setEndereco(endereco);
        cout << "\nAlteração realizada com sucesso!";
        updateOK = true;
    }

    if (campoEdit == 3){
        cout << "Telefone: ";
        cin >> telefone;
        setTelefone(telefone);
        cout << "\nAlteração realizada com sucesso!";
        updateOK = true;
    }

    if (campoEdit == 4){
        cout << "Valor Crédito: ";
        cin >> valorCredito;
        setValorCredito(valorCredito);
        cout << "\nAlteração realizada com sucesso!";
        updateOK = true;
    }

    if (campoEdit == 5){
        cout << "Valor Dívida: ";
        cin >> valorDivida;
        setValorDivida(valorDivida);
        cout << "\nAlteração realizada com sucesso!";
        updateOK = true;
    }

    while (updateOK != true){
        cout << "\nCampo não encontrado, favor tentar novamente: \n\n";
        cout << "\nCampo: \n";
            cout << "   1) Nome\n";
            cout << "   2) Endereço\n";
            cout << "   3) Telefone\n";
            cout << "   4) Valor de Crédito\n";
            cout << "   5) Valor de Divida\n";;
        cout << "Escolha o número de um dos campos para edição: ";
        cin >> campoEdit; 

        if (campoEdit == 1){
            cout << "Nome: ";
            cin >> nome;
            setNome(nome);
            cout << "\nAlteração realizada com sucesso!";
            updateOK = true;
        }

        if (campoEdit == 2){
            cout << "Endereço: ";
            cin >> endereco;
            setEndereco(endereco);
            cout << "\nAlteração realizada com sucesso!";
            updateOK = true;
        }

        if (campoEdit == 3){
            cout << "Telefone: ";
            cin >> telefone;
            setTelefone(telefone);
            cout << "\nAlteração realizada com sucesso!";
            updateOK = true;
        }

        if (campoEdit == 4){
            cout << "Valor Crédito: ";
            cin >> valorCredito;
            setValorCredito(valorCredito);
            cout << "\nAlteração realizada com sucesso!";
            updateOK = true;
        }

        if (campoEdit == 5){
            cout << "Valor Dívida: ";
            cin >> valorDivida;
            setValorDivida(valorDivida);
            cout << "\nAlteração realizada com sucesso!";
            updateOK = true;
        }
    }
}