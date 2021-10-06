programa
{
	funcao inicio()
	{
		inteiro matr, a, s
		escreva("Digite uma matrícula padrão AASDDD: ")
		leia(matr)

		a = (matr / 10000)
		s = (matr % 10000) / 1000		
		
		escreva("Ano: ", a, "\n")
		escreva("Semestre: ", s, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 190; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */