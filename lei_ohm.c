#include <stdio.h>
#include <math.h>

int leiOhm() {

    int escolha_var;
    float tensao, resistencia, corrente;

    printf("\nFórmula: U = R.I e variações.\n\n");

    printf("De qual Variável (letra) deseja obter o Valor\n\n");

    perguntas('1', "Tensão Elétrica\n");
    perguntas('2', "Resistência Elétrica\n");
    perguntas('3', "Corrente Elétrica\n\n");

    printf("Opção da Variável: ");
    scanf("%d", &escolha_var);

        if (escolha_var == 1) {

                printf("Digite o valor da Resistência: ");
                scanf("%f", &resistencia);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                tensao = resistencia*corrente;

                printf("\nO valor da Tensão Elétrica é de %.2f Volts\n\n", tensao);
                terminarProgramaELimparTela();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Tensão: ");
                scanf("%f", &tensao);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                resistencia = tensao / corrente;

                printf("\nO valor da Resistência Elétrica é de %.2f Ohms\n\n", resistencia);
                terminarProgramaELimparTela();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Tensão: ");
                scanf("%f", &tensao);

                printf("Digite o valor da Resistência: ");
                scanf("%f", &resistencia);

                corrente = tensao / resistencia;

                printf("\nO valor da Corrente Elétrica é de %.2f Ampères\n\n", corrente);
                terminarProgramaELimparTela();

            } else {

                printf("Variável não existente!\n\n");
                limparTelaEVoltarAoInicio();

            }

    return 0;
}
