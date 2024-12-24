#include <stdio.h>
#include <stdlib.h>
#include "tempo.h"   // incluindo a biblioteca com as funções que vocês desenvolveram.
#include "area.h"

int main() {
    system("chcp 65001>nul");

    int opcao;
    float valor, conversao;
    int escolha;

    printf("====================== BEM VINDO AO CONVERSOR DE UNIDADES ==========================\n");


    // Perguntando ao usuario qual opcao ele quer executar:

    do{
        printf("0 - SAIR DO PROGRAMA\n1 - COMPRIMENTO\n2 - MASSA\n3 - VOLUME\n4 - TEMPERATURA\n5 - TEMPO\n6 - AREA\n QUAL CONVERSOR DESEJA EXECUTAR: ");
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

            case 6:
                // chamar a função de unidades de AREA;
                do{
                    printf("Escolha uma medida para conversão:\n"
                    "1 - Milimetro Quadrado para Centimetro Quadrado.\n"
                    "2 - Centimetro Quadrado para Milimetro Quadrado.\n"
                    "3 - Centimetro Quadrado para Metro Quadrado.\n"
                    "4 - Metro Quadrado para Centimetro Quadrado.\n"
                    "5 - Metro Quadrado para Quilometro Quadrado.\n"
                    "6 - Quilometro Quadrado para Metro Quadrado.\n");
                    
                    scanf("%d", &escolha);

                    printf("Digite o valor da area:\n ");
                    scanf("%f", &valor);
                    if(escolha == 1){
                        milimetrosParaCentimetros(valor);
                    }else if(escolha == 2){
                        centimetrosParaMilimetros(valor);
                    }else if(escolha == 3){
                        centimetrosParaMetros(valor);
                    }else if(escolha == 4){
                        metrosParaCentimetros(valor);
                    }else if(escolha == 5){
                        metrosParaQuilometros(valor);
                    }else if(escolha == 6){
                        quilometrosParaMetros(valor);
                    }else{
                        printf("Opção inválida. Tente novamente.\n");
                    }
                }while (escolha < 1 || escolha > 6);

                break;
            
            default:
                printf("OPCAO INVALIDA. TENTE NOVAMENTE\n");
                continue;

        }

    }while(opcao != 0);


    return 0;
}