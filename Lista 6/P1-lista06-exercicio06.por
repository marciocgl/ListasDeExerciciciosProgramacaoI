programa
{
	inclua biblioteca Util --> U
	funcao inicio()
	{
		inteiro n

		escreva("Digite um número: ")
		leia(n)
		
		enquanto (n != 0){
			limpa()
			escreva("Antecessor: ", n-1, "\n")
			escreva("Número: ", n, "\n")
			escreva("Sucessor: ", n+1, "\n")
			U.aguarde(3000)
			escreva("Digite um número: ")
			leia(n)			
		}
		limpa()
		escreva("\n\nObrigado por utilizar o sistema!")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 336; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */