#include <stdio.h>
#include <stdlib.h>




int main ()
{


    int num[10][10] ;
    int l, c, i = 0 ;
    int nPar[10][10],nPrimo[10][10],nImpar[10][10] ;
    int div = 0 ;

    for (l = 0 ; l < 10; l ++)
    {
        for (c = 0 ; c < 10; c ++)
        {

            num[l][c] = rand() % 100 ;


        }
    }


    printf("\nExibindo MATRIZ\n");

    for (l = 0 ; l < 10; l ++)
    {
        for (c = 0 ; c < 10; c ++)
        {


            printf("| %d ", num[l][c]);



        }
        printf("\n");

    }


// GERANDO MATRIZ DOS PARES
    for (l = 0 ; l < 10; l ++)
    {
        for (c = 0 ; c < 10; c ++)
        {



            if(num[l][c] % 2 == 0)
            {

                nPar[l][c] = num[l][c] ;


            }
            else
            {
                nPar[l][c] = 0 ;

            }


        }

    }

 //Gerando matriz de numeroes impares

    for (l = 0 ; l < 10; l ++)
    {
        for (c = 0 ; c < 10; c ++)
        {



            if(num[l][c] % 2 == 0)
            {


                nImpar[l][c] = 0 ;

            }
            else
            {
                nImpar[l][c] = num[l][c] ;

            }


        }

    }

// Gerando Numeros primos

    for (l = 0 ; l < 10; l ++)
    {
        for (c = 0 ; c < 10; c ++)
        {
            div = 0;

            for(i = 1 ; i <= 10 ; i ++)
            {
                if(num[l][c] % i == 0 )
                {
                    div++ ;
                }
                if(div == 2)
                {
                    nPrimo[l][c] = num[l][c] ;
                }
                else{
                    nPrimo[l][c] = 0 ;
                }

            }
        }
    }

    printf("\n--------------------------------\n\n" ) ;
    printf("\nNumeros PARES: \n");

    for (l = 0 ; l < 10; l ++)
    {
        for (c = 0 ; c < 10; c ++)
        {

            printf("| %d ", nPar[l][c]);

        }

        printf("\n");
    }


    printf("\n--------------------------------\n\n" ) ;
    printf("\nNumeros IMPARES: \n");

    for (l = 0 ; l < 10; l ++)
    {
        for (c = 0 ; c < 10; c ++)
        {

            printf("| %d ", nImpar[l][c]);

        }

        printf("\n");
    }

    printf("\n--------------------------------\n\n" ) ;
    printf("\nNumeros PRIMOS: \n");


        for (l = 0 ; l < 10; l ++)
    {
        for (c = 0 ; c < 10; c ++)
        {

            printf("| %d ", nPrimo[l][c]);

        }

        printf("\n");
    }

    return 0 ;
}
