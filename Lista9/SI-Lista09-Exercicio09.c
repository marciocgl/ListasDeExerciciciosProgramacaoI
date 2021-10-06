#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l = 0, c = 0, num[3][3];

    for (l = 0; l <= 2 ; l++){
        for (c = 0; c <= 2 ; c++)
        {
            num[l][c] = l + c;
        }
    }

    // limpa a tela
    system("cls");
    printf("A matriz elaborada eh:\n");
    for (l = 0; l <= 2 ; l++)
    {
        for (c = 0; c <= 2 ; c++){
            printf("%d ",num[l][c]);
        }
        printf("\n");
    }

    return 0;
}
