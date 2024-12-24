#include <stdio.h>
#include "comprimento.h"

int main() {
    int opcao;
    double valor;

    do {
        printf("\n===== Conversor de Unidades de Comprimento =====\n");
        printf("1. Metros para Quilômetros\n");
        printf("2. Quilômetros para Metros\n");
        printf("3. Metros para Hectômetros\n");
        printf("4. Hectômetros para Metros\n");
        printf("5. Metros para Decâmetros\n");
        printf("6. Decâmetros para Metros\n");
        printf("7. Metros para Decímetros\n");
        printf("8. Decímetros para Metros\n");
        printf("9. Metros para Centímetros\n");
        printf("10. Centímetros para Metros\n");
        printf("11. Metros para Milímetros\n");
        printf("12. Milímetros para Metros\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando o programa. Até logo!\n");
            break;
        }

        printf("Digite o valor: ");
        scanf("%lf", &valor);

        switch (opcao) {
            case 1: metrosParaQuilometros(valor); break;
            case 2: quilometrosParaMetros(valor); break;
            case 3: metrosParaHectometros(valor); break;
            case 4: hectometrosParaMetros(valor); break;
            case 5: metrosParaDecametros(valor); break;
            case 6: decametrosParaMetros(valor); break;
            case 7: metrosParaDecimetros(valor); break;
            case 8: decimetrosParaMetros(valor); break;
            case 9: metrosParaCentimetros(valor); break;
            case 10: centimetrosParaMetros(valor); break;
            case 11: metrosParaMilimetros(valor); break;
            case 12: milimetrosParaMetros(valor); break;
            default: printf("Opção inválida! Por favor, escolha novamente.\n");
        }
    } while (1);

    return 0;
}

// Implementação das funções
void metrosParaQuilometros(double metros) { printf("%.2f metros = %.6f quilômetros\n", metros, metros / 1000.0); }
void quilometrosParaMetros(double quilometros) { printf("%.2f quilômetros = %.2f metros\n", quilometros, quilometros * 1000.0); }
void metrosParaHectometros(double metros) { printf("%.2f metros = %.2f hectômetros\n", metros, metros / 100.0); }
void hectometrosParaMetros(double hectometros) { printf("%.2f hectômetros = %.2f metros\n", hectometros, hectometros * 100.0); }
void metrosParaDecametros(double metros) { printf("%.2f metros = %.2f decâmetros\n", metros, metros / 10.0); }
void decametrosParaMetros(double decametros) { printf("%.2f decâmetros = %.2f metros\n", decametros, decametros * 10.0); }
void metrosParaDecimetros(double metros) { printf("%.2f metros = %.2f decímetros\n", metros, metros * 10.0); }
void decimetrosParaMetros(double decimetros) { printf("%.2f decímetros = %.2f metros\n", decimetros, decimetros / 10.0); }
void metrosParaCentimetros(double metros) { printf("%.2f metros = %.2f centímetros\n", metros, metros * 100.0); }
void centimetrosParaMetros(double centimetros) { printf("%.2f centímetros = %.2f metros\n", centimetros, centimetros / 100.0); }
void metrosParaMilimetros(double metros) { printf("%.2f metros = %.2f milímetros\n", metros, metros * 1000.0); }
void milimetrosParaMetros(double milimetros) { printf("%.2f milímetros = %.2f metros\n", milimetros, milimetros / 1000.0); }
