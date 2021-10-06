programa
{
	funcao inicio()
	{
		real t, consumo, qtdLitros, vm, dist

		escreva("Digite o tempo gasto na viagem: ")
		leia(t)
		escreva("Digite a vel média da viagem: ")
		leia(vm)
		escreva("Digite o consumo do carro: ")
		leia(consumo)

		dist = vm * t
		qtdLitros = dist / consumo

		escreva("Velocidade Média: ", vm, "km/h\n")
		escreva("Tempo: ", t, "h\n")
		escreva("Distância: ", dist, "km\n")
		escreva("Qtd litros: ", qtdLitros, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 358; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */