#include <stdio.h>
#include <stdlib.h>

int main(){
    int dados[7][4], l, c, auxL, auxC;
    int menorValor = 0;
    int linMenorValor, colMenorValor;
    int existe = 0;
    int auxValor;
    srand(time(NULL));

    // leitura da matriz
    for (l = 0; l < 7; l++){
        for (c = 0; c < 4; c++){
            do{
                existe = 0;
                auxValor = rand() % 40;
                for(auxL = 0; auxL <= l; auxL++){
                    for(auxC = 0; auxC <= c; auxC++){
                        if (auxValor == dados[auxL][auxC]){
                            existe = 1;
                            printf("->>>> Valor repetido: %d\n", auxValor);
                        }
                    }
                }
            }while(existe == 1);
            dados[l][c] = auxValor;
        }
    }

    // encontrando o menor valor
    menorValor = dados[0][0];
    linMenorValor = 0;
    colMenorValor = 0;
    for (l = 0; l < 7; l++){
        for (c = 0; c < 4; c++){
            if (dados[l][c] < menorValor){
                menorValor = dados[l][c];
                linMenorValor = l;
                colMenorValor = c;
            }
        }
    }
    //system("cls");
    // imprimindo a matriz
    for (l = 0; l < 7; l++){
        for (c = 0; c < 4; c++){
            printf("%d ",dados[l][c]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Menor Valor: %d\n", menorValor);
    printf("Posicao: [%d][%d]\n", linMenorValor,
           colMenorValor);

    return 0;
}
