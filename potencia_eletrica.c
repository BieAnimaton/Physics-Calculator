#include <stdio.h>
#include <math.h>

int potenciaEletrica() {

    int escolha_var, escolha_form;
    float tensao, resistencia, corrente, potencia;

    printf("\nF�rmula: p = U.I = R.I^2 = u^2/R e varia��es.\n\n");

    printf("De qual F�rmula deseja usar\n\n");

    calculo(1, "Primeira f�rmula\n");
    calculo(2, "Segunda f�rmula\n");
    calculo(3, "Terceira f�rmula\n\n");

    printf("Op��o da F�rmula: ");
    scanf("%d", &escolha_form);

    if (escolha_form == 1) {

        printf("\nF�rmula: P = U.I\n");
        printf("De qual Vari�vel (letra) deseja obter o Valor\n\n");

        perguntas('1', "Pot�ncia El�trica\n");
        perguntas('2', "Tens�o El�trica\n");
        perguntas('3', "Corrente El�trica\n\n");

        printf("Op��o da Vari�vel: ");
        scanf("%d", &escolha_var);

        if (escolha_var == 1) {

                printf("Digite o valor da Tens�o: ");
                scanf("%f", &tensao);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                potencia = tensao * corrente;

                printf("\nO valor da Pot�ncia El�trica � de %.2f Watts\n\n", potencia);
                terminarProgramaELimparTela();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Pot�ncia: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                tensao = potencia / corrente;

                printf("\nO valor da Tens�o El�trica � de %.2f Volts\n\n", tensao);
                terminarProgramaELimparTela();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Pot�ncia: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Tens�o: ");
                scanf("%f", &tensao);

                corrente = potencia / tensao;

                printf("\nO valor da Corrente El�trica � de %.2f Amp�res\n\n", corrente);
                terminarProgramaELimparTela();

            } else {

                printf("Vari�vel n�o existente!\n\n");
                limparTelaEVoltarAoInicio();

            }

        } else if (escolha_form == 2) {

        printf("\nF�rmula: P = R.I^2\n");
        printf("De qual Vari�vel (letra) deseja obter o Valor\n\n");

        perguntas('1', "Pot�ncia El�trica\n");
        perguntas('2', "Resist�ncia El�trica\n");
        perguntas('3', "Corrente El�trica\n\n");

        printf("Op��o da Vari�vel: ");
        scanf("%d", &escolha_var);

        if (escolha_var == 1) {

                printf("Digite o valor da Resist�ncia: ");
                scanf("%f", &resistencia);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                potencia = resistencia * pow(corrente, 2);

                printf("\nO valor da Pot�ncia El�trica � de %.2f Watts\n\n", potencia);
                terminarProgramaELimparTela();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Pot�ncia: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                resistencia = potencia / pow(corrente, 2);

                printf("\nO valor da Resist�ncia El�trica � de %.2f Ohms\n\n", resistencia);
                terminarProgramaELimparTela();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Pot�ncia: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Resist�ncia: ");
                scanf("%f", &resistencia);

                corrente = potencia / resistencia;
                corrente = pow(corrente, 0.5);

                printf("\nO valor da Corrente El�trica � de %.2f Amp�res\n\n", corrente);
                terminarProgramaELimparTela();

            } else {

                printf("Vari�vel n�o existente!\n\n");
                limparTelaEVoltarAoInicio();

            }

        } else if (escolha_form == 3) {

        printf("\nF�rmula: P = U^2/R\n");
        printf("De qual Vari�vel (letra) deseja obter o Valor\n\n");

        perguntas('1', "Pot�ncia El�trica\n");
        perguntas('2', "Tens�o El�trica\n");
        perguntas('3', "Resist�ncia El�trica\n\n");

        printf("Op��o da Vari�vel: ");
        scanf("%d", &escolha_var);

        if (escolha_var == 1) {

                printf("Digite o valor da Tens�o: ");
                scanf("%f", &tensao);

                printf("Digite o valor da Resist�ncia: ");
                scanf("%f", &resistencia);

                potencia = pow(tensao, 2) / resistencia;

                printf("\nO valor da Pot�ncia El�trica � de %.2f Watts\n\n", potencia);
                terminarProgramaELimparTela();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Pot�ncia: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Resist�ncia: ");
                scanf("%f", &resistencia);

                tensao = potencia / resistencia;
                tensao = pow(tensao, 0.5);

                printf("\nO valor da Tens�o El�trica � de %.2f Volts\n\n", tensao);
                terminarProgramaELimparTela();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Pot�ncia: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Tens�o: ");
                scanf("%f", &tensao);

                resistencia = potencia / pow(tensao, 2);

                printf("\nO valor da Resist�ncia El�trica � de %.2f Ohms\n\n", resistencia);
                terminarProgramaELimparTela();

            }

        } else {

                printf("C�lculo n�o encontrado!\n\n");
                limparTelaEVoltarAoInicio();

        }

    return 0;
}
