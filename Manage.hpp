#ifndef Manage_hpp
#define Manage_hpp

#include <iostream>
#include <vector>

#include "Pessoa.hpp"
#include "Fornecedor.hpp"
#include "Empregado.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"

using namespace std;

class Manage {

public:

    Manage(){};

    void atualizarFornecedor(string userEdit, int campoEdit);
    void atualizarAdministrador(string userEdit, int campoEdit);
    void atualizarOperario(string userEdit, int campoEdit);
    void atualizarVendedor(string userEdit, int campoEdit);

    void adicionarFornecedores(string nome, string endereco, string telefone, float valorCredito, float valorDivida);
    void adicionarAdministradores(string nome, string endereco, string telefone, int codSetor);
    void adicionarOperarios(string nome, string endereco, string telefone, int codSetor, float valorProducao, float comissao);
    void adicionarVendedores(string nome, string endereco, string telefone, int codSetor, float valorVendas, float comissao);

    void listarEmpregados();
    void listarPessoas();
    void listarFornecedores();
    void listarAdministradores();
    void listarOperarios();
    void listarVendedores();

private:

    vector<Fornecedor> fornecedores;
    vector<Administrador> administradores;
    vector<Operario> operarios;
    vector<Vendedor> vendedores;

};

#endif