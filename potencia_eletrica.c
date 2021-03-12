#include <stdio.h>
#include <math.h>

int potenciaEletrica() {

    int escolha_var, escolha_form;
    float tensao, resistencia, corrente, potencia;

    printf("\nFórmula: p = U.I = R.I^2 = u^2/R e variações.\n\n");

    printf("De qual Fórmula deseja usar\n\n");

    calculo(1, "Primeira fórmula\n");
    calculo(2, "Segunda fórmula\n");
    calculo(3, "Terceira fórmula\n\n");

    printf("Opção da Fórmula: ");
    scanf("%d", &escolha_form);

    if (escolha_form == 1) {

        printf("\nFórmula: P = U.I\n");
        printf("De qual Variável (letra) deseja obter o Valor\n\n");

        perguntas('1', "Potência Elétrica\n");
        perguntas('2', "Tensão Elétrica\n");
        perguntas('3', "Corrente Elétrica\n\n");

        printf("Opção da Variável: ");
        scanf("%d", &escolha_var);

        if (escolha_var == 1) {

                printf("Digite o valor da Tensão: ");
                scanf("%f", &tensao);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                potencia = tensao * corrente;

                printf("\nO valor da Potência Elétrica é de %.2f Watts\n\n", potencia);
                terminarProgramaELimparTela();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Potência: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                tensao = potencia / corrente;

                printf("\nO valor da Tensão Elétrica é de %.2f Volts\n\n", tensao);
                terminarProgramaELimparTela();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Potência: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Tensão: ");
                scanf("%f", &tensao);

                corrente = potencia / tensao;

                printf("\nO valor da Corrente Elétrica é de %.2f Ampères\n\n", corrente);
                terminarProgramaELimparTela();

            } else {

                printf("Variável não existente!\n\n");
                limparTelaEVoltarAoInicio();

            }

        } else if (escolha_form == 2) {

        printf("\nFórmula: P = R.I^2\n");
        printf("De qual Variável (letra) deseja obter o Valor\n\n");

        perguntas('1', "Potência Elétrica\n");
        perguntas('2', "Resistência Elétrica\n");
        perguntas('3', "Corrente Elétrica\n\n");

        printf("Opção da Variável: ");
        scanf("%d", &escolha_var);

        if (escolha_var == 1) {

                printf("Digite o valor da Resistência: ");
                scanf("%f", &resistencia);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                potencia = resistencia * pow(corrente, 2);

                printf("\nO valor da Potência Elétrica é de %.2f Watts\n\n", potencia);
                terminarProgramaELimparTela();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Potência: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                resistencia = potencia / pow(corrente, 2);

                printf("\nO valor da Resistência Elétrica é de %.2f Ohms\n\n", resistencia);
                terminarProgramaELimparTela();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Potência: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Resistência: ");
                scanf("%f", &resistencia);

                corrente = potencia / resistencia;
                corrente = pow(corrente, 0.5);

                printf("\nO valor da Corrente Elétrica é de %.2f Ampères\n\n", corrente);
                terminarProgramaELimparTela();

            } else {

                printf("Variável não existente!\n\n");
                limparTelaEVoltarAoInicio();

            }

        } else if (escolha_form == 3) {

        printf("\nFórmula: P = U^2/R\n");
        printf("De qual Variável (letra) deseja obter o Valor\n\n");

        perguntas('1', "Potência Elétrica\n");
        perguntas('2', "Tensão Elétrica\n");
        perguntas('3', "Resistência Elétrica\n\n");

        printf("Opção da Variável: ");
        scanf("%d", &escolha_var);

        if (escolha_var == 1) {

                printf("Digite o valor da Tensão: ");
                scanf("%f", &tensao);

                printf("Digite o valor da Resistência: ");
                scanf("%f", &resistencia);

                potencia = pow(tensao, 2) / resistencia;

                printf("\nO valor da Potência Elétrica é de %.2f Watts\n\n", potencia);
                terminarProgramaELimparTela();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Potência: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Resistência: ");
                scanf("%f", &resistencia);

                tensao = potencia / resistencia;
                tensao = pow(tensao, 0.5);

                printf("\nO valor da Tensão Elétrica é de %.2f Volts\n\n", tensao);
                terminarProgramaELimparTela();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Potência: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Tensão: ");
                scanf("%f", &tensao);

                resistencia = potencia / pow(tensao, 2);

                printf("\nO valor da Resistência Elétrica é de %.2f Ohms\n\n", resistencia);
                terminarProgramaELimparTela();

            }

        } else {

                printf("Cálculo não encontrado!\n\n");
                limparTelaEVoltarAoInicio();

        }

    return 0;
}
