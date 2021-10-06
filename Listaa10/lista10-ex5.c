#include <stdio.h>
#include <stdlib.h>

int maiorNumero(int n1, int n2){

                if (n1 > n2){
                    return n1 ;
                }else {
                    return n2 ;
                }
}

int main (){

 int n1, n2, result ;

        printf("Digite um numero: ");
        scanf("%d",&n1);
        printf("Digite outro numero: ");
        scanf("%d",&n2);

    result = maiorNumero(n1,n2) ;


        printf("O maior numero digitado foi: %d", result);

    return 0;

}
