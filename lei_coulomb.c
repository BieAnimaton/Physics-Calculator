#include <stdio.h>
#include <math.h>

int leiCoulomb() {

    int escolha_var;
    float forca, constante_k, carga_1, carga_2, distancia;
    constante_k = 9 * pow(10, 9);

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
                terminarProgramaELimparTela();

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
                terminarProgramaELimparTela();

            } else {

                printf("Vari�vel n�o existente!\n\n");
                limparTelaEVoltarAoInicio();

            }

    return 0;
}
