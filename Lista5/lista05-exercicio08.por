programa
{
	funcao inicio()
	{
		inteiro n1, n2, n3, soma
		real media

		escreva("Digite a primeira nota: ")
		leia(n1)
		escreva("Digite a segunda nota: ")
		leia(n2)
		escreva("Digite a terceira nota: ")
		leia(n3)

		soma = n1 + n2 + n3
		media = soma / 3.0

		escreva("Soma: ", soma, "\n")
		escreva("Média: ", media, "\n")
		escreva("Mod de n1 por n2: ", n1 % n2, "\n")
		escreva("(Mod de n1 por n2) div n3: ", (n1 % n2) / n3)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 412; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */