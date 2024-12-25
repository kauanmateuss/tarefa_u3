#include <stdio.h>
#include "comprimento.h"   // Incluindo a biblioteca que contém os protótipos das funções.

void unidade_de_comprimento() {

    int opcao;
    double valor;

    do { // Para que o programa não feche logo após a execução, adicionamos um loop.
        printf("Conversor de Unidades de Comprimento\n"); 
        printf("Escolha a conversão desejada:\n");
        printf("1 - Quilômetros para hectômetros\n");
        printf("2 - Quilômetros para decâmetros\n");
        printf("3 - Quilômetros para metros\n");
        printf("4 - Quilômetros para decímetros\n");
        printf("5 - Quilômetros para centímetros\n");
        printf("6 - Quilômetros para milímetros\n");
        printf("7 - Metros para quilômetros\n");
        printf("8 - Metros para hectômetros\n");
        printf("9 - Metros para decâmetros\n");
        printf("10 - Metros para decímetros\n");
        printf("11 - Metros para centímetros\n");
        printf("12 - Metros para milímetros\n");
        printf("13 - Sair.\n");
        printf("Digite a opção de (1 a 13): ");
        scanf("%d", &opcao); // Ler a opção do usuário.

        if (opcao < 1 || opcao > 13) { // Verifica se a opção escolhida é válida.
            printf("Opção inválida! Tente de novo.\n");
            continue;
        }
        if (opcao == 13) { // Se a opção for 13, o programa termina.
            printf("Saindo do programa...\n");
            break;
        }
        printf("Digite o valor a ser convertido: "); // Pergunta ao usuário o valor que deseja converter.
        scanf("%lf", &valor);

        switch (opcao) {
            case 1:
                printf("%.2f Quilômetros é igual a %.2f hectômetros.\n", valor, valor * 10);
                break;
            case 2:
                printf("%.2f Quilômetros é igual a %.2f decâmetros.\n", valor, valor * 100);
                break;
            case 3:
                printf("%.2f Quilômetros é igual a %.2f metros.\n", valor, valor * 1000);
                break;
            case 4:
                printf("%.2f Quilômetros é igual a %.2f decímetros.\n", valor, valor * 10000);
                break;
            case 5:
                printf("%.2f Quilômetros é igual a %.2f centímetros.\n", valor, valor * 100000);
                break;
            case 6:
                printf("%.2f Quilômetros é igual a %.2f milímetros.\n", valor, valor * 1000000);
                break;
            case 7:
                printf("%.2f Metros é igual a %.6f quilômetros.\n", valor, valor / 1000);
                break;
            case 8:
                printf("%.2f Metros é igual a %.2f hectômetros.\n", valor, valor / 100);
                break;
            case 9:
                printf("%.2f Metros é igual a %.2f decâmetros.\n", valor, valor / 10);
                break;
            case 10:
                printf("%.2f Metros é igual a %.2f decímetros.\n", valor, valor * 10);
                break;
            case 11:
                printf("%.2f Metros é igual a %.2f centímetros.\n", valor, valor * 100);
                break;
            case 12:
                printf("%.2f Metros é igual a %.2f milímetros.\n", valor, valor * 1000);
                break;
        } 
    } while (1); // Mantém o programa rodando até que o usuário escolha a opção 13.
}
