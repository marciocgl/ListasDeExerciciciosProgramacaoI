#include<stdio.h>
#include<string.h>

int main()
{

    char nome[20], letra;
    int tam, i, soma = 0;

    printf("Digite um nome: ");
    scanf("%[^\n]s", nome);

    tam = strlen(nome);

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

    printf("\nSoma eh: %d", soma);

    return 0;
}
