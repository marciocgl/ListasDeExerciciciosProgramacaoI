#include<stdio.h>
#include<stdlib.h>

/*  srand(time(NULL)) objetiva inicializar o gerador de n�meros aleat�rios
    com o valor da fun��o time(NULL). Este por sua vez, � calculado
    como sendo o total  de segundos passados desde 1 de janeiro de 1970
    at� a data atual.
    Desta forma, a cada execu��o o valor da "semente" ser� diferente.
*/

int main(){
    int num[50], i, qtd = 0;

    // explicacao acima ^
    srand(time(NULL));

    for(i = 0; i <= 49; i++){
        //printf("Digite um valor para o num na posicao [%d]\n",i);
        //scanf("%d", &num[i]);

        // sortenado valores aleatorios
        num[i] = rand() % 15;
        printf("(%d) Numero sorteado: %d\n", i, num[i]);
    }
    // Pausa a tela
    system("pause");
    // Limpa a tela
    system("cls");

    for(i = 0; i <= 49; i++){
        if (num[i] == 10){
            printf("Numero igual a 10 encontrado na posicao: %d\n", i);
            qtd++;
        }
    }

    // Condicional para o caso de n�o encontrar nenhum nuero 10
    if (qtd == 0){
        printf("Nenhum numero 10 encontrado!");
    }


    return 0;
}
