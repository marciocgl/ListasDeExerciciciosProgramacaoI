programa
{
	funcao inicio()
	{
		real sal, fin

		escreva("Digite o sal�rio da pessoa: ")
		leia(sal)

		escreva("Digite o valor a ser emprestado: ")
		leia(fin)

		se (fin <= (5 * sal)){
			escreva("Financiamento Concedido!\n")
		}senao{
			escreva("Financiamento Negado!\n")
		}

		escreva("Obrigado por nos consultar!")
					
    	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 319; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */