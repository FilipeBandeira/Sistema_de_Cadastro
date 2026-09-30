#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.h"

class Gerente : public Funcionario {
private:
    float bonusMensal = 0.0f;

public:
    void setBonusMensal(float b);
    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};

#endif
