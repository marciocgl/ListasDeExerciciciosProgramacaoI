#include <stdio.h>
#include <string.h>

int main ()
{
  char *str1 = "melancia";
  char *str2 = "melancia";


  if ( strcmp(str1, str2) == 0){

    printf("As palavras sao iguais");
  }else{
     printf("As palavras sao diferentes");
  }

  return(0);
}
