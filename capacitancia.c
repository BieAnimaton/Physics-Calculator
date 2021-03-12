#include <stdio.h>
#include <math.h>

int capacitancia() {

    int escolha_var;
    float capacitancia, carga, tensao;

    printf("\nFórmula: C = Q/V e variações.\n\n");

    printf("De qual Variável (letra) deseja obter o Valor\n\n");

    perguntas('1', "Capacitância\n");
    perguntas('2', "Carga Elétrica\n");
    perguntas('3', "Tensão Elétrica\n\n");

    printf("Opção da Variável: ");
    scanf("%d", &escolha_var);

        if (escolha_var == 1) {

                printf("Digite o valor da Carga: ");
                scanf("%f", &carga);

                printf("Digite o valor da Tensão: ");
                scanf("%f", &tensao);

                capacitancia = carga / tensao;

                printf("\nO valor da Capacitância é de %.2f Farads\n\n", capacitancia);
                terminarProgramaELimparTela();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Capacitância: ");
                scanf("%f", &capacitancia);

                printf("Digite o valor da Tensão: ");
                scanf("%f", &tensao);

                carga = capacitancia / tensao;

                printf("\nO valor da Carga Elétrica é de %.2f Coulombs\n\n", carga);
                terminarProgramaELimparTela();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Capacitância: ");
                scanf("%f", &capacitancia);

                printf("Digite o valor da Carga: ");
                scanf("%f", &carga);

                tensao = capacitancia * carga;

                printf("\nO valor da Tensão Elétrica é de %.2f Volts\n\n", tensao);
                terminarProgramaELimparTela();

            } else {

                printf("Variável não existente!\n\n");
                limparTelaEVoltarAoInicio();

            }

}
