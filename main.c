#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <locale.h>

#include "lei_coulomb.c"
#include "lei_ohm.c"
#include "potencia_eletrica.c"
#include "capacitancia.c"

int main()
{
    setlocale(LC_ALL, "portuguese");

    int escolha_calc;

    printf("#####################################################\n\n");

    printf("Bem vindo ao calculador de Fórmulas Físicas!\n\n");

    printf("O que pretende Calcular?\n\n");
    formulas(1, "Lei de Coulomb");
    formulas(2, "Lei de Ohm");
    formulas(3, "Potência Elétrica");
    formulas(4, "Capacitância");
    formulas(5, "Associação de Resistores");
    formulas(6, "Aquecimento por Efeito Joule");
    formulas(7, "Campo Magnético");
    formulas(8, "Força Mangnética");
    formulas(9, "Fluxo Magnético");
    formulas(10, "Lei de Faraday");
    formulas(11, "Transformador");

    printf("\nOpção de Escolha: ");
    scanf("%d", &escolha_calc);

    if (escolha_calc == 1) {

        leiCoulomb();

    } else if (escolha_calc == 2) {

        leiOhm();

    } else if (escolha_calc == 3) {

        potenciaEletrica();

    } else if (escolha_calc == 4) {

        capacitancia();

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

void terminarProgramaELimparTela() {
    getch();
    system("cls");
}

void limparTelaEVoltarAoInicio() {
    getch();
    system("cls");
    main();
}
