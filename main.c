#include <stdio.h>
#include <stdlib.h>
#include "unidades.h"   // incluindo a biblioteca com as funções que vocês desenvolveram.
#include "unidadeTemperatura.h"// Biblioteca unidade de temperatura Elioenai


int main() {
    int opcao;

    printf("====================== BEM VINDO AO CONVERSOR DE UNIDADES ==========================\n");

    // Perguntando ao usuario qual opcao ele quer executar:

    do{
        printf("1 - COMPRIMENTO\n2 - MASSA\n3 - VOLUME\n4 - TEMPERATURA\n5 - TEMPO\nQUAL CONVERSOR DESEJA EXECUTAR: ");
        scanf("%d", &opcao);

        // switch para multiplas escolhas:
        switch(opcao){
            case 0:
                printf("SAINDO DO PROGRAMA...\n");
                break;
            
            case 1:
                //chamar a função unidades de COMPRIMENTO;
                break;

            case 2:
                //chamar a função de unidades de MASSA;
                break;

            case 3:
                // chamar a função de unidades de VOLUME;
                break;

            case 4:
                // chamar a função de unidades de TEMPERATURA;
                double valor, convertido;
                char unidadeOrigem, unidadeDestino;

                printf("Digite o valor da temperatura: ");
                scanf("%lf", &valor);

                printf("Digite a unidade de origem (C, F, K): ");
                scanf(" %c", &unidadeOrigem);

                printf("Digite a unidade de destino (C, F, K): ");
                scanf(" %c", &unidadeDestino);

                convertido = converterTemperatura(valor, unidadeOrigem, unidadeDestino);

                if (convertido != -1) {
                 printf("Temperatura convertida: %.2f %c\n", convertido, unidadeDestino);
                break;
            
            case 5:
                // chamar a função de unidades de TEMPO
                break;
            
            default:
                printf("OPCAO INVALIDA. TENTE NOVAMENTE\n");
                continue;

        }

    }while(opcao != 0);


    return 0;
}