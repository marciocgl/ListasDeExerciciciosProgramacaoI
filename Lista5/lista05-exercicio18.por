programa
{
	funcao inicio()
	{
		real t, consumo, qtdLitros, vm, dist

		escreva("Digite o tempo gasto na viagem: ")
		leia(t)
		escreva("Digite a vel m�dia da viagem: ")
		leia(vm)
		escreva("Digite o consumo do carro: ")
		leia(consumo)

		dist = vm * t
		qtdLitros = dist / consumo

		escreva("Velocidade M�dia: ", vm, "km/h\n")
		escreva("Tempo: ", t, "h\n")
		escreva("Dist�ncia: ", dist, "km\n")
		escreva("Qtd litros: ", qtdLitros, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 358; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */