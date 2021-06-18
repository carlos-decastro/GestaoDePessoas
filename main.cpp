#include <iostream>
#include "Pessoa.hpp"
#include "Fornecedor.hpp"
#include "Empregado.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"
#include "Manage.hpp"

//ATIVIDADE REALIZADA POR:
//MARIA LUIZA CARVALHO DE OLIVEIRA
//CARLOS RICARDO DE CASTRO JUNIOR

int main() {
//TESTES DE CLASSES - HERANÇA E POLIMORFISMO  
  Fornecedor f1 ("Jr", "Rua A", "99999-9999", 100, 50);
  Fornecedor f2;

  Empregado e1 ("Jr", "Rua AA", "99999-9999", 1);
  Empregado e2;

  Administrador a1 ("Jr", "Rua AAA", "99999-9999", 11);
  Administrador a2;

  Operario o1 ("Jr", "Rua AAAA", "99999-9999", 111, 1500, 10);
  Operario o2;

  Vendedor v1 ("Jr", "Rua AAAAA", "99999-9999", 1111, 10000, 10);
  Vendedor v2;

  cout << "\n==========================\n";
  cout << "Testes Fornecedor x Pessoa\n";
  cout << "==========================\n\n";

  f2.setNome("Maria");
  f2.setEndereco("Rua B");
  f2.setTelefone("3333-3333");
  f2.setValorCredito(500);
  f2.setValorDivida(250);

  cout << "1) Inseridos com Construtor personalizado\n";
  cout << "Nome: " << f1.getNome() << endl;
  cout << "Endereço: " << f1.getEndereco() << endl;
  cout << "Telefone: " << f1.getTelefone() << endl;
  cout << "Valor do Crédito: " << f1.getValorCredito() << endl;
  cout << "Valor da Divida: " << f1.getValorDivida() << endl;
  cout << "Saldo final: ";
  f1.obterSaldo();

  cout << endl << endl;

  cout << "2) Inseridos com metodos modificadores\n";
  cout << "Nome: " << f2.getNome() << endl;
  cout << "Endereço: " << f2.getEndereco() << endl;
  cout << "Telefone: " << f2.getTelefone() << endl;
  cout << "Valor do Crédito: " << f2.getValorCredito() << endl;
  cout << "Valor da Divida: " << f2.getValorDivida() << endl;
  cout << "Saldo final: ";
  f2.obterSaldo();

  cout << "\n\n=========================\n";
  cout << "Testes Empregado x Pessoa\n";
  cout << "=========================\n\n";

  e2.setNome("Maria");
  e2.setEndereco("Rua BB");
  e2.setTelefone("3333-3333");
  e2.setCodSetor(2);

  cout << "1) Inseridos com Construtor personalizado\n";
  cout << "Nome: " << e1.getNome() << endl;
  cout << "Endereço: " << e1.getEndereco() << endl;
  cout << "Telefone: " << e1.getTelefone() << endl;
  cout << "Código do Setor: " << e1.getCodSetor() << endl;
  cout << "Salario Base: " << e1.getSalarioBase() << endl;
  cout << "Imposto: " << e1.getImposto() << "%" <<endl;
  cout << "Salario Liquido: ";
  e1.calcularSalario();

  cout << endl << endl;

  cout << "2) Inseridos com metodos modificadores\n";
  cout << "Nome: " << e2.getNome() << endl;
  cout << "Endereço: " << e2.getEndereco() << endl;
  cout << "Telefone: " << e2.getTelefone() << endl;
  cout << "Código do Setor: " << e2.getCodSetor() << endl;
  cout << "Salario Base: " << e2.getSalarioBase() << endl;
  cout << "Imposto: " << e2.getImposto() << "%" <<endl;;
  cout << "Salario Liquido: ";
  e2.calcularSalario();

  cout << "\n\n================================\n";
  cout << "Testes Administrador x Empregado\n";
  cout << "================================\n\n";

  a2.setNome("Maria");
  a2.setEndereco("Rua BBB");
  a2.setTelefone("3333-3333");
  a2.setCodSetor(22);

  cout << "1) Inseridos com Construtor personalizado\n";
  cout << "Nome: " << a1.getNome() << endl;
  cout << "Endereço: " << a1.getEndereco() << endl;
  cout << "Telefone: " << a1.getTelefone() << endl;
  cout << "Código do Setor: " << a1.getCodSetor() << endl;
  cout << "Salario Base: " << a1.getSalarioBase() << endl;
  cout << "Imposto: " << a1.getImposto() << "%" <<endl;
  cout << "Ajuda de custo: " << a1.getAjudaDeCusto() << endl;
  cout << "Salario Liquido: ";
  a1.calcularSalario();

  cout << endl << endl;

  cout << "2) Inseridos com metodos modificadores\n";
  cout << "Nome: " << a2.getNome() << endl;
  cout << "Endereço: " << a2.getEndereco() << endl;
  cout << "Telefone: " << a2.getTelefone() << endl;
  cout << "Código do Setor: " << a2.getCodSetor() << endl;
  cout << "Salario Base: " << a2.getSalarioBase() << endl;
  cout << "Imposto: " << a2.getImposto() << "%" <<endl;
  cout << "Ajuda de custo: " << a2.getAjudaDeCusto() << endl;
  cout << "Salario Liquido: ";
  a2.calcularSalario();

  cout << "\n\n===========================\n";
  cout << "Testes Operario x Empregado\n";
  cout << "===========================\n\n";

  o2.setNome("Maria");
  o2.setEndereco("Rua BBBB");
  o2.setTelefone("3333-3333");
  o2.setCodSetor(222);
  o2.setValorProducao(1500);
  o2.setComissao(10);

  cout << "1) Inseridos com Construtor personalizado\n";
  cout << "Nome: " << o1.getNome() << endl;
  cout << "Endereço: " << o1.getEndereco() << endl;
  cout << "Telefone: " << o1.getTelefone() << endl;
  cout << "Código do Setor: " << o1.getCodSetor() << endl;
  cout << "Salario Base: " << o1.getSalarioBase() << endl;
  cout << "Imposto: " << o1.getImposto() << "%" <<endl;
  cout << "Valor de produção: " << o1.getValorProducao() << endl;
  cout << "Comissão: " << o1.getComissao() << "%" <<endl;
  cout << "Salario Liquido: ";
  o1.calcularSalario();

  cout << endl << endl;

  cout << "2) Inseridos com metodos modificadores\n";
  cout << "Nome: " << o2.getNome() << endl;
  cout << "Endereço: " << o2.getEndereco() << endl;
  cout << "Telefone: " << o2.getTelefone() << endl;
  cout << "Código do Setor: " << o2.getCodSetor() << endl;
  cout << "Salario Base: " << o2.getSalarioBase() << endl;
  cout << "Imposto: " << o2.getImposto() << "%" <<endl;
  cout << "Valor de produção: " << o2.getValorProducao() << endl;
  cout << "Comissão: " << o2.getComissao() << "%" <<endl;
  cout << "Salario Liquido: ";
  o2.calcularSalario();

  cout << "\n\n===========================\n";
  cout << "Testes Vendedor x Empregado\n";
  cout << "===========================\n\n";

  v2.setNome("Maria");
  v2.setEndereco("Rua BBBBB");
  v2.setTelefone("3333-3333");
  v2.setCodSetor(2222);
  v2.setValorVendas(10000);
  v2.setComissao(10);

  cout << "1) Inseridos com Construtor personalizado\n";
  cout << "Nome: " << v1.getNome() << endl;
  cout << "Endereço: " << v1.getEndereco() << endl;
  cout << "Telefone: " << v1.getTelefone() << endl;
  cout << "Código do Setor: " << v1.getCodSetor() << endl;
  cout << "Salario Base: " << v1.getSalarioBase() << endl;
  cout << "Imposto: " << v1.getImposto() << "%" <<endl;
  cout << "Valor de Vendas: " << v1.getValorVendas() << endl;
  cout << "Comissão: " << v1.getComissao() << "%" <<endl;
  cout << "Salario Liquido: ";
  v1.calcularSalario();

  cout << endl << endl;

  cout << "2) Inseridos com metodos modificadores\n";
  cout << "Nome: " << v2.getNome() << endl;
  cout << "Endereço: " << v2.getEndereco() << endl;
  cout << "Telefone: " << v2.getTelefone() << endl;
  cout << "Código do Setor: " << v2.getCodSetor() << endl;
  cout << "Salario Base: " << v2.getSalarioBase() << endl;
  cout << "Imposto: " << v2.getImposto() << "%" <<endl;
  cout << "Valor de Vendas: " << v2.getValorVendas() << endl;
  cout << "Comissão: " << o1.getComissao() << "%" <<endl;
  cout << "Salario Liquido: ";
  v2.calcularSalario();

//VARIAVEIS
Manage admin;

int menu = -1;

int campoAtualizacao, campoCadastro;

//CASE 1, 3, 5, 7, 9
string nomePessoa, enderecoPessoa, telefonePessoa;
float valorCredito, valorDivida, valorProducao, comissao, valorVendas;
int codSetor;

//CASE 2
string userEdit;
int campoEdit;

//CASE 3
int auxMenu;

//INPUT DB

//admin.adicionarPessoa("Junior", "Rua X", "99999-9999");
//admin.adicionarPessoa("Maria", "Rua Y", "99999-9999");
//admin.adicionarPessoa("Luiza", "Rua Z", "99999-9999");

admin.adicionarFornecedores("Carlos", "Av. Maua, 2265", "32274952", 10000, 300);
admin.adicionarFornecedores("Getulião", "Rua Tenente Alpoin, 562", "3333-3333", 5000, 5000);

admin.adicionarAdministradores("Malu", "Rua XY", "99999-9999", 1);
admin.adicionarAdministradores("João", "Rua ZX", "99999-9999", 2);

admin.adicionarOperarios("Camila", "Rua A", "99999-9999", 1, 5000, 10);
admin.adicionarOperarios("Cassio", "Rua B", "99999-9999", 1, 5000, 10);
admin.adicionarOperarios("Claudia", "Rua C", "99999-9999", 1, 10000, 10);
admin.adicionarOperarios("Rafaeli", "Rua D", "99999-9999", 1, 10000, 10);

admin.adicionarVendedores("Juliano", "Rua E", "99999-9999", 2, 10000, 10);
admin.adicionarVendedores("Cado", "Rua F", "99999-9999", 2, 15000, 10);

    while (menu != 0){

        cout << "\n\n=================\n";
        cout << "GESTÃO DE PESSOAS"; 
        cout << "\n=================\n\n";

        cout <<  "Menu\n";

        cout << "1) Cadastrar\n";
        cout << "2) Atualizar\n";    
        cout << "3) Relatórios\n";
        cout << "0) Encerrar programa\n\n";
        cout << "Escolha uma opção: ";
        cin >> menu;

        switch (menu) {

            case 0:
                cout << "Programa encerrado.";
            break;

            case 1:
                cout << "\nCadastros: \n";
                cout << "   1) Fornecedor\n";
                cout << "   2) Administrador\n";
                cout << "   3) Operario\n";
                cout << "   4) Vendedor\n";
                cout << "\nEscolha o número de um dos campos para cadastro: ";
                cin >> campoCadastro; 

                if (campoCadastro == 1){
                    cout << "\nIncluir Fornecedor: \n\n";
                    cout << "Nome: ";
                    cin >> nomePessoa;
                    cout << "Endereço: ";
                    cin >> enderecoPessoa;
                    cout << "Telefone: ";
                    cin >> telefonePessoa;
                    cout << "Valor de Crédito: ";
                    cin >> valorCredito;
                    cout << "Valor de Dívida: ";
                    cin >> valorDivida;
                    admin.adicionarFornecedores(nomePessoa, enderecoPessoa, telefonePessoa, valorCredito, valorDivida);

                    cout << "\nCadastro realizado com sucesso!";
                    break;   
                }

                if (campoCadastro == 2){
                    cout << "\nIncluir Administrador: \n\n";
                    cout << "Nome: ";
                    cin >> nomePessoa;
                    cout << "Endereço: ";
                    cin >> enderecoPessoa;
                    cout << "Telefone: ";
                    cin >> telefonePessoa;
                    cout << "Cod. do Setor: ";
                    cin >> codSetor;

                    admin.adicionarAdministradores(nomePessoa, enderecoPessoa, telefonePessoa, codSetor);

                    cout << "\nCadastro realizado com sucesso!";
                    break;   
                }

                if (campoCadastro == 3){
                    cout << "\nIncluir Operario: \n\n";
                    cout << "Nome: ";
                    cin >> nomePessoa;
                    cout << "Endereço: ";
                    cin >> enderecoPessoa;
                    cout << "Telefone: ";
                    cin >> telefonePessoa;
                    cout << "Cod. de Setor: ";
                    cin >> codSetor;
                    cout << "Valor de Produção: ";
                    cin >> valorProducao;
                    cout << "Comissão: ";
                    cin >> comissao;
                    admin.adicionarOperarios(nomePessoa, enderecoPessoa, telefonePessoa, codSetor, valorProducao, comissao);

                    cout << "\nCadastro realizado com sucesso!";
                    break;   
                } 

                if (campoCadastro == 4){
                    cout << "\nIncluir Vendedor: \n\n";
                    cout << "Nome: ";
                    cin >> nomePessoa;
                    cout << "Endereço: ";
                    cin >> enderecoPessoa;
                    cout << "Telefone: ";
                    cin >> telefonePessoa;
                    cout << "Cod. de Setor: ";
                    cin >> codSetor;
                    cout << "Valor de Vendas: ";
                    cin >> valorVendas;
                    cout << "Comissão: ";
                    cin >> comissao;
                    admin.adicionarOperarios(nomePessoa, enderecoPessoa, telefonePessoa, codSetor, valorVendas, comissao);

                    cout << "\nCadastro realizado com sucesso!";
                    break;   
                }                                               
            break;

            case 2:
                cout << "\n\nAtualizar dados cadastrais: \n\n";
                cout << "   1) Fornecedor\n";
                cout << "   2) Administrador\n";
                cout << "   3) Operario\n";
                cout << "   4) Vendedor\n";
                cout << "Escolha o número de um dos campos para cadastro: ";
                cin >> campoAtualizacao; 

                if (campoAtualizacao == 1){  
                    admin.listarFornecedores();
            
                    cout << "\n\nAtualizar Fornecedor: \n\n";
                    cout << "Nome do fornecedor que gostaria de atualizar: ";
                    cin >> userEdit;
                    cout << "\nCampo: \n";
                    cout << "   1) Nome\n";
                    cout << "   2) Endereço\n";
                    cout << "   3) Telefone\n";
                    cout << "   4) Valor de Crédito\n";
                    cout << "   5) Valor de Divida\n";
                    cout << "Escolha o número de um dos campos para edição: ";
                    cin >> campoEdit; 
                    admin.atualizarFornecedor(userEdit, campoEdit);
                    break;
                }  

                if (campoAtualizacao == 2){  
                    admin.listarAdministradores();
            
                    cout << "\n\nAtualizar Administradores: \n\n";
                    cout << "Nome do administrador que gostaria de atualizar: ";
                    cin >> userEdit;
                    cout << "\nCampo: \n";
                    cout << "   1) Nome\n";
                    cout << "   2) Endereço\n";
                    cout << "   3) Telefone\n";
                    cout << "   4) Cod. do Setor\n";
                    cout << "   5) Salário Base\n";
                    cout << "   6) Imposto\n";
                    cout << "   7) Ajuda de Custo\n";
                    cout << "Escolha o número de um dos campos para edição: ";
                    cin >> campoEdit; 
                    admin.atualizarFornecedor(userEdit, campoEdit);
                    break;
                }   

                if (campoAtualizacao == 3){  
                    admin.listarOperarios();
            
                    cout << "\n\nAtualizar Operarios: \n\n";
                    cout << "Nome do operario que gostaria de atualizar: ";
                    cin >> userEdit;
                    cout << "\nCampo: \n";
                    cout << "   1) Nome\n";
                    cout << "   2) Endereço\n";
                    cout << "   3) Telefone\n";
                    cout << "   4) Cod. do Setor\n";
                    cout << "   5) Salário Base\n";
                    cout << "   6) Imposto\n";
                    cout << "   7) Valor de Produção\n";
                    cout << "   8) Comissão\n";
                    cout << "Escolha o número de um dos campos para edição: ";
                    cin >> campoEdit; 
                    admin.atualizarFornecedor(userEdit, campoEdit);
                    break;
                } 

                if (campoAtualizacao == 4){  
                    admin.listarVendedores();
            
                    cout << "\n\nAtualizar Vendedores: \n\n";
                    cout << "Nome do vendedor que gostaria de atualizar: ";
                    cin >> userEdit;
                    cout << "\nCampo: \n";
                    cout << "   1) Nome\n";
                    cout << "   2) Endereço\n";
                    cout << "   3) Telefone\n";
                    cout << "   4) Cod. do Setor\n";
                    cout << "   5) Salário Base\n";
                    cout << "   6) Imposto\n";
                    cout << "   7) Valor de Vendas\n";
                    cout << "   8) Comissão\n";
                    cout << "Escolha o número de um dos campos para edição: ";
                    cin >> campoEdit; 
                    admin.atualizarFornecedor(userEdit, campoEdit);
                    break;
                }
            break;                                                 

            case 3: 
                cout << "\n\nRelatórios: \n\n";
                cout << "1) Listar Pessoas\n";
                cout << "2) Listar Fornecedores\n";
                cout << "3) Listar Empregados\n";
                cout << "Escolha uma opção: ";
                cin >> auxMenu;

                if (auxMenu == 1){
                    admin.listarPessoas();
                }

                if (auxMenu == 2) {
                    admin.listarFornecedores();
                }

                if (auxMenu == 3){
                    cout << "\n   1) Listar todos os Empregados\n";
                    cout << "   2) Listar Administradores\n";
                    cout << "   3) Listar Operarios\n";
                    cout << "   4) Listar Vendedores\n";
                    cout << "\nEscolha uma opção: ";
                    cin >> auxMenu;

                    cout << endl;

                    if (auxMenu == 1){
                        admin.listarEmpregados();
                    }

                    if (auxMenu == 2){
                        admin.listarAdministradores();
                    }

                    if (auxMenu == 3){
                        admin.listarOperarios();
                    }

                    if (auxMenu == 4){
                        admin.listarVendedores();
                    }
                    auxMenu = 0;
                }
            break;
        }
    }
}