#include <stdio.h>
#include <math.h>

int leiOhm() {

    int escolha_var;
    float tensao, resistencia, corrente;

    printf("\nF�rmula: U = R.I e varia��es.\n\n");

    printf("De qual Vari�vel (letra) deseja obter o Valor\n\n");

    perguntas('1', "Tens�o El�trica\n");
    perguntas('2', "Resist�ncia El�trica\n");
    perguntas('3', "Corrente El�trica\n\n");

    printf("Op��o da Vari�vel: ");
    scanf("%d", &escolha_var);

        if (escolha_var == 1) {

                printf("Digite o valor da Resist�ncia: ");
                scanf("%f", &resistencia);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                tensao = resistencia*corrente;

                printf("\nO valor da Tens�o El�trica � de %.2f Volts\n\n", tensao);
                terminarProgramaELimparTela();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Tens�o: ");
                scanf("%f", &tensao);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                resistencia = tensao / corrente;

                printf("\nO valor da Resist�ncia El�trica � de %.2f Ohms\n\n", resistencia);
                terminarProgramaELimparTela();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Tens�o: ");
                scanf("%f", &tensao);

                printf("Digite o valor da Resist�ncia: ");
                scanf("%f", &resistencia);

                corrente = tensao / resistencia;

                printf("\nO valor da Corrente El�trica � de %.2f Amp�res\n\n", corrente);
                terminarProgramaELimparTela();

            } else {

                printf("Vari�vel n�o existente!\n\n");
                limparTelaEVoltarAoInicio();

            }

    return 0;
}
