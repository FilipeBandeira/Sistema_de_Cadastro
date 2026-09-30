#include "Desenvolvedor.h"
#include "Estagiario.h"
#include "Gerente.h"
#include <cassert>
#include <climits>
#include <cmath>

int main() {
    Desenvolvedor d;
    Gerente g;
    Estagiario e;
    for (Funcionario* f : {static_cast<Funcionario*>(&d), static_cast<Funcionario*>(&g),
                           static_cast<Funcionario*>(&e)}) {
        assert(f->getId() == 0 && f->getSalarioBase() == 0 && f->calcularSalarioFinal() == 0);
        f->setNome("Exemplo");
        f->setId(1);
        f->setSalarioBase(2000);
    }
    d.setQuantidadeDeProjetos(3);
    g.setBonusMensal(800);
    e.setHorasTrabalhadas(80);
    Funcionario* funcionarios[] = {&d, &g, &e};
    assert(funcionarios[0]->calcularSalarioFinal() == 3500);
    assert(funcionarios[1]->calcularSalarioFinal() == 2800);
    assert(funcionarios[2]->calcularSalarioFinal() == 1000);
    d.setQuantidadeDeProjetos(INT_MAX);
    assert(std::isfinite(d.calcularSalarioFinal()) && d.calcularSalarioFinal() > 0);
}
