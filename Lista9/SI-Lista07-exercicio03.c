#include<stdio.h>
#include<stdlib.h>

/*  srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
    com o valor da função time(NULL). Este por sua vez, é calculado
    como sendo o total  de segundos passados desde 1 de janeiro de 1970
    até a data atual.
    Desta forma, a cada execução o valor da "semente" será diferente.
*/

int main(){
    int vetA[5], vetB[5], vetR[5], i;

    // explicacao acima ^
    srand(time(NULL));

    printf("\tLendo os numeros do vetor A\n");
    for(i = 0; i <= 4; i++){
        //printf("Digite o numero: ");
        //scanf("%d", &vetA[i]);

        // sorteando valores aleatorios
        vetA[i] = rand() % 10;
        printf("Numero sorteado: %d\n", vetA[i]);
    }

    // limpando a tela
    system("cls");
    printf("\tLendo os numeros do vetor B\n");
    for(i = 0; i <= 4; i++){
        //printf("Digite o numero: ");
        //scanf("%d", &vetB[i]);

        // sorteando valores aleatorios
        vetB[i] = rand() % 10;
        printf("Numero sorteado: %d\n", vetB[i]);
    }

    printf("\tMontando o vetor R...\n");
    for(i = 0; i <= 4; i++){
        vetR[i] = vetA[i] * vetB[4-i];
    }

    // limpando a tela
    system("cls");
    printf("\tNumeros do vetor A\n");
    for(i = 0; i <= 4; i++){
        printf("%d ", vetA[i]);
    }

    printf("\n\n\tNumeros do vetor B\n");
    for(i = 0; i <= 4; i++){
        printf("%d ", vetB[i]);
    }

    printf("\n\n\tNumeros do vetor R\n");
    for(i = 0; i <= 4; i++){
        printf("%d ", vetR[i]);
    }

    return 0;
}
