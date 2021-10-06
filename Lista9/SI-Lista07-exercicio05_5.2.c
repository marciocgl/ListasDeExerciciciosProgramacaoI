#include <stdio.h>
#include <stdlib.h>

int main(){
    int dados[7][4], l, c, cont = 0, x = 0;
    int menorValor = 0;
    int linMenorValor[28], colMenorValor[28];
    srand(time(NULL));

    // leitura da matriz
    for (l = 0; l < 7; l++){
        for (c = 0; c < 4; c++){
            dados[l][c] = rand() % 40;
        }
    }

    // encontrando o menor valor
    for (l = 0; l < 7; l++){
        for (c = 0; c < 4; c++){
            // se for o primeiro valor
            if ((l == 0) && (c == 0)){
                menorValor = dados[0][0];
                linMenorValor[cont] = 0;
                colMenorValor[cont] = 0;
            }else{ // demais valores
                if (dados[l][c] < menorValor){
                    menorValor = dados[l][c];
                    cont = 0;
                    linMenorValor[cont] = l;
                    colMenorValor[cont] = c;
                }else
                    if (dados[l][c] == menorValor){
                        cont++;
                        linMenorValor[cont] = l;
                        colMenorValor[cont] = c;
                    }
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

    while (x <= cont){
       printf("Posicao: [%d][%d]\n", linMenorValor[x],
           colMenorValor[x]);
           x++;
    }
    return 0;
}
