#include<stdio.h>
#include<string.h>

int main()
{

    char nome[20], letra;
    int tam, i, soma = 0, qtdNomes = 0, somaTotal = 0;
    float media;

    printf("Digite um nome: ");
    scanf("%[^\n]s", nome);
    // descobrindo a quantidade de caracteres da palavra
    tam = strlen(nome);

    while (tam != 0){
        // reinicializando a variavel soma
        soma = 0;
        for (i = 0; i < tam; i++){
            letra = nome[i];
            switch (letra){
                case 'a':
                case 'k':
                case 'u':
                    soma += 0;
                    break;
                case 'b':
                case 'l':
                case 'v':
                    soma += 1;
                    break;
                case 'c':
                case 'm':
                case 'w':
                  soma += 2;
                  break;
                case 'd':
                case 'n':
                case 'x':
                    soma += 3;
                    break;
                case 'e':
                case 'o':
                case 'y':
                    soma += 4;
                    break;
                case 'f':
                case 'p':
                case 'z':
                    soma += 5;
                    break;
                case 'g':
                case 'q':
                    soma += 6;
                    break;
                case 'h':
                case 'r':
                    soma += 7;
                    break;
                case 'i':
                case 's':
                    soma += 8;
                    break;
                case 'j':
                case 't':
                    soma += 9;
                    break;
                default:
                  printf("Encontrado espaco ou caracter especial!\n");
                  break;
            }
        }
        printf("\nPalavra %s tem soma de: %d\n", nome, soma);
        // armazenando a soma para descobrir a soma de todos os nomes
        somaTotal += soma;
        // contando quantos nomes foram lidos
        qtdNomes++;

        // pausando a tela
        system("pause");
        // limpando a tela
        system("cls");
        getchar();
        // Limpando e reinicializando a variável nome
        nome[0] = '\0';
        printf("Digite um nome nome: ");
        scanf("%[^\n]s", nome);
        // descobrindo a quantidade de caracteres da palavra
        tam = strlen(nome);
    }

    media = somaTotal/qtdNomes;
    printf("\nNomes lidos: %d nomes", qtdNomes);
    printf("\nSoma total eh: %d", somaTotal);
    printf("\nMedia aritmetica: %.2f", media);

    return 0;
}
