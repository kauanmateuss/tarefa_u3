#include <stdio.h>
#include "unidades.h"   // Incluindo a bibliotecas que contem os protótipos das funções.

int main(){
    int opcao;
    float valor, resultado;

    do{ // Para que o programa não feche logo após a execução, adicionamos um loop.
        printf("Conversor de Unidades de Tempo\n"); 
        printf("Escolha a conversão desejada:\n");
        printf("1 - Horas para minutos\n");
        printf("2 - Horas para segundos\n");
        printf("3 - Minutos para horas\n");
        printf("4 - Minutos para segundos\n");
        printf("5 - Segundos para horas\n");
        printf("6 - Segundos para minutos\n");
        printf("7 - Sair.\n");
        printf("Digite a opção de (1 a 7): ");
        scanf("%d", &opcao); // Ler a opção do usuário.

        if (opcao < 1 || opcao > 7){ // Verifica se a opção escolhida é válida.
            printf("Opção inválida! Tente de novo.\n");
            continue;
        }
        if (opcao == 7){ // Se a opção for 7, o programa termina.
            printf("Saindo do programa...\n");
            break;
        }
        printf("Digite o valor a ser convertido: "); // Pergunta ao usuário o valor que deseja converter.
        scanf("%f", &valor);

        switch (opcao) {
            case 1:
            resultado = horasparaminutos(valor); // Transforma o valor recebido em horas para minutos.
            printf("%.2f Horas é igual a %.2f minutos.\n", valor, resultado);
            break;
            case 2:
            resultado = horasparasegundos(valor); // Transforma o valor recebido em horas para segundos.
            printf("%.2f Horas é igual a %.2f segundos.\n", valor, resultado);
            break;
            case 3:
            resultado = minutosparahoras(valor); // Transforma o valor recebido em minutos para horas.
            printf("%.2f Minutos é igual a %.2f horas.\n", valor, resultado);
            break;
            case 4:
            resultado = minutosparasegundos(valor); // Transforma o valor recebido em minutos para segundos.
            break;
            case 5:
            resultado = segundosparahoras(valor);  // Transforma o valor recebido em segundos para horas.
            printf("%.2f Segundos é igual a %.2f horas.\n", valor, resultado);
            break;
            case 6:
            resultado = segundosparaminutos(valor); // Transforma o valor recebido em segundos para minutos.
            printf("%.2f Segundos é igual a %.2f minutos.\n", valor, resultado);
            break;
            case 7: // Caso escolher a opção 7, o programa termina.
            printf("Saindo do programa...\n");
            break; 
        } 
    } while (1); // Mantem o programa rodando até que o usuário escolha a opção 7.
    return 0; // O programa termina aqui.
}