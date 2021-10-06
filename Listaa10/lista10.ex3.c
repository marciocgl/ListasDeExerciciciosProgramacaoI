#include <stdio.h>
#include <stdlib.h>


int calcularPotencia(int n, int pot){

    int resultado = 1, i;

    for(i = 1 ; i <= pot ; i ++ ){

        resultado = resultado * n ;

    }

        return resultado ;
}

int main (){

int n, pot, resultado = 0; ;

    printf("Digite o numero: ");
    scanf("%d",&n);

    printf("Digite a potencia: ");
    scanf("%d",&pot);

resultado = calcularPotencia(n,pot);

    printf("O resultado eh: %d", resultado);

    return 0 ;
}
