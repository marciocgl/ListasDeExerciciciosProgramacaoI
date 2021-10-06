#include <stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>//necessário p/ função time()

/*  srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
    com o valor da função time(NULL). Este por sua vez, é calculado
    como sendo o total  de segundos passados desde 1 de janeiro de 1970
    até a data atual.
    Desta forma, a cada execução o valor da "semente" será diferente.
*/

int main()
{
    int l = 0, c = 0;
    int num[2][3];

    // explicacao acima ^
    srand(time(NULL));

    for (l = 0; l <= 1 ; l++){
        for (c = 0; c <= 2 ; c++){
            //printf("Digite o numero inteiro da posicao [%d,%d] da matriz:\n",l,c);
            //scanf("%d", &num[l][c]);

            // sortenado valores aleatorios 0 a 100
            num[l][c] = rand() % 100;
            printf("Numero sorteado para a posicao [%d][%d]: %d\n", l, c, num[l][c]);
        }
    }
    system("cls");
    printf("A matriz lida eh:\n");
    for (l = 0; l <= 1 ; l++){
        for (c = 0; c <= 2 ; c++){
            printf("%d ",num[l][c]);
        }
        // quebra linha para imprimir a próxima linha da matriz
        printf("\n");
    }

    printf("\n");
    printf("\nA transposta da matriz lida eh:\n");
    for (l = 0; l <= 2 ; l++){
        for (c = 0; c <= 1 ; c++){
            printf("%d ",num[c][l]);
        }
        // quebra linha para imprimir a próxima linha da matriz
        printf("\n");
    }

    return 0;
}
