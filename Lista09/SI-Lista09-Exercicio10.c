#include <stdio.h>
#include <stdlib.h>// necessário p/ as funções rand(), srand() e system()
#include <time.h>//necessário p/ função time()

/*  srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
    com o valor da função time(NULL). Este por sua vez, é calculado
    como sendo o total  de segundos passados desde 1 de janeiro de 1970
    até a data atual.
    Desta forma, a cada execução o valor da "semente" será diferente.
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
        // estrutura de repeitação para garantir que o valor da linha (l) lido esteja entre 0 e 4
        do{
            printf("\nDigite a linha que voce quer exibir:\n");
            scanf("%d",&l);
        }while ((l < 0) || (l > 4));

        // estrutura de repeitação para garantir que o valor da coluna(c) lido esteja entre 0 e 5
        do{
            printf("\nDigite a coluna que voce quer exibir:\n");
            scanf("%d",&c);
        }while ((c < 0) || (c > 5));

        printf("\n");
        printf("\nO numero armazenado na posicao [%d][%d] eh: %d ",l,c,num[l][c]);
        printf("\n");
        printf("\nDeseja continuar visualizando numeros? s ou n?");
        getchar();
        // repete o processo até que o usuario digite n
        scanf("%c",&resp);
    }while (resp != 'n');

    return 0;
}
