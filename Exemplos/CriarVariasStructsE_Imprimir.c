#include <stdio.h>
#include <stdlib.h>


typedef struct Pessoa {

    char nome[20];
    int cpf ;

}Pessoa;


int main (){
int i ;


Pessoa p[2] ;


for(i = 0 ; i < 2 ; i ++){

printf("Digite um nome: ");
scanf("%s",p[i].nome);
printf("Digite um cpf: ");
scanf("%d",&p[i].cpf);

}

for (i = 0 ; i < 2 ; i ++){

printf("NOME: %s\n", p[i].nome);
printf("CPF: %d\n", p[i].cpf);
}
    return 0;


    system("pause");
}

