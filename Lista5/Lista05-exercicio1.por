programa
{
	funcao inicio()
	{

		cadeia nome 
		real sal,salLiq, impRenda

		escreva ("Digite o nome: \n")
		leia(nome)
		escreva ("Digite o valor do Sal�rio: \n")
		leia(sal)
		escreva("Valor do imposto de renda: \n")
		leia(impRenda)

		salLiq = sal - impRenda 

		escreva("O funcion�rio: ", nome, " ", "recebe o s�lario l�quido no valor: ", salLiq)
		
		
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 340; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */