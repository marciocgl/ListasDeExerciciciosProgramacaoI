programa
{
	inclua biblioteca Util --> U
	funcao inicio()
	{
		inteiro i = 0, qtdPares = 0, num

		enquanto (i < 500){
			//escreva("Digite um numero: ")
			//leia(num)			
			num = U.sorteia(1,5000)
			escreva(i, " -> ", num, "\n")
			se (num % 2 == 0){
				qtdPares++
			}
			i++
		}
		
		limpa()
		escreva("Quantidade de n�meros pares: ", qtdPares, "\n")
		escreva("Quantidade de n�meros pares: ", 500 - qtdPares, "\n")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 406; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */