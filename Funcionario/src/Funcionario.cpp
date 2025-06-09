#include "Funcionario.h"
#include <iostream>

void Funcionario::setNome(string nome) { this->nome = nome; }
string Funcionario::getNome() const { return nome; }

void Funcionario::setSalarioBase(float salarioBase) { this->salarioBase = salarioBase; }
float Funcionario::getSalarioBase() const { return salarioBase; }

void Funcionario::setId(int id) { this->id = id; }
int Funcionario::getId() const { return id; }

void Funcionario::exibirInformacoes() {
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "Salário base: " << salarioBase << endl;
}
