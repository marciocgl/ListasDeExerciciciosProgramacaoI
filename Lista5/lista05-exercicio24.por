programa
{
	funcao inicio()
	{
		inteiro n, c, d, u, ni
		escreva("Digite um número: ")
		leia(n)

		c = n / 100
		d = (n % 100) / 10
		u = n % 10

		ni = (u * 100) + (d * 10) + c
		escreva("Número normal: ", n, "\n")
		escreva("Número inverso: ", ni, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 33; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */