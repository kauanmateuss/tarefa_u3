#include <stdio.h>
#include <stdlib.h>
#include "tempo.h"   // incluindo a biblioteca com as funções que vocês desenvolveram.

int main() {
    system("chcp 65001>nul");

    int opcao;

    printf("====================== BEM VINDO AO CONVERSOR DE UNIDADES ==========================\n");


    // Perguntando ao usuario qual opcao ele quer executar:

    do{
        printf("0 - SAIR DO PROGRAMA\n1 - COMPRIMENTO\n2 - MASSA\n3 - VOLUME\n4 - TEMPERATURA\n5 - TEMPO\nQUAL CONVERSOR DESEJA EXECUTAR: ");
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
                break;
            
            case 5:
                // chamar a função de unidades de TEMPO
                unidade_de_tempo();
                break;
            
            default:
                printf("OPCAO INVALIDA. TENTE NOVAMENTE\n");
                continue;

        }

    }while(opcao != 0);


    return 0;
}