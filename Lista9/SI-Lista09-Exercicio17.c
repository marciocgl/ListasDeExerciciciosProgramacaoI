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
    int m[5][5], soma = 0, l=0, c=0, d1=0, d2=0, l4=0, c2=0;

    // explicacao acima ^
    srand(time(NULL));

    for (l = 0; l <= 4 ; l++){
        for (c = 0; c <= 4 ; c++){
            //printf("Digite um numero referente a posicao [%d][%d] da matriz:\n",l,c);
            //scanf("%d", &m[l][c]);

            // sortenado valores aleatorios 0 a 100
            m[l][c] = rand() % 100;
            printf("Numero sorteado para a posicao [%d][%d]: %d\n", l, c, m[l][c]);
        }
    }

    // somando numeros da linha 4
    for (c=0; c <= 4; c++){
        l4 += m[3][c];
    }

    // somando numeros da coluna 2
    for (l=0; l <= 4; l++){
        c2 += m[l][1];
    }

    // somando numeros da diagonal principal
    for (l=0; l <= 4; l++){
        c = l;
        d1 += m[l][c];
    }

    // somando numeros da diagonal secundaria
    c = 4;
    for (l=0; l <= 4; l++){
        d2 += m[l][c];
        c--;
    }

    // somando todos os numeros
    for (l = 0; l <= 4 ; l++){
        for (c = 0; c <= 4 ; c++){
            soma += m[l][c];
        }
    }

    system("cls");
    printf("A matriz lida eh:\n");
    for (l = 0; l <= 4 ; l++){
        for (c = 0; c <= 4 ; c++){
            printf("%d ",m[l][c]);
        }
        printf("\n");
    }

    printf("\nA soma da linha 4 eh: %d",l4);
    printf("\nA soma da coluna 2 eh: %d",c2);
    printf("\nA soma da diagonal principal eh: %d",d1);
    printf("\nA soma da diagonal secundaria eh: %d",d2);
    printf("\nA soma geral eh: %d",soma);

    return 0;
}
