#include "Desenvolvedor.h"
#include <iostream>
using namespace std;

void Desenvolvedor::setQuantidadeDeProjetos(int q) {
    quantidadeDeProjetos = q;
}

float Desenvolvedor::calcularSalarioFinal() {
    return salarioBase + (500 * quantidadeDeProjetos);
}

void Desenvolvedor::exibirInformacoes() {
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: Desenvolvedor" << endl;
    cout << "Projetos: " << quantidadeDeProjetos << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl << endl;
}
