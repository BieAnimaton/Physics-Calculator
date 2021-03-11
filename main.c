#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main()
{
    int escolha_calc, escolha_var, escolha_form;
    float tensao, resistencia, corrente, forca, constante_k, carga_1, carga_2, distancia, potencia;
    constante_k = 9 * pow(10, 9);

    printf("#####################################################\n\n");

    printf("Bem vindo ao calculador de Fórmulas Físicas!\n\n");

    printf("O que pretende Calcular?\n\n");
    formulas(1, "Lei de Coulomb");
    formulas(2,"Lei de Ohm");
    formulas(3,"Potência Elétrica");
    formulas(4,"Capacitância");
    formulas(5,"Associação de Resistores");
    formulas(6,"Aquecimento por Efeito Joule");
    formulas(7,"Campo Magnético");
    formulas(8,"Força Mangnética");
    formulas(9,"Fluxo Magnético");
    formulas(10,"Lei de Faraday");
    formulas(11,"Transformador");

    printf("\nOpção de Escolha: ");
    scanf("%d", &escolha_calc);

    if (escolha_calc == 1) {


    printf("\nFórmula: F = k.(|Q1.|Q2|)/D^2 e variações.\n\n");
    printf("\nObs.: o K representa a constante eletrostática. k=9.10^9\n\n");

    printf("De qual Variável (letra) deseja obter o Valor\n\n");

    perguntas('1', "Força\n");
    perguntas('2', "Distância\n\n");

    printf("Opção da Variável: ");
    scanf("%d", &escolha_var);

        if (escolha_var == 1) {

                printf("Digite o valor da Carga 1: ");
                scanf("%f", &carga_1);

                printf("Digite o valor da Carga 2: ");
                scanf("%f", &carga_2);

                printf("Digite o valor da Distância: ");
                scanf("%f", &distancia);

                forca = (constante_k * (carga_1 * carga_2)) / pow(distancia, 2) ;

                printf("\nO valor da Força é de %.2f Newtons\n\n", forca);
                getch();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Força: ");
                scanf("%f", &forca);

                printf("Digite o valor da Carga 1: ");
                scanf("%f", &carga_1);

                printf("Digite o valor da Carga 2: ");
                scanf("%f", &carga_2);

                distancia = (constante_k * (carga_1 * carga_2)) / forca ;
                distancia = pow(distancia, 0.5);

                printf("\nO valor da Distância é de %.2f Metros\n\n", distancia);
                getch();

            } else {

                printf("Variável não existente!\n\n");
                main();

            }

    } else if (escolha_calc == 2) {

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
                getch();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Tensão: ");
                scanf("%f", &tensao);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                resistencia = tensao / corrente;

                printf("\nO valor da Resistência Elétrica é de %.2f Ohms\n\n", resistencia);
                getch();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Tensão: ");
                scanf("%f", &tensao);

                printf("Digite o valor da Resistência: ");
                scanf("%f", &resistencia);

                corrente = tensao / resistencia;

                printf("\nO valor da Corrente Elétrica é de %.2f Ampères\n\n", corrente);
                getch();

            } else {

                printf("Variável não existente!\n\n");
                main();

            }

    } else if (escolha_calc == 3) {

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
                getch();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Potência: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                tensao = potencia / corrente;

                printf("\nO valor da Tensão Elétrica é de %.2f Volts\n\n", tensao);
                getch();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Potência: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Tensão: ");
                scanf("%f", &tensao);

                corrente = potencia / tensao;

                printf("\nO valor da Corrente Elétrica é de %.2f Ampères\n\n", corrente);
                getch();

            } else {

                printf("Variável não existente!\n\n");
                main();

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
                getch();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Potência: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                resistencia = potencia / pow(corrente, 2);

                printf("\nO valor da Resistência Elétrica é de %.2f Ohms\n\n", resistencia);
                getch();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Potência: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Resistência: ");
                scanf("%f", &resistencia);

                corrente = potencia / resistencia;
                corrente = pow(corrente, 0.5);

                printf("\nO valor da Corrente Elétrica é de %.2f Ampères\n\n", corrente);
                getch();

            } else {

                printf("Variável não existente!\n\n");
                main();

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
                getch();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Potência: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Resistência: ");
                scanf("%f", &resistencia);

                tensao = potencia / resistencia;
                tensao = pow(tensao, 0.5);

                printf("\nO valor da Tensão Elétrica é de %.2f Volts\n\n", tensao);
                getch();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Potência: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Tensão: ");
                scanf("%f", &tensao);

                resistencia = potencia / pow(tensao, 2);

                printf("\nO valor da Resistência Elétrica é de %.2f Ohms\n\n", resistencia);
                getch();

            }
        }

    } else {
        printf("Cálculo não encontrado\n\n");
        main();
    }
    main();

    return 0;
}

void perguntas(char letra, char materia[30])
{
    printf("Digite '%c' para calcular a %s", letra, materia);
}

void formulas(int num, char materia[30])
{
    printf("Digite %d para calcular a(o) %s.\n", num, materia);
}

void calculo(int num, char materia[30])
{
    printf("Digite %d para a %s. fórmula\n", num, materia);
}
