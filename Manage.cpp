#include "Manage.hpp"

void Manage::adicionarFornecedores(string nome, string endereco, string telefone, float valorCredito, float valorDivida){
    fornecedores.push_back(Fornecedor(nome, endereco, telefone, valorCredito, valorDivida));
};

void Manage::adicionarAdministradores(string nome, string endereco, string telefone, int codSetor){
    administradores.push_back(Administrador(nome, endereco, telefone, codSetor));
};

void Manage::adicionarOperarios(string nome, string endereco, string telefone, int codSetor, float valorProducao, float comissao){
    operarios.push_back(Operario(nome, endereco, telefone, codSetor, valorProducao, comissao));
};

void Manage::adicionarVendedores(string nome, string endereco, string telefone, int codSetor, float valorVendas, float comissao){
    vendedores.push_back(Vendedor(nome, endereco, telefone, codSetor, valorVendas, comissao));
};

void Manage::listarPessoas(){
    cout << endl;
    
    for (int i = 0; i < fornecedores.size(); i++){
        cout << "Nome: " << fornecedores[i].getNome() << endl;
        cout << "Endereço: " << fornecedores[i].getEndereco() << endl;
        cout << "Telefone: " << fornecedores[i].getTelefone() << endl << endl;
    }

    for (int i = 0; i < administradores.size(); i++){
       cout << "Nome: " << administradores[i].getNome() << endl;
        cout << "Endereço: " << administradores[i].getEndereco() << endl;
        cout << "Telefone: " << administradores[i].getTelefone() << endl << endl;
    }

    for (int i = 0; i < operarios.size(); i++){
        cout << "Nome: " << operarios[i].getNome() << endl;
        cout << "Endereço: " << operarios[i].getEndereco() << endl;
        cout << "Telefone: " << operarios[i].getTelefone() << endl << endl;
    }

    for (int i = 0; i < vendedores.size(); i++){
        cout << "Nome: " << vendedores[i].getNome() << endl;
        cout << "Endereço: " << vendedores[i].getEndereco() << endl;
        cout << "Telefone: " << vendedores[i].getTelefone() << endl << endl;
    }
}

void Manage::listarFornecedores(){
    cout << endl;
    for (int i = 0; i < fornecedores.size(); i++){
        cout << "Nome: " << fornecedores[i].getNome() << endl;
        cout << "Endereço: " << fornecedores[i].getEndereco() << endl;
        cout << "Telefone: " << fornecedores[i].getTelefone() << endl;
        cout << "Valor de Crédito: " << fornecedores[i].getValorCredito() << endl;
        cout << "Valor de Dívida: " << fornecedores[i].getValorDivida() << endl;
        cout << "Saldo final: ";
        fornecedores[i].obterSaldo();
        cout << " R$" << endl << endl;
    }
};

void Manage::listarEmpregados(){
    cout << endl;
    for (int i = 0; i < administradores.size(); i++){
        cout << "Nome: " << administradores[i].getNome() << endl;
        cout << "Cargo: Administrador" << endl;
        cout << "Salário Líquido: ";
        administradores[i].calcularSalario();
        cout << " R$" << endl << endl;
    }

    for (int i = 0; i < operarios.size(); i++){
        cout << "Nome: " << operarios[i].getNome() << endl;
        cout << "Cargo: Operario" << endl;
        cout << "Salário Líquido: ";
        operarios[i].calcularSalario();
        cout << " R$" << endl << endl;
    }

    for (int i = 0; i < vendedores.size(); i++){
        cout << "Nome: " << vendedores[i].getNome() << endl;
        cout << "Cargo: Vendedor" << endl;
        cout << "Salário Líquido: " << " R$";
        vendedores[i].calcularSalario();
        cout << endl << endl;
    }
};

void Manage::listarAdministradores(){
    cout << endl;
    for (int i = 0; i < administradores.size(); i++){
        cout << "Nome: " << administradores[i].getNome() << endl;
        cout << "Ajuda de Custo: " << administradores[i].getAjudaDeCusto() << " R$" << endl << endl;
    }
};

void Manage::listarOperarios(){
    cout << endl;
    for (int i = 0; i < operarios.size(); i++){
        cout << "Nome: " << operarios[i].getNome() << endl;
        cout << "Valor de Produção: " << " R$" << operarios[i].getValorProducao() << endl;
        cout << "Comissão: " << operarios[i].getComissao() << "%" << endl << endl;
    }
};

void Manage::listarVendedores(){
    cout << endl;
        for (int i = 0; i < vendedores.size(); i++){
        cout << "Nome: " << vendedores[i].getNome() << endl;
        cout << "Valor de Vendas: " << " R$" << vendedores[i].getValorVendas() << endl;
        cout << "Comissão: " << vendedores[i].getComissao() << "%" << endl << endl;
    }
};


void Manage::atualizarFornecedor(string userEdit, int campoEdit){
    bool userName = false; 

    for (int i = 0; i < fornecedores.size(); i++){
        if (fornecedores[i].getNome() == userEdit){
            fornecedores[i].atualizar(campoEdit);
            userName = true;
        }
    }
        
    while (userName != true){
        cout << "\nNome não encontrado, favor tentar novamente: \n\n";
        cout << "Nome: ";
        cin >> userEdit;

        for (int i = 0; i < fornecedores.size(); i++){
            if (fornecedores[i].getNome() == userEdit){
                fornecedores[i].atualizar(campoEdit);
                userName = true;
            }
        }
    }
}

void Manage::atualizarAdministrador(string userEdit, int campoEdit){
    bool userName = false; 

    for (int i = 0; i < administradores.size(); i++){
        if (administradores[i].getNome() == userEdit){
            administradores[i].atualizar(campoEdit);
            userName = true;
        }
    }
        
    while (userName != true){
        cout << "\nNome não encontrado, favor tentar novamente: \n\n";
        cout << "Nome: ";
        cin >> userEdit;

        for (int i = 0; i < administradores.size(); i++){
            if (administradores[i].getNome() == userEdit){
                administradores[i].atualizar(campoEdit);
                userName = true;
            }
        }
    }
}

void Manage::atualizarOperario(string userEdit, int campoEdit){
    bool userName = false; 

    for (int i = 0; i < operarios.size(); i++){
        if (operarios[i].getNome() == userEdit){
            operarios[i].atualizar(campoEdit);
            userName = true;
        }
    }
        
    while (userName != true){
        cout << "\nNome não encontrado, favor tentar novamente: \n\n";
        cout << "Nome: ";
        cin >> userEdit;

        for (int i = 0; i < operarios.size(); i++){
            if (operarios[i].getNome() == userEdit){
                operarios[i].atualizar(campoEdit);
                userName = true;
            }
        }
    }
}

void Manage::atualizarVendedor(string userEdit, int campoEdit){
    bool userName = false; 

    for (int i = 0; i < vendedores.size(); i++){
        if (vendedores[i].getNome() == userEdit){
            vendedores[i].atualizar(campoEdit);
            userName = true;
        }
    }
        
    while (userName != true){
        cout << "\nNome não encontrado, favor tentar novamente: \n\n";
        cout << "Nome: ";
        cin >> userEdit;

        for (int i = 0; i < vendedores.size(); i++){
            if (vendedores[i].getNome() == userEdit){
                vendedores[i].atualizar(campoEdit);
                userName = true;
            }
        }
    }
}
