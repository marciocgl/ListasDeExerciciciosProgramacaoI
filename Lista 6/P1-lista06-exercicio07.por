programa
{
	inclua biblioteca Util --> U
	inclua biblioteca Matematica --> M
	funcao inicio()
	{
		real av01, av02, av03, av04, av05
		real media, mediaGeral = 0.0
		inteiro i, qtdAprov = 0, qtdReprov = 0

		para(i = 0; i < 50; i++){
			/*
			escreva("Digite a nota ca avalia��o 01: ")
			leia(av01)
			escreva("Digite a nota ca avalia��o 02: ")
			leia(av02)
			escreva("Digite a nota ca avalia��o 03: ")
			leia(av03)
			escreva("Digite a nota ca avalia��o 04: ")
			leia(av04)
			escreva("Digite a nota ca avalia��o 05: ")
			leia(av05)
			*/
			av01 = U.sorteia(0.0, 100.0)
			av02 = U.sorteia(0.0, 100.0)
			av03 = U.sorteia(0.0, 100.0)
			av04 = U.sorteia(0.0, 100.0)
			av05 = U.sorteia(0.0, 100.0)
			media = (av01 + av02 + av03 + av04 + av05)/5.0
			mediaGeral += media // mediaGeral = mediaGeral + media
	
			se (media < 60){
				qtdReprov++
				escreva("Reprovado\n")
			}senao{
				qtdAprov++
				escreva("Aprovado\n")
			}
		} // fim do para
		limpa()
		escreva("Calculando....")
		U.aguarde(3000)
		limpa()
		escreva("Aguarde... estamos terminando de processar...")
		U.aguarde(4000)
		limpa()
		escreva("M�dia Geral: ", M.arredondar(mediaGeral/50.0,2), "\n")
		escreva("Aprovados: ", qtdAprov, "\n")
		escreva("Reprovados: ", qtdReprov, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 705; 
 * @DOBRAMENTO-CODIGO = [11];
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */