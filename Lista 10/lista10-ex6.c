#include <stdio.h>
#include <stdlib.h>

    void exibirMenu(){
        printf("\n#################################\n");
        printf("######### CALCULADORA ###########\n");
        printf("### DIGITE 1 PARA SOMAR       ###\n");
        printf("### DIGITE 2 PARA SUBTRAIR    ###\n");
        printf("### DIGITE 3 PARA MULTIPLICAR ###\n");
        printf("### DIGITE 4 PARA DIVIDIR     ###\n");
        printf("#################################\n");
    }

    float Somar(float n1, float n2){
        int soma = 0;

            soma = n1 + n2 ;

        return soma ;
    }

    float Subtrair(float n1, float n2){
        int subtracao = 0;

            subtracao = n1 - n2 ;

        return subtracao ;
    }

    float Multiplicar(float n1,float n2){
        int multiplicacao = 0;

            multiplicacao = n1 * n2 ;

        return multiplicacao ;
    }

    float Dividir(float n1,float n2){
        int divisao = 0;

            divisao = n1 / n2 ;

        return divisao ;
    }

int main (){

    float n1,n2, result ;
    int opc ;
    char resp ;

do{
    printf("\nDigite o primeiro numero: ");
    scanf("%f",&n1);
     printf("\nDigite o segundo numero: ");
    scanf("%f",&n2);

   exibirMenu();

   printf("Digite a opcao desejada: ");
   scanf("%d",&opc);

    switch(opc){

    case 1 :
     result = Somar(n1,n2);
        printf("\nSoma: %2.f\n", result);
        break ;
    case 2 :
       result = Subtrair(n1,n2);
        printf("\nSubtracao: %2.f\n", result);
        break ;

    case 3 :
      result =  Multiplicar(n1,n2);
        printf("\nMultiplicacao: %2.f\n", result);
        break ;

    case 4 :
      result =  Dividir(n1,n2);
        printf("\nDivisao: %2.f\n", result);
        break ;

    default:
        printf("\nDigite apenas numeros de 1 a 4 \n");
        break;
    }



    printf("\nDeseja continuar ?: ");
    getchar();
    scanf("%c",&resp);



}while(resp != 'n');

    return 0;
}
