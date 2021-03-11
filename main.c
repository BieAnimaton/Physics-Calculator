#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main()
{
    int escolha_calc, escolha_var, escolha_form;
    float tensao, resistencia, corrente, forca, constante_k, carga_1, carga_2, distancia, potencia;
    constante_k = 9 * pow(10, 9);

    printf("#####################################################\n\n");

    printf("Bem vindo ao calculador de F�rmulas F�sicas!\n\n");

    printf("O que pretende Calcular?\n\n");
    formulas(1, "Lei de Coulomb");
    formulas(2,"Lei de Ohm");
    formulas(3,"Pot�ncia El�trica");
    formulas(4,"Capacit�ncia");
    formulas(5,"Associa��o de Resistores");
    formulas(6,"Aquecimento por Efeito Joule");
    formulas(7,"Campo Magn�tico");
    formulas(8,"For�a Mangn�tica");
    formulas(9,"Fluxo Magn�tico");
    formulas(10,"Lei de Faraday");
    formulas(11,"Transformador");

    printf("\nOp��o de Escolha: ");
    scanf("%d", &escolha_calc);

    if (escolha_calc == 1) {


    printf("\nF�rmula: F = k.(|Q1.|Q2|)/D^2 e varia��es.\n\n");
    printf("\nObs.: o K representa a constante eletrost�tica. k=9.10^9\n\n");

    printf("De qual Vari�vel (letra) deseja obter o Valor\n\n");

    perguntas('1', "For�a\n");
    perguntas('2', "Dist�ncia\n\n");

    printf("Op��o da Vari�vel: ");
    scanf("%d", &escolha_var);

        if (escolha_var == 1) {

                printf("Digite o valor da Carga 1: ");
                scanf("%f", &carga_1);

                printf("Digite o valor da Carga 2: ");
                scanf("%f", &carga_2);

                printf("Digite o valor da Dist�ncia: ");
                scanf("%f", &distancia);

                forca = (constante_k * (carga_1 * carga_2)) / pow(distancia, 2) ;

                printf("\nO valor da For�a � de %.2f Newtons\n\n", forca);
                getch();

            } else if (escolha_var == 2) {

                printf("Digite o valor da For�a: ");
                scanf("%f", &forca);

                printf("Digite o valor da Carga 1: ");
                scanf("%f", &carga_1);

                printf("Digite o valor da Carga 2: ");
                scanf("%f", &carga_2);

                distancia = (constante_k * (carga_1 * carga_2)) / forca ;
                distancia = pow(distancia, 0.5);

                printf("\nO valor da Dist�ncia � de %.2f Metros\n\n", distancia);
                getch();

            } else {

                printf("Vari�vel n�o existente!\n\n");
                main();

            }

    } else if (escolha_calc == 2) {

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
                getch();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Tens�o: ");
                scanf("%f", &tensao);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                resistencia = tensao / corrente;

                printf("\nO valor da Resist�ncia El�trica � de %.2f Ohms\n\n", resistencia);
                getch();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Tens�o: ");
                scanf("%f", &tensao);

                printf("Digite o valor da Resist�ncia: ");
                scanf("%f", &resistencia);

                corrente = tensao / resistencia;

                printf("\nO valor da Corrente El�trica � de %.2f Amp�res\n\n", corrente);
                getch();

            } else {

                printf("Vari�vel n�o existente!\n\n");
                main();

            }

    } else if (escolha_calc == 3) {

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
                getch();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Pot�ncia: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                tensao = potencia / corrente;

                printf("\nO valor da Tens�o El�trica � de %.2f Volts\n\n", tensao);
                getch();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Pot�ncia: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Tens�o: ");
                scanf("%f", &tensao);

                corrente = potencia / tensao;

                printf("\nO valor da Corrente El�trica � de %.2f Amp�res\n\n", corrente);
                getch();

            } else {

                printf("Vari�vel n�o existente!\n\n");
                main();

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
                getch();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Pot�ncia: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);

                resistencia = potencia / pow(corrente, 2);

                printf("\nO valor da Resist�ncia El�trica � de %.2f Ohms\n\n", resistencia);
                getch();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Pot�ncia: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Resist�ncia: ");
                scanf("%f", &resistencia);

                corrente = potencia / resistencia;
                corrente = pow(corrente, 0.5);

                printf("\nO valor da Corrente El�trica � de %.2f Amp�res\n\n", corrente);
                getch();

            } else {

                printf("Vari�vel n�o existente!\n\n");
                main();

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
                getch();

            } else if (escolha_var == 2) {

                printf("Digite o valor da Pot�ncia: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Resist�ncia: ");
                scanf("%f", &resistencia);

                tensao = potencia / resistencia;
                tensao = pow(tensao, 0.5);

                printf("\nO valor da Tens�o El�trica � de %.2f Volts\n\n", tensao);
                getch();

            } else if (escolha_var == 3) {

                printf("Digite o valor da Pot�ncia: ");
                scanf("%f", &potencia);

                printf("Digite o valor da Tens�o: ");
                scanf("%f", &tensao);

                resistencia = potencia / pow(tensao, 2);

                printf("\nO valor da Resist�ncia El�trica � de %.2f Ohms\n\n", resistencia);
                getch();

            }
        }

    } else {
        printf("C�lculo n�o encontrado\n\n");
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
    printf("Digite %d para a %s. f�rmula\n", num, materia);
}
