programa
{
	funcao inicio()
	{
		inteiro matr, a, s
		escreva("Digite uma matr�cula padr�o AASDDD: ")
		leia(matr)

		a = (matr / 10000)
		s = (matr % 10000) / 1000		
		
		escreva("Ano: ", a, "\n")
		escreva("Semestre: ", s, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 190; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */