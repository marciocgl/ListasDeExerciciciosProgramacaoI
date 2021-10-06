#include<stdio.h>
#include<string.h>

int main(){
    int tam = 2;
    char frase[tam], letra, astA[51] = "", astE[51] = "", astI[51] = "", astO[51] = "", astU[51] = "";
    int vogA, vogE, vogI, vogO, vogU, qtdCaracteres, i;

    // inicializando as variáveis
    vogA = vogE = vogI = vogO = vogU = 0;

    printf("Digite uma frase de no maximo 50 caracteres!\n");
    scanf("%[^\n]s", frase);

    // recebendo a quantidade de caracteres digitados pelo usuario
    qtdCaracteres = strlen(frase);

    for(i = 0; i <= qtdCaracteres; i++){
        // converte a letra para minúsculo
        letra = tolower(frase[i]);
        switch (letra){
        case 'a':
            vogA++;
            strcat(astA, "*");
            break;
        case 'e':
            vogE++;
            strcat(astE, "*");
            break;
        case 'i':
            vogI++;
            strcat(astI, "*");
            break;
        case 'o':
            vogO++;
            strcat(astO, "*");
            break;
        case 'u':
            vogU++;
            strcat(astU, "*");
            break;
        }
    }

    printf("A:%s (%d)\n", astA, vogA);
    printf("E:%s (%d)\n", astE, vogE);
    printf("I:%s (%d)\n", astI, vogI);
    printf("O:%s (%d)\n", astO, vogO);
    printf("U:%s (%d)\n", astU, vogU);

    return 0;
}
