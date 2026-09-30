#include <iostream>
#include <vector>
#include <memory>
#include <limits>
#include <cmath>
#include "Desenvolvedor.h"
#include "Gerente.h"
#include "Estagiario.h"
using namespace std;

int entradaInvalida() {
    cerr << "Entrada inválida: confira o tipo e os valores do cadastro.\n";
    return 1;
}

int main() {
    vector<unique_ptr<Funcionario>> funcionarios;
    for (int i = 0; i < 6; ++i) {
        int opcao, id;
        string nome;
        float salarioBase;
        cout << "\nCadastro do funcionário #" << i + 1 << endl;
        cout << "Escolha o tipo (1 - Desenvolvedor, 2 - Gerente, 3 - Estagiário): ";
        if (!(cin >> opcao) || opcao < 1 || opcao > 3) return entradaInvalida();
        cout << "ID: ";
        if (!(cin >> id) || id < 1) return entradaInvalida();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Nome: ";
        if (!getline(cin, nome) || nome.find_first_not_of(" \t\r") == string::npos) {
            return entradaInvalida();
        }
        cout << "Salário base: ";
        if (!(cin >> salarioBase) || !isfinite(salarioBase) || salarioBase < 0) {
            return entradaInvalida();
        }

        unique_ptr<Funcionario> f;
        if (opcao == 1) {
            int projetos;
            cout << "Quantidade de projetos: ";
            if (!(cin >> projetos) || projetos < 0) return entradaInvalida();
            auto* d = new Desenvolvedor();
            f.reset(d);
            d->setQuantidadeDeProjetos(projetos);
        } else if (opcao == 2) {
            float bonus;
            cout << "Bônus mensal: ";
            if (!(cin >> bonus) || !isfinite(bonus) || bonus < 0) return entradaInvalida();
            auto* g = new Gerente();
            f.reset(g);
            g->setBonusMensal(bonus);
        } else {
            int horas;
            cout << "Horas trabalhadas: ";
            if (!(cin >> horas) || horas < 0) return entradaInvalida();
            auto* e = new Estagiario();
            f.reset(e);
            e->setHorasTrabalhadas(horas);
        }
        f->setId(id);
        f->setNome(nome);
        f->setSalarioBase(salarioBase);
        if (!isfinite(f->calcularSalarioFinal())) return entradaInvalida();
        funcionarios.push_back(std::move(f));
    }

    cout << "\n===== RELATÓRIO DE FUNCIONÁRIOS =====\n";
    for (const auto& f : funcionarios) f->exibirInformacoes();
    return 0;
}
