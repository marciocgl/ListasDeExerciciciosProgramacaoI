#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l = 0, c = 0, m[7][4], menor, plmenor, pcmenor;

    for (l = 0; l <= 6 ; l++){
        for (c = 0; c <= 3 ; c++){
            printf("Digite o numero inteiro da posicao [%d,%d] da matriz:\n",l,c);
            scanf("%d", &m[l][c]);
        }
    }
    system("cls");
    printf("A matriz lida eh:\n");
    for (l = 0; l <= 6 ; l++){
        for (c = 0; c <= 3 ; c++){
            printf("%d ",m[l][c]);
        }
        printf("\n");
    }

    menor = m[0][0];
    plmenor, pcmenor = 0;
    for (l = 0; l <= 6 ; l++){
        for (c = 0; c <= 3 ; c++){
            if (m[l][c] < menor)
            {
                menor = m[l][c];
                plmenor = l;
                pcmenor = c;
            }
        }
    }
    printf("\n");

    printf("\nO menor valor eh %d na posicao [%d][%d]",menor,plmenor,pcmenor);

    return 0;
}
