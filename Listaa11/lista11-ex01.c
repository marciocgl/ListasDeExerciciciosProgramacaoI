#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
    char nome[20], uf[3];
    int idade;
};

// prototipação
void imprimirInfo(struct Pessoa p1);

int main(){

    struct Pessoa p1;
    printf("Digite o nome: ");
    scanf("%[^\n]s", p1.nome);
    printf("Digite a idade: ");
    scanf("%d", &p1.idade);
    printf("Digite o estado onde voce mora: ");
    scanf("%s", p1.uf);

    imprimirInfo(p1);

    return 0;
}

void imprimirInfo(struct Pessoa p1){
    if (stricmp(p1.uf,"ES")==0){
        if (p1.idade > 17){
            printf("Seu nome e %s, voce e maior de idade e capixaba", p1.nome);
        }else{
            printf("Seu nome e %s, voce e menor de idade e capixaba", p1.nome);
        }
    }else
        if (stricmp(p1.uf,"MG")==0){
            if (p1.idade > 17){
                printf("Seu nome e %s, voce e maior de idade e mineiro", p1.nome);
            }else{
                printf("Seu nome e %s, voce e menor de idade e mineiro", p1.nome);
            }
        }else{
            printf("Seu nome e %s, voce tem %d anos e mora no %s",
                   p1.nome, p1.idade, p1.uf);
        }

}



