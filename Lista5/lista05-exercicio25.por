programa
{
	funcao inicio()
	{
		inteiro data, a, m, d, dataI
		escreva("Digite uma data padrao DDMMAA: ")
		leia(data)

		d = (data / 10000)
		m = (data % 10000) / 100
		a = (data % 100)

		dataI = (a * 10000) + (m * 100) + d
		
		escreva("Data normal: ", data, "\n")
		escreva("Data inversa: ", dataI, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 261; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */