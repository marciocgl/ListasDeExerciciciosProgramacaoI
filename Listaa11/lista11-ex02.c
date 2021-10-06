#include <stdio.h>
#include <stdlib.h>

 struct Candidato{

    char nome[20];
    int numero ;
    char partido[8];
    int totalVotos ;

    };

void exibirMenu(){
        printf("\n################################################\n");
        printf("########## SISTEMA DE PROCESSO ELEITORAL #########\n");
        printf("### 1 - ADICIONAR VOTO                         ###\n");
        printf("### 2 - EXIBIR TOTAL DE VOTOS DOS CANDIDATOS   ###\n");
        printf("### 3 - EXIBIR CANDIDATO GANHADOR              ###\n");
        printf("### 4 - SAIR                                   ###\n");
        printf("##################################################\n");
    }


int AdicionarVotos(int n){
   int totalVotos = 0 ;

    if (voto = 1){

        struct Candidato c1. =
    }


   return totalVotos;
}

int TotalVotosPorCandidato (){


}

int CandidatoGanhador (){


}




int main (){

    int opc ;

        struct Candidato c1 ;
            c1.nome = "Dilma" ;
            c1.numero = 1 ;
            c1.partido = "PT"
        struct Candidato c2 ;
            c2.nome = "Eymael" ;
            c2.numero = 2
             c3.partido = "PSDC"
        struct Candidato c3 ;
            c3.nome = "Marina" ;
            c3.numero = 3 ;
            c3.partido = "PSB"
        struct Candidato c4 ;
            c4.nome = "Serra" ;
            c4.numero = 4 ;
            c3.partido = "PSDB"


    exibirMenu();

        switch(opc){

            case 1 :

                printf("\n1-s% | 2-s% | 3-s% | 4-s% \n",c1.nome,c2.nome,c3.nome,c4.nome);
                printf("Digite seu voto: ");
                scanf("%d",&)

                break ;
            case 2 :

                break ;
            case 3 :

                break ;
            case 4 :
                printf("Saindo do programa ... ");

                break ;
            default :
                printf("Opcao invalida!!");
                break;
        }

        return 0 ;
    }
