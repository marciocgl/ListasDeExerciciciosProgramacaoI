programa
{
	funcao inicio()
	{
		inteiro num

		escreva("Digite um número: ")
		leia(num)

		se (num > 0){
			se (num % 2 == 0){
				escreva(num, " é par")
			}senao{
				escreva(num, " é ímpar")
			}
		}senao
			se (num == 0){
				escreva("O número é zero")
			}senao{
				escreva("O número não é positivo")
			}			
    	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 313; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */