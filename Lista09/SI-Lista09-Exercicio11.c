#include <stdio.h>
#include <stdlib.h>// necessário p/ a função system()


int main(){
    int l, c, n;

    // repeticao para garantir que seja digitado um valor acima de 0
    do{
        printf("Digite a quantidade de quadros a serem exibidos:\n");
        scanf("%d", &n);
    }while(n <=0);

    for(l = 0; l < n; l++){
        for(c = 0; c < n; c++){
            if ((l == 0) || (l == (n-1)) || (c == 0) || (c == (n-1))){
                printf("# ");
            }else{
                printf("  ");
            }
        }
        // quebra linha para imprimir a próxima linha da matriz
        printf("\n");

    }
    return 0;
}
