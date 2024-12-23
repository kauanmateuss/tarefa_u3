#include <stdio.h>
#include <stdlib.h>
#include "tempo.h"   // incluindo a biblioteca com as funções que vocês desenvolveram.

int main() {
    system("chcp 65001>nul");

    int opcao;
    float valor, conversao;
    int escolha;

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
                printf("Escolha uma medida de conversão.\n");
                printf("1 - Quilograma para grama.\n");
                printf("2 - Quilograma para tonelada.\n");
                printf("3 - Grama para quilograma.\n");
                printf("4 - Grama para tonelada.\n");
                printf("5 - Tonelada para grama.\n");
                printf("6 - Tonelada para quilograma.\n");
                
                printf("Digite uma escolha:\n ");
                scanf("%d", &escolha);

                printf("Digite um valor:\n ");
                scanf("%f", &valor);

                switch (escolha){
                    case 1: conversao=valor*1000;
                    printf(" O valor %f em quilograma e igual %f em gramas\n",valor,conversao);
                    break;
                    case 2: conversao=valor*0.001;
                    printf(" O valor %f em quilograma e igual %f em tonelada\n",valor,conversao);
                    break;
                    case 3: conversao=valor/1000;
                    printf(" O valor %f em grama e igual %f em quilograma\n",valor,conversao);
                    break;
                    case 4: conversao=valor/1000000;
                        printf(" O valor %f em grama e igual %f em tonelada\n",valor,conversao); 
                    break;   
                    case 5: conversao=valor*1000000; 
                        printf(" O valor %f em tonelada e igual %f em grama\n",valor,conversao); 
                    break;
                    case 6: conversao=valor*1000;
                        printf(" O valor %f em tonelada e igual %f em quilograma\n",valor,conversao);
                    break; 
                    default: printf("Escolha invalida.");
                }
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