programa
{
	inclua biblioteca Util --> U
	funcao inicio()
	{
		inteiro n

		escreva("Digite um n�mero: ")
		leia(n)
		
		enquanto (n != 0){
			limpa()
			escreva("Antecessor: ", n-1, "\n")
			escreva("N�mero: ", n, "\n")
			escreva("Sucessor: ", n+1, "\n")
			U.aguarde(3000)
			escreva("Digite um n�mero: ")
			leia(n)			
		}
		limpa()
		escreva("\n\nObrigado por utilizar o sistema!")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 336; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */