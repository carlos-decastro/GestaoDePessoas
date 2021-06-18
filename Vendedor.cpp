#include "Vendedor.hpp"

Vendedor::Vendedor (string nome, string endereco, string telefone, int codSetor, float valorVendas, float comissao){

    this -> nome = nome;
    this -> endereco = endereco;
    this -> telefone = telefone;
    this -> codSetor = codSetor;
    this -> valorVendas = valorVendas;
    this -> comissao = comissao;
        
};

void Vendedor::setValorVendas(float valorVendas){
    this -> valorVendas = valorVendas;
};

void Vendedor::setComissao(float comissao){
    this -> comissao = comissao;
};

void Vendedor::calcularSalario(){
    float salarioLiquido;
    float comissaoFinal;

    salarioLiquido = salarioBase - (salarioBase*(imposto/100));
    comissaoFinal = valorVendas*(comissao/100);

    salarioLiquido += comissaoFinal;
    cout << salarioLiquido;
};

void Vendedor::atualizar(int campoEdit){
    string nome, endereco, telefone;
    float valorVenda, comissao, salario;
    int codSetor;
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
        cout << "Cod. do Setor: ";
        cin >> codSetor;
        setCodSetor(codSetor);
        cout << "\nAlteração realizada com sucesso!";
        updateOK = true;
    }

    if (campoEdit == 5){
        cout << "Salário Base: ";
        cin >> salario;
        setSalarioBase(salario);
        cout << "\nAlteração realizada com sucesso!";
        updateOK = true;
    }

    if (campoEdit == 6){
        cout << "Imposto: ";
        cin >> imposto;
        setImposto(imposto);
        cout << "\nAlteração realizada com sucesso!";
        updateOK = true;
    }

    if (campoEdit == 7){
        cout << "Valor de Vendas: ";
        cin >> valorVendas;
        setValorVendas(valorVendas);
        cout << "\nAlteração realizada com sucesso!";
        updateOK = true;
    }

    if (campoEdit == 8){
        cout << "Comissão: ";
        cin >> comissao;
        setComissao(comissao);
        cout << "\nAlteração realizada com sucesso!";
        updateOK = true;
    }

    while (updateOK != true){
        cout << "\nCampo não encontrado, favor tentar novamente: \n\n";
        cout << "\nCampo: \n";
            cout << "   1) Nome\n";
                cout << "   1) Nome\n";
                cout << "   2) Endereço\n";
                cout << "   3) Telefone\n";
                cout << "   4) Cod. do Setor\n";
                cout << "   5) Salário Base\n";
                cout << "   6) Imposto\n";
                cout << "   7) Valor de Vendas\n";
                cout << "   8) Comissão\n";
        cout << "\nEscolha o número de um dos campos para edição: ";
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
            cout << "Cod. do Setor: ";
            cin >> codSetor;
            setCodSetor(codSetor);
            cout << "\nAlteração realizada com sucesso!";
            updateOK = true;
        }

        if (campoEdit == 5){
            cout << "Salário Base: ";
            cin >> salario;
            setSalarioBase(salario);
            cout << "\nAlteração realizada com sucesso!";
            updateOK = true;
        }

        if (campoEdit == 6){
            cout << "Imposto: ";
            cin >> imposto;
            setImposto(imposto);
            cout << "\nAlteração realizada com sucesso!";
            updateOK = true;
        }

        if (campoEdit == 7){
            cout << "Valor de Vendas: ";
            cin >> valorVendas;
            setValorVendas(valorVendas);
            cout << "\nAlteração realizada com sucesso!";
            updateOK = true;
        }

        if (campoEdit == 8){
            cout << "Comissão: ";
            cin >> comissao;
            setComissao(comissao);
            cout << "\nAlteração realizada com sucesso!";
            updateOK = true;
        }
    }
}
