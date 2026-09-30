#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario {
protected:
    string nome;
    float salarioBase = 0.0f;

private:
    int id = 0;

public:
    void setNome(string nome);
    string getNome() const;

    void setSalarioBase(float salarioBase);
    float getSalarioBase() const;

    void setId(int id);
    int getId() const;

    virtual void exibirInformacoes();
    virtual float calcularSalarioFinal() = 0;

    virtual ~Funcionario() {}
};

#endif
