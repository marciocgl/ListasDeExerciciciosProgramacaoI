#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcular(int n){
   int quadrado, raiz, elev4, resultado ;

    quadrado = n * n ;
    raiz = sqrt(quadrado);
    elev4 = pow(raiz,4);
    resultado = elev4 * n ;

        return resultado ;
}

int main () {

 int n , resultado ;

  printf("Digite um numero: \n");
  scanf("%d",&n);

resultado = calcular(n);

 printf("Resultado: %d",resultado);


    return 0;
}
