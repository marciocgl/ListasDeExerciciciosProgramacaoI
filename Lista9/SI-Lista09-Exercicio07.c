#include <stdio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include <time.h>//necess�rio p/ fun��o time()

/*  srand(time(NULL)) objetiva inicializar o gerador de n�meros aleat�rios
    com o valor da fun��o time(NULL). Este por sua vez, � calculado
    como sendo o total  de segundos passados desde 1 de janeiro de 1970
    at� a data atual.
    Desta forma, a cada execu��o o valor da "semente" ser� diferente.
*/

int main(){
    int i=0, v1[3], v2[3], vr[6];

    // explicacao acima ^
    srand(time(NULL));

    // lendo os valores para o primeiro vetor
    for (i = 0; i <= 2 ; i++){
        //printf("Digite um valor para o v1 na posicao [%d]\n",i);
        //scanf("%d", &v1[i]);

        // sortenado valores aleatorios
        v1[i] = rand() % 100;
        printf("(%d) Numero sorteado: %d\n", i, v1[i]);
    }
    printf("\n");

    // lendo os valores para o segundo vetor
    for (i = 0; i <= 2 ; i++){
        //printf("Digite um valor para o v2 na posicao [%d]\n",i);
        //scanf("%d", &v2[i]);

        // sortenado valores aleatorios
        v2[i] = rand() % 100;
        printf("(%d) Numero sorteado: %d\n", i, v2[i]);
    }

    // montando o terceiro vetor
    for (i = 0; i <= 5 ; i++){
        if (i <= 2){
            vr[i] = v1[i];
        }else{
            vr[i] = v2[i-3];
        }
    }

    // pausa a tela
    system("pause");

    // imprimindo o terceiro vetor (vetor resultante)
    printf("O vetor resultante eh:\n");
    for (i = 0; i <= 5 ; i++){
        printf("%d ", vr[i]);
    }

    return 0;
}
