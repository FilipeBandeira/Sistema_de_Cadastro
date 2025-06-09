#include "Gerente.h"
#include <iostream>
using namespace std;

void Gerente::setBonusMensal(float b) {
    bonusMensal = b;
}

float Gerente::calcularSalarioFinal() {
    return salarioBase + bonusMensal;
}

void Gerente::exibirInformacoes() {
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: Gerente" << endl;
    cout << "Bônus: " << bonusMensal << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl << endl;
}
