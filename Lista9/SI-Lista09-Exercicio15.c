#include <stdio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include <time.h>//necess�rio p/ fun��o time()

/*  srand(time(NULL)) objetiva inicializar o gerador de n�meros aleat�rios
    com o valor da fun��o time(NULL). Este por sua vez, � calculado
    como sendo o total  de segundos passados desde 1 de janeiro de 1970
    at� a data atual.
    Desta forma, a cada execu��o o valor da "semente" ser� diferente.
*/

int main()
{
    int a[3][2], aT[2][3], r[3][3], l=0, c=0, j = 0, soma = 0;

    // explicacao acima ^
    srand(time(NULL));

    // lendo os valores da matriz a
    for (l = 0; l <= 2 ; l++){
        for (c = 0; c <= 1 ; c++){
            //printf("Digite um numero referente a posicao [%d][%d] da matriz:\n",l,c);
            //scanf("%d", &a[l][c]);

            // sortenado valores aleatorios 0 a 100
            a[l][c] = rand() % 100;
            printf("Numero sorteado para a posicao [%d][%d]: %d\n", l, c, a[l][c]);
        }
    }

    // gerando a matriz transposta em aT
    for (l = 0; l <= 1 ; l++){
        for (c = 0; c <= 2 ; c++){
            aT[l][c] = a[c][l];
        }
    }


    // multiplicando a matriz a por aT
    for (l = 0; l <= 2 ; l++){
        for (c = 0; c <= 2 ; c++){
            soma = 0;
            for (j = 0; j <= 1 ; j++){
                soma += (a[l][j] * aT[j][c]);
            }
            r[l][c] = soma;
        }
    }

    system("pause");
    system("cls");
    printf("A matriz A eh:\n");
    for (l = 0; l <= 2 ; l++){
        for (c = 0; c <= 1 ; c++){
            printf("%d ",a[l][c]);
        }
        // quebra linha para imprimir a pr�xima linha da matriz
        printf("\n");
    }

    printf("\nA matriz de A Transposta eh:\n");
    for (l = 0; l <= 1 ; l++){
        for (c = 0; c <= 2 ; c++){
            printf("%d ",aT[l][c]);
        }
        // quebra linha para imprimir a pr�xima linha da matriz
        printf("\n");
    }

    printf("\nA matriz de A * A Transposta eh:\n");
    for (l = 0; l <= 2 ; l++){
        for (c = 0; c <= 2 ; c++){
            printf("%d ",r[l][c]);
        }
        // quebra linha para imprimir a pr�xima linha da matriz
        printf("\n");
    }

    return 0;
}
