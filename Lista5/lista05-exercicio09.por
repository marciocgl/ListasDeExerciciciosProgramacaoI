programa
{
	funcao inicio()
	{
		cadeia nomeProd
		real precoUnitario, porc, vDesconto

		escreva("Digite o nome do produto: ")
		leia(nomeProd)
		escreva("Digite o preço do produto: ")
		leia(precoUnitario)
		escreva("Digite a porcentagem de desconto: ")
		leia(porc)

		vDesconto = (precoUnitario * porc) / 100
		limpa()
		escreva("Nome do produto: ", nomeProd, "\n")
		escreva("Preço do produto: ", precoUnitario, "\n")
		escreva("Valor do desconto: ", vDesconto, "\n")
		escreva("Valor Prod após desconto: ", 
		    precoUnitario - vDesconto, "\n")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 322; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */