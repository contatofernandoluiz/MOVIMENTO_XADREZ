#include <stdio.h>

int main() {
    // DEFININDO AS VARIAVEIS
     int casasTorre = 5;
     int casasBispo = 5;
     int casasRainha =8;

    int i; //VARIAVEL PARA LOOP

    //MOVIMENTO DA TORRE EM FOR
    printf("Movimento da torre (direita): \n");
    for(i = 1; i <= casasTorre; i++){
        printf("Direita \n");
    }
    printf("\n");

    //MOVIMENTO DO BISPO EM WHILE
    printf("Movimento do Bispo (cima,direita): \n");
    i = 1;
    while (i <= casasBispo){
        printf("Cima, direita\n");
        i++;
  
    }
    printf("\n");

    //MOVIMENTO DA RAINHA EM DO-WHILE
    printf("Movimento da Rainha (Esquerda): \n");
    i = 1;

    do
    {
        printf("Esquerda \n");
        i++;
    } while (i <= casasRainha);

    printf("\n");
    

    return 0;
}
