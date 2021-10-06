#include <stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>//necessário p/ função time()

/*  srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
    com o valor da função time(NULL). Este por sua vez, é calculado
    como sendo o total  de segundos passados desde 1 de janeiro de 1970
    até a data atual.
    Desta forma, a cada execução o valor da "semente" será diferente.
*/

int main(){
    int l, c;
    int mA[4][4], mB[4][4], mSoma[4][4], mSubtracao[4][4];

    // explicacao acima ^
    srand(time(NULL));

    // lendo os valores para o primeiro vetor
    printf("MATRIZ A:\n");
    for (l = 0; l < 4 ; l++){
        for (c = 0; c < 4 ; c++){
            //printf("Digite um valor para o mA na posicao [%d][%d]\n",l, c);
            //scanf("%d", &mA[l][c]);

            // sortenado valores aleatorios 0 a 10
            mA[l][c] = rand() % 10;
            printf("Numero sorteado para a posicao [%d][%d]: %d\n", l, c, mA[l][c]);
        }
    }

    // pulando uma linha
    printf("\n");

    // lendo os valores para o segundo vetor
    printf("MATRIZ B:\n");
    for (l = 0; l < 4 ; l++){
        for (c = 0; c < 4 ; c++){
            //printf("Digite um valor para o mB na posicao [%d][%d]\n",l, c);
            //scanf("%d", &mB[l][c]);

            // sortenado valores aleatorios
            mB[l][c] = rand() % 10;
            printf("Numero sorteado para a posicao [%d][%d]: %d\n", l, c, mB[l][c]);
        }
    }

    // montandoo os valores para a matriz de soma
    for (l = 0; l < 4 ; l++){
        for (c = 0; c < 4 ; c++){
            mSoma[l][c] = mA[l][c] + mB[l][c];
        }
    }
    printf("\n");

    // montandoo os valores para a matriz de subtracao
    for (l = 0; l < 4 ; l++){
        for (c = 0; c < 4 ; c++){
            mSubtracao[l][c] = mA[l][c] - mB[l][c];
        }
    }
    printf("\n");

    // pausa a tela
    system("pause");
    // limpando a tela
    system("cls");

    // imprimindo os valores da matriz A
    printf("MATRIZ A:\n");
    for (l = 0; l <= 3 ; l++){
        for (c = 0; c <= 3 ; c++){
            printf("%d ", mA[l][c]);
        }
        // quebra linha para imprimir a próxima linha da matriz
        printf("\n");
    }

    // imprimindo os valores da matriz B
    printf("MATRIZ B:\n");
    for (l = 0; l <= 3 ; l++){
        for (c = 0; c <= 3 ; c++){
            printf("%d ", mB[l][c]);
        }
        // quebra linha para imprimir a próxima linha da matriz
        printf("\n");
    }

    // imprimindo os valores da matriz A
    printf("MATRIZ SOMA:\n");
    for (l = 0; l <= 3 ; l++){
        for (c = 0; c <= 3 ; c++){
            printf("%d ", mSoma[l][c]);
        }
        // quebra linha para imprimir a próxima linha da matriz
        printf("\n");
    }

    // imprimindo os valores da matriz A
    printf("MATRIZ SUBTRACAO:\n");
    for (l = 0; l <= 3 ; l++){
        for (c = 0; c <= 3 ; c++){
            printf("%d ", mSubtracao[l][c]);
        }
        // quebra linha para imprimir a próxima linha da matriz
        printf("\n");
    }

    return 0;
}
