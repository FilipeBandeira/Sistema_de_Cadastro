#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H

#include "Funcionario.h"

class Desenvolvedor : public Funcionario {
private:
    int quantidadeDeProjetos = 0;

public:
    void setQuantidadeDeProjetos(int q);
    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};

#endif
