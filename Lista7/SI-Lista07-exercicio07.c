#include<stdio.h>
#include<stdlib.h>

/*  srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
    com o valor da função time(NULL). Este por sua vez, é calculado
    como sendo o total  de segundos passados desde 1 de janeiro de 1970
    até a data atual.
    Desta forma, a cada execução o valor da "semente" será diferente.
*/

int main(){
    int dados[50][6], i, j, totalEsp = 0, maiorNumEsp = 0, partidaMaiorEsp = 0, qtdPartPolMenor30 = 0;
    int partidasPolMenor30[50], partidasSemCriancas[50], qtdPartSemCriancas = 0, totalPublicoNaoPagante = 0;

    // explicacao acima ^
    srand(time(NULL));

    printf("\tRecebendo dados da tabela de publico");
    for(i = 0; i <= 49; i++){

        // sorteando valores aleatorios
        dados[i][0] = rand() % 100;

        // Recebendo o numero de socios da partida
        printf("\nDigite o numero de socios da partida %d", i);
        //scanf("%d", &dados[i][0]);
        // sorteando valores aleatorios
        dados[i][0] = rand() % 100;

        // Recebendo o numero de nao socios da partida
        printf("\nDigite o numero de nao socios da partida %d", i);
        //scanf("%d", &dados[i][1]);
        // sorteando valores aleatorios
        dados[i][1] = rand() % 100;

        // Recebendo o numero de criancas da partida
        printf("\nDigite o numero de criancas da partida %d", i);
        //scanf("%d", &dados[i][2]);
        // sorteando valores aleatorios
        dados[i][2] = rand() % 100;

        // Recebendo o numero de convidados da partida
        printf("\nDigite o numero de convidados da partida %d", i);
        //scanf("%d", &dados[i][3]);
        // sorteando valores aleatorios
        dados[i][3] = rand() % 100;

        // Recebendo o numero de policiais da partida
        printf("\nDigite o numero de policiais da partida %d", i);
        //scanf("%d", &dados[i][4]);
        // sorteando valores aleatorios
        dados[i][4] = rand() % 100;

        // Recebendo o numero de imprensa da partida
        printf("\nDigite o numero de pessoas da imprensa da partida %d", i);
        //scanf("%d", &dados[i][5]);
        // sorteando valores aleatorios
        dados[i][5] = rand() % 100;
    }

    for(i = 0; i <= 49; i++){
        // resolvendo a letra a, ou seja, o numero de expectadores
        totalEsp = 0;
        for(j = 0; j <= 3; j++){
            totalEsp += dados[i][j];
        }
        if (totalEsp > maiorNumEsp){
            // guarda o maior numero de espectadores
            maiorNumEsp = totalEsp;
            // guarda a partida que teve o maior numero de espectadores
            partidaMaiorEsp = i;
        }

        // resolvendo a letra b, ou seja, quais partidas o numero de policiais foi inferior a 30% dos espectadores
        if (dados[i][4] < (totalEsp * 0.3)){
            partidasPolMenor30[qtdPartPolMenor30] = i;
            qtdPartPolMenor30++;
        }

        // resolvendo a letra c, ou seja, quais partidas não tivemos crianças
        if (dados[i][2] == 0){
            partidasSemCriancas[qtdPartSemCriancas] = i;
            qtdPartSemCriancas++;
        }

        // resolvendo a letra d, ou seja, o total de publico nao pagante
        totalPublicoNaoPagante += (dados[i][2] + dados[i][3] + dados[i][4] + dados[i][5]);
    }

        // limpando a tela
        system("cls");

        // imprimindo da letra a
        printf("Letra A: O jogo com maior numero de espectadores (%d) eh: %d", maiorNumEsp, partidaMaiorEsp+1);

        // imprimindo da letra b
        if (qtdPartPolMenor30 > 0){
            printf("\nLetra B: Jogos em que o numero de policiais era menor que 30%% dos espectadores");
            for(i = 0; i < qtdPartPolMenor30; i++){
                printf("\nJogo: %d | Numero de Policiais: %d", partidasPolMenor30[i]+1, dados[partidasPolMenor30[i]][4]);
            }
        }else{
            printf("\nLetra B: Nao tivemos partidas em que o numero de policiais era menor que 30% dos espectadores!");
        }

        // imprimindo da letra c
        if (qtdPartSemCriancas > 0){
            printf("\nLetra C: Jogos em que nao houve presenca de criancas");
            for(i = 0; i < qtdPartSemCriancas; i++){
                printf("\nJogo: %d", partidasSemCriancas[i]);
            }
        }else{
            printf("\nLetra C: Nao tivemos partidas em que nao houve criancas!");
        }

         // imprimindo da letra d
        printf("\nLetra D: Total de publico nao pagante: %d", totalPublicoNaoPagante);

    return 0;
}
