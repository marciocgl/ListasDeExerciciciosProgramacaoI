#include <stdio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand(), srand() e system()
#include <time.h>//necess�rio p/ fun��o time()

/*  srand(time(NULL)) objetiva inicializar o gerador de n�meros aleat�rios
    com o valor da fun��o time(NULL). Este por sua vez, � calculado
    como sendo o total  de segundos passados desde 1 de janeiro de 1970
    at� a data atual.
    Desta forma, a cada execu��o o valor da "semente" ser� diferente.
*/

int main()
{
    int l = 0, c = 0, num[5][6];
    char resp;

    // explicacao acima ^
    srand(time(NULL));

    // faz a leitura dos valores da matriz
    for (l = 0; l < 5 ; l++)
    {
        for (c = 0; c < 6 ; c++)
        {
            //printf("Digite o numero inteiro da posicao [%d,%d] da matriz:\n",l,c);
            //scanf("%d", &num[l][c]);

            // sortenado valores aleatorios
            num[l][c] = rand() % 100;
            printf("Numero sorteado da posicao [%d][%d]: %d\n", l,c, num[l][c]);
        }
    }

    // limpa a tela
    system("cls");
    // imprimindo a matriz lida
    printf("A matriz lida eh:\n");
    for (l = 0; l < 5 ; l++)
    {
        for (c = 0; c < 6 ; c++)
        {
            printf("%d ",num[l][c]);
        }
        printf("\n");
    }

    // pulando uma linha
    printf("\n");

    do{
        // estrutura de repeita��o para garantir que o valor da linha (l) lido esteja entre 0 e 4
        do{
            printf("\nDigite a linha que voce quer exibir:\n");
            scanf("%d",&l);
        }while ((l < 0) || (l > 4));

        // estrutura de repeita��o para garantir que o valor da coluna(c) lido esteja entre 0 e 5
        do{
            printf("\nDigite a coluna que voce quer exibir:\n");
            scanf("%d",&c);
        }while ((c < 0) || (c > 5));

        printf("\n");
        printf("\nO numero armazenado na posicao [%d][%d] eh: %d ",l,c,num[l][c]);
        printf("\n");
        printf("\nDeseja continuar visualizando numeros? s ou n?");
        getchar();
        // repete o processo at� que o usuario digite n
        scanf("%c",&resp);
    }while (resp != 'n');

    return 0;
}
