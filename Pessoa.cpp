#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string endereco, string telefone){
    this -> nome = nome;
    this -> endereco = endereco;
    this -> telefone = telefone;
};

void Pessoa::setNome(string nome){
    this -> nome = nome;
};

void Pessoa::setEndereco(string endereco){
    this -> endereco = endereco;
};
    
void Pessoa::setTelefone(string telefone){
    this -> telefone = telefone;
};

void Pessoa::atualizar(int campoEdit){
    string nome, endereco, telefone;
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

    while (updateOK != true){
        cout << "\nCampo não encontrado, favor tentar novamente: \n\n";
        cout << "\nCampo: \n";
        cout << "   1) Nome\n";
        cout << "   2) Endereço\n";
        cout << "   3) Telefone\n";
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
    }
}