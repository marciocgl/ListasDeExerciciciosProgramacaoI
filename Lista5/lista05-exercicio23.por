programa
{
	funcao inicio()
	{
		inteiro cod, a, b, c, d, eh, s, digV

		escreva("Digite um n�mero de 5 algarismos: ")
		leia(cod)

		a = cod / 10000
		b = (cod % 10000) / 1000
		c = (cod % 1000) / 100
		d = (cod % 100) / 10
		eh = cod % 10

		s = (6 * a) + (5 * b) + (4 * c) + 
			(3 * d) + (2 * eh)
		digV = s % 7

		escreva("O d�gito v � igual a: ", digV)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 313; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */