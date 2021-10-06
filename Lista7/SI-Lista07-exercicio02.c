#include<stdio.h>
#include<stdlib.h>

/*  srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
    com o valor da função time(NULL). Este por sua vez, é calculado
    como sendo o total  de segundos passados desde 1 de janeiro de 1970
    até a data atual.
    Desta forma, a cada execução o valor da "semente" será diferente.
*/

int main(){
    int num[50], i, qtd0a25 = 0, qtd26a50 = 0, qtd51a75 = 0, qtd76a100 = 0;

    // explicacao acima ^
    srand(time(NULL));

    for(i = 0; i <= 49; i++){
        /*
        do{
        printf("Digite um valor para o num na posicao [%d]\n",i);
        scanf("%d", &num[i]);
        }while((num[i] < 0) || (num[i] > 100));
        */

        // sortenado valores aleatorios
        num[i] = rand() % 100;
        printf("(%d) Numero sorteado: %d\n", i, num[i]);
    }
    // Pausa a tela
    system("pause");
    // Limpa a tela
    system("cls");

    for(i = 0; i <= 49; i++){
        if (num[i] <= 25){
            qtd0a25++;
        }else
            if (num[i] <= 50){
                qtd26a50++;
            }else
                if (num[i] <= 75){
                    qtd51a75++;
                }else{
                    qtd76a100++;
                }
    }

    printf("Quantidade de Numeros entre 0 e 25: %d\n", qtd0a25);
    printf("Quantidade de Numeros entre 26 e 50: %d\n", qtd26a50);
    printf("Quantidade de Numeros entre 51 e 75: %d\n", qtd51a75);
    printf("Quantidade de Numeros entre 76 e 100: %d\n", qtd76a100);

    return 0;
}
