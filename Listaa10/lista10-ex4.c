#include <stdio.h>
#include <stdlib.h>

int eh_primo(n){

    int i, qtdDiv = 0 ;

       for (i = 1 ; i <= n; i ++){

            if(n % i == 0){
                qtdDiv ++;
            }
        }

        if(qtdDiv == 2){
                    return 1 ;
                }else{
                    return 0 ;
                }
}
int main (){

int n, result;

    printf("Digite um numero: ");
    scanf("%d",&n);

 result =  eh_primo(n);

    if (result == 1){
        printf("Eh primo !");
    }else
        {
        printf("Nao primo !");
        }


    return 0;
}
