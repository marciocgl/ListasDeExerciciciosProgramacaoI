programa
{
	funcao inicio()
	{
		real sb, sl, prev, inss

		escreva("Digite o valor do salario: ")
		leia(sb)

		prev = sb * 10.0/100.0 // sb * 0.1
		inss = (sb - prev) * 5.0/100.0 // sb * 0.05
		sl = sb - prev - inss

		escreva("Salário liquido: ", sl)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 193; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */