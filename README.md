# Cadastro de funcionários

Aplicação de terminal em **C++11**, criada para Linguagem de Programação I. Demonstra uma classe abstrata de funcionário e especializações com regras próprias de remuneração.

## Modelagem

| Classe | Regra do salário final |
| --- | --- |
| `Desenvolvedor` | Salário base + R$ 500 por projeto |
| `Gerente` | Salário base + bônus mensal |
| `Estagiario` | Salário base × horas trabalhadas ÷ 160 |

As regras são didáticas e não representam cálculo de folha de pagamento trabalhista.

## Como executar

Requisitos: compilador C++11 e GNU Make.

```sh
git clone https://github.com/FilipeBandeira/Sistema_de_Cadastro.git
cd Sistema_de_Cadastro/Funcionario
make
./sistema_funcionarios
make test
```

O fluxo solicita **seis cadastros**. Para cada um, informe tipo (`1`, `2` ou `3`), ID, nome, salário base e o dado específico do cargo. O relatório usa métodos virtuais para apresentar a remuneração de cada objeto. Use ponto como separador decimal.

## Estrutura

- `Funcionario/include/`: interfaces e classes de domínio.
- `Funcionario/src/`: regras salariais e entrada do programa.
- `Funcionario/tests/`: regressões de inicialização e cálculos.
- `Funcionario/Makefile`: compilação e testes.

## Qualidade e limites

Os atributos numéricos começam em zero e o programa verifica falhas de leitura e valores negativos antes de cadastrar. `make test` verifica inicialização, cálculos por cargo e uso polimórfico; o GitHub Actions executa essas verificações.

Os dados ficam em memória. Não há edição, exclusão, busca, validação de IDs únicos ou banco de dados. Melhorias futuras: cadastro com quantidade variável, operações de manutenção e persistência.

## Autor e licença

[Filipe Bandeira](https://github.com/FilipeBandeira). Consulte o arquivo [LICENSE](LICENSE) para os termos do repositório. Materiais e marcas de terceiros mantêm seus respectivos direitos.
