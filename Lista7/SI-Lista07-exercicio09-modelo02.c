#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char nome[20];
    int i, tam, soma = 0, somaGeral = 0, cont = 0;
    float media = 0;

    strcpy(nome,"\0");
    printf("Digite um nome: ");
    scanf("%[^\n]s", nome);
    tam = strlen(nome);
    //printf("Tamanho: %d", tam);

    while (tam != 0){

        for (i = 0; i < tam; i++){
            switch(tolower(nome[i])){
                case 'a':
                case 'k':
                case 'u':
                    soma+=0;
                    break;
                case 'b':
                case 'l':
                case 'v':
                    soma+=1;
                    break;
                case 'c':
                case 'm':
                case 'w':
                    soma+=2;
                    break;
                case 'd':
                case 'n':
                case 'x':
                    soma+=3;
                    break;
                case 'e':
                case 'o':
                case 'y':
                    soma+=4;
                    break;
                case 'f':
                case 'p':
                case 'z':
                    soma+=5;
                    break;
                case 'g':
                case 'q':
                    soma+=6;
                    break;
                case 'h':
                case 'r':
                    soma+=7;
                    break;
                case 'i':
                case 's':
                    soma+=8;
                    break;
                case 'j':
                case 't':
                    soma+=9;
                    break;
                default:
                    printf("Letra inexistente!");
            }
        } // fim do switch
        somaGeral += soma;
        cont++;
        printf("Digite um nome: ");
        strcpy(nome,"\0");
        getchar();
        scanf("%[^\n]s", nome);
        tam = strlen(nome);
    } // fim do while

    if (cont != 0){
        media = (float) somaGeral / cont;
        printf("\nSoma geral: %d e media: %.2f", somaGeral, media);
    }else{
        printf("Voce nao leu nomes!");
    }

    return 0;
}
