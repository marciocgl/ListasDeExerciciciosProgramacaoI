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
    float num[3][4];

    // explicacao acima ^
    srand(time(NULL));

    for (l = 0; l < 3 ; l++){
        for (c = 0; c < 4 ; c++){
            //printf("Digite o numero real da posicao [%d,%d] da matriz:\n",l,c);
            //scanf("%f", &num[l][c]);

            // sortenado valores aleatorios 0 a 10
            num[l][c] = rand() % 100;
            printf("Numero sorteado para a posicao [%d][%d]: %.2f\n", l, c, num[l][c]);
        }
    }

    // pausa a tela
    system("pause");
    // limpando a tela
    system("cls");

    printf("A matriz lida eh:\n");
    for (l = 0; l < 3 ; l++){
        for (c = 0; c < 4 ; c++){
            printf("%.2f ",num[l][c]);
        }
        // quebra linha para imprimir a próxima linha da matriz
        printf("\n");
    }

printf("Elemento do canto superior esquerdo: %.2f\n",num[0][0]);
printf("Elemento do canto inferior direito: %.2f ",num[2][3]);

    return 0;
}
