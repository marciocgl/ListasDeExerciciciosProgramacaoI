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
    int tam = 0, i=0;

    do{
        printf("Digite um valor entre 1 e 30 para o tamanho do vetor:\n");
        scanf("%d", &tam);
    }while ((tam < 1) || (tam > 30));

    // declarando o vetor a partir do tamanho informado pelo usuario
    int vA[tam], vB[tam], vC[tam * 2];

    // explicacao acima ^
    srand(time(NULL));

    // lendo os valores para o primeiro vetor
    printf("VETOR A:\n");
    for (i = 0; i < tam ; i++){
        //printf("Digite um valor para o v1 na posicao [%d]\n",i);
        //scanf("%d", &vA[i]);

        // sortenado valores aleatorios
        vA[i] = rand() % 100;
        printf("(%d) Numero sorteado: %d\n", i, vA[i]);
    }

    // pulando uma linha
    printf("\n");

    // lendo os valores para o segundo vetor
    printf("VETOR B:\n");
    for (i = 0; i < tam ; i++){
        //printf("Digite um valor para o v1 na posicao [%d]\n",i);
        //scanf("%d", &vB[i]);

        // sortenado valores aleatorios
        vB[i] = rand() % 100;
        printf("(%d) Numero sorteado: %d\n", i, vB[i]);
    }

    // montandoo os valores para o terceiro vetor
    for (i = 0; i < (tam * 2) ; i+=2){
        vC[i]   = vA[i/2];
        vC[i+1] = vB[i/2];
    }
    printf("\n");

    // pausa a tela
    system("pause");

    // imprimindo o terceiro vetor (vetor resultante)
    printf("O vetor resultante eh:\n");
    for (i = 0; i < (tam * 2) ; i++){
        printf("%d ", vC[i]);
    }

    return 0;
}
