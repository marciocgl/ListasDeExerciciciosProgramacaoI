#include <stdio.h>

int main()
{
    int bot[2][3], cam[3][2], r[2][2], l=0, c=0, j = 0, soma = 0;

    // lendo a quantidade de botoes P e G paras as camisas A, B e C
    printf("Digite o numero de botoes P da camisa A, B e C, e em seguida botoes G para as camisas A, B e C.\n");
    for (l = 0; l <= 1 ; l++){
        for (c = 0; c <= 2 ; c++){
            printf("Pos[%d][%d] da matriz:\n",l,c);
            scanf("%d", &bot[l][c]);
        }
    }

    // lendo a quantidade de camisas produzidas em maio e junho
    printf("\nDigite o numero de camisas A, B e C vendidaas em maio e junho.\n");
    for (l = 0; l <= 2 ; l++){
        for (c = 0; c <= 1 ; c++){
            printf("Pos[%d][%d] da matriz:\n",l,c);
            scanf("%d", &cam[l][c]);
        }
    }


    // multiplicando a matriz a por aT
    for (l = 0; l <= 1 ; l++){
        for (c = 0; c <= 1 ; c++){
            soma = 0;
            for (j = 0; j <= 2 ; j++){
                soma += (bot[l][j] * cam[j][c]);
            }
            r[l][c] = soma;
        }
    }

    system("cls");
    printf("A matriz de botoes eh:\n");
    for (l = 0; l <= 1 ; l++){
        for (c = 0; c <= 2 ; c++){
            printf("%d ",bot[l][c]);
        }
        printf("\n");
    }

    printf("A matriz de camisas eh:\n");
    for (l = 0; l <= 2 ; l++){
        for (c = 0; c <= 1 ; c++){
            printf("%d ",cam[l][c]);
        }
        printf("\n");
    }

    printf("A matriz de bot * cam eh:\n");
    for (l = 0; l <= 1 ; l++){
        for (c = 0; c <= 1 ; c++){
            printf("%d ",r[l][c]);
        }
        printf("\n");
    }

    return 0;
}
