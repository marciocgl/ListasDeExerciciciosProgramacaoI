#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l = 0, c = 0;
    float vendas[4][5], soma = 0.0;

    for (l = 0; l <= 2 ; l++){
        for (c = 0; c <= 3 ; c++){
            printf("Digite o valor da venda referente a semana %d do vendedor %d:\n",c+1,l+1);
            scanf("%f", &vendas[l][c]);
        }
    }
    system("cls");
    printf("A matriz lida eh:\n");
    for (l = 0; l <= 2 ; l++){
        for (c = 0; c <= 3 ; c++){
            printf("%.2f ",vendas[l][c]);
        }
        printf("\n");
    }

    printf("\n");
    // calculando o total de vendas de cada vendedor
    for (l = 0; l <= 2; l++){
        soma = 0.0;
        for (c = 0; c <= 3; c++){
           soma += vendas[l][c];
        }
        vendas[l][4] = soma;
    }

    // calculando o total de vendas de cada semana
    for (c = 0; c <= 3; c++){
        soma = 0.0;
        for (l = 0; l <= 2; l++){
            soma += vendas[l][c];
        }
        vendas[3][c] = soma;
    }
    printf("\n");
    printf("\nA matriz gerada eh:\n");
    for (l = 0; l <= 3 ; l++){
        for (c = 0; c <= 4 ; c++){
            printf("%.2f ",vendas[l][c]);
        }
        printf("\n");
    }

    return 0;
}
