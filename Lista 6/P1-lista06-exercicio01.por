programa
{
	funcao inicio()
	{
		inteiro num

		escreva("Digite um n�mero: ")
		leia(num)

		se (num > 0){
			se (num % 2 == 0){
				escreva(num, " � par")
			}senao{
				escreva(num, " � �mpar")
			}
		}senao
			se (num == 0){
				escreva("O n�mero � zero")
			}senao{
				escreva("O n�mero n�o � positivo")
			}			
    	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 313; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */