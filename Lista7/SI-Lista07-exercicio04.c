#include <stdio.h>
#include <stdlib.h>

/*  srand(time(NULL)) objetiva inicializar o gerador de n�meros aleat�rios
    com o valor da fun��o time(NULL). Este por sua vez, � calculado
    como sendo o total  de segundos passados desde 1 de janeiro de 1970
    at� a data atual.
    Desta forma, a cada execu��o o valor da "semente" ser� diferente.
*/

int main()
{
    int l = 0, c = 0, num[5][6], qp=0, soma=0;
    float media;

    // explicacao acima ^
    srand(time(NULL));

    for (l = 0; l <= 4 ; l++){
        for (c = 0; c <= 5 ; c++){
            /*
            printf("Digite o numero inteiro da posicao [%d,%d] da matriz:\n",l,c);
            scanf("%d", &num[l][c]);
            */

            // sorteando valores aleatorios de 0 a 9
            num[l][c] = rand() % 10;
            printf("[%d][%d] = %d\n", l, c, num[l][c]);
        }
    }
    system("cls");
    printf("A matriz lida eh:\n");
    for (l = 0; l <= 4 ; l++)
    {
        for (c = 0; c <= 5 ; c++)
        {
            printf("%d ",num[l][c]);
        }
        printf("\n");
    }
    printf("\n");

    for (l = 0; l <= 4 ; l++)
    {
        for (c = 0; c <= 5 ; c++)
        {
            if (num[l][c] % 2 == 0)
            {
                soma += num[l][c];
                qp += 1;
            }
        }
        printf("\n");
    }
    printf("\n");


    media = soma/qp;
    printf("\nA media eh %.2f ",media);

    return 0;
}
