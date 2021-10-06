#include<stdio.h>

// prototipação
void lerVetor(int *vet, int n);
void imprimirVetor(int *vet, int n);
void gerarVetorResultante(int *vetR, int *vetA, int *vetB, int n);

int main(){
    int n = 5;
    int vetA[5], vetB[5], vetR[5], i;

    printf("\nLendo o vetor A:\n");
    lerVetor(vetA, n);
    printf("\nLendo o vetor B:\n");
    lerVetor(vetB, n);

    gerarVetorResultante(vetR,vetA,vetB,n);

    printf("\nImprimindo o vetor A:\n");
    imprimirVetor(vetA,n);
    printf("\nImprimindo o vetor B:\n");
    imprimirVetor(vetB,n);
    printf("\nImprimindo o vetor R:\n");
    imprimirVetor(vetR,n);

    return 0;
}

void lerVetor(int *vet, int n){
    int i;
    for (i = 0; i < n; i++){
        printf("Digite um numero inteiro:");
        scanf("%d",&vet[i]);
    }
}

void imprimirVetor(int *vet, int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%d ",vet[i]);
    }
}

void gerarVetorResultante(int *vetR, int *vetA, int *vetB, int n){
    int i;
    for (i = 0; i < n; i++){
        vetR[i] = vetA[i] * vetB[(n-1)-i];
    }
}
