programa
{	
	funcao inicio()
	{

	    inteiro fat = 0, qtddiv, soma, i, m
         caracter resp

         faca{
		   limpa()
		   // codigo para um numero
		   faca{
		      escreva("Digite um número inteiro e positivo: ")
		      leia(m)
		   }enquanto (m <= 0)
		
		   se (m % 2 == 0) { // par
		      qtddiv = 0
		      para (i = m; i >= 1; i--){
		         se (m % i == 0){
		            qtddiv++
		         }
		      }
		      escreva("Qtd de divisores: ", qtddiv, "\n")
             }senao   // impar
		      se (m < 12) { // calcular o fatorial
		         fat = 1
		         para (i = m; i >= 1; i--){
		            fat *= i
		         }
		         escreva("Fatorial: ", fat, "\n")
		      }senao{
		         soma = 0
		         i = m
		         enquanto (i >= 1) {
		            soma += i
		            i--
                   }
		         escreva("Soma: ", soma, "\n")
		      }
		
		   // fim do codigo para um numero
		
		   escreva("Deseja continuar digitando numeros? S para sim e N para nao!: ")
		   leia(resp)
         }enquanto (resp != 'N')
		
		
		escreva("Obrigado por utilizar o sistema!")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 687; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */