programa
{
	funcao inicio()
	{

		cadeia nome 
		real sal,salLiq, impRenda

		escreva ("Digite o nome: \n")
		leia(nome)
		escreva ("Digite o valor do Salário: \n")
		leia(sal)
		escreva("Valor do imposto de renda: \n")
		leia(impRenda)

		salLiq = sal - impRenda 

		escreva("O funcionário: ", nome, " ", "recebe o sálario líquido no valor: ", salLiq)
		
		
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 340; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */