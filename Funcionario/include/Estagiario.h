#ifndef ESTAGIARIO_H
#define ESTAGIARIO_H

#include "Funcionario.h"

class Estagiario : public Funcionario {
private:
    int horasTrabalhadas = 0;

public:
    void setHorasTrabalhadas(int h);
    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};

#endif
