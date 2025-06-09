#include <iostream>
#include <vector>
#include "Desenvolvedor.h"
#include "Gerente.h"
#include "Estagiario.h"
using namespace std;

int main() {
    vector<Funcionario*> funcionarios;
    int opcao, id;
    string nome;
    float salarioBase;

    for (int i = 0; i < 6; ++i) {
        cout << "\nCadastro do funcionário #" << i + 1 << endl;
        cout << "Escolha o tipo (1 - Desenvolvedor, 2 - Gerente, 3 - Estagiário): ";
        cin >> opcao;

        cout << "ID: ";
        cin >> id;
        cin.ignore();
        cout << "Nome: ";
        getline(cin, nome);
        cout << "Salário base: ";
        cin >> salarioBase;

        Funcionario* f = nullptr;

        if (opcao == 1) {
            int projetos;
            cout << "Quantidade de projetos: ";
            cin >> projetos;

            auto* d = new Desenvolvedor();
            d->setId(id);
            d->setNome(nome);
            d->setSalarioBase(salarioBase);
            d->setQuantidadeDeProjetos(projetos);
            f = d;
        } else if (opcao == 2) {
            float bonus;
            cout << "Bônus mensal: ";
            cin >> bonus;

            auto* g = new Gerente();
            g->setId(id);
            g->setNome(nome);
            g->setSalarioBase(salarioBase);
            g->setBonusMensal(bonus);
            f = g;
        } else if (opcao == 3) {
            int horas;
            cout << "Horas trabalhadas: ";
            cin >> horas;

            auto* e = new Estagiario();
            e->setId(id);
            e->setNome(nome);
            e->setSalarioBase(salarioBase);
            e->setHorasTrabalhadas(horas);
            f = e;
        }

        if (f != nullptr) {
            funcionarios.push_back(f);
        }
    }

    cout << "\n===== RELATÓRIO DE FUNCIONÁRIOS =====\n";
    for (Funcionario* f : funcionarios) {
        f->exibirInformacoes();
    }

    for (Funcionario* f : funcionarios) {
        delete f;
    }

    return 0;
}
