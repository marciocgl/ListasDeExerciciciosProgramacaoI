#include<stdio.h>
#include<stdlib.h>

/*  srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
    com o valor da função time(NULL). Este por sua vez, é calculado
    como sendo o total  de segundos passados desde 1 de janeiro de 1970
    até a data atual.
    Desta forma, a cada execução o valor da "semente" será diferente.
*/

int main(){
    int i, reg;
    char dados[10][4][20];

    // explicacao acima ^
    srand(time(NULL));

    for(i = 0; i <= 9; i++){
        // limpando a tela
        system("cls");

        printf("\tLendo o registro %d\n", i+1);
        printf("Digite o nome: ");
        scanf("%[^\n]s", dados[i][0]);
        printf("Digite a cidade: ");
        scanf("%s", dados[i][1]);
        printf("Digite o telefone: ");
        scanf("%s", dados[i][2]);
        printf("Digite o email: ");
        scanf("%s", dados[i][3]);
        getchar();
    }

    // limpando a tela
    system("cls");

    do{
        printf("Digite o numero do registro que deseja exibir (1 a 10):\n");
        scanf("%d", &reg);
    }while((reg <= 0) || (reg > 10));

    printf("\n\tExibindo o registro %d :\n", reg);
    printf("Nome %s :\n", dados[reg-1][0]);
    printf("Cidade %s :\n", dados[reg-1][1]);
    printf("Telefone %s :\n", dados[reg-1][2]);
    printf("Email %s :\n", dados[reg-1][3]);

    return 0;
}
