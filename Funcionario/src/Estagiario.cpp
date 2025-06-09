#include "Estagiario.h"
#include <iostream>
using namespace std;

void Estagiario::setHorasTrabalhadas(int h) {
    horasTrabalhadas = h;
}

float Estagiario::calcularSalarioFinal() {
    return salarioBase * (horasTrabalhadas / 160.0f);
}

void Estagiario::exibirInformacoes() {
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: Estagiário" << endl;
    cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl << endl;
}
