#include <stdio.h>
#include <math.h>

int capacitancia() {

    int escolha_var;
    float capacitancia, carga, tensao;

    printf("\nF�rmula: C = Q/V e varia��es.\n\n");

    printf("De qual Vari�vel (letra) deseja obter o Valor\n\n");

    perguntas('1', "Capacit�ncia\n");
    perguntas('2', "Carga El�trica\n");
    perguntas('3', "Tens�o El�trica\n\n");

    printf("Op��o da Vari�vel: ");
    scanf("%d", &escolha_var);

        if (escolha_var == 1) {

                printf("Digite o valor da Carga: ");
                scanf("%f", &carga);

                printf("Digite o valor da Tens�o: ");
                scanf("%f", &tensao);

                capacitancia = carga / tensao;

                printf("\nO valor da Capacit�ncia � de %.2f Farads\n\n", capacitancia);
                terminarProgramaELimparTela();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Capacit�ncia: ");
                scanf("%f", &capacitancia);

                printf("Digite o valor da Tens�o: ");
                scanf("%f", &tensao);

                carga = capacitancia / tensao;

                printf("\nO valor da Carga El�trica � de %.2f Coulombs\n\n", carga);
                terminarProgramaELimparTela();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Capacit�ncia: ");
                scanf("%f", &capacitancia);

                printf("Digite o valor da Carga: ");
                scanf("%f", &carga);

                tensao = capacitancia * carga;

                printf("\nO valor da Tens�o El�trica � de %.2f Volts\n\n", tensao);
                terminarProgramaELimparTela();

            } else {

                printf("Vari�vel n�o existente!\n\n");
                limparTelaEVoltarAoInicio();

            }

}
