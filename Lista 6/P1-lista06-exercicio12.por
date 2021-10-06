programa
{	
	inclua biblioteca Matematica --> M
	
	funcao fMMC(inteiro a, inteiro b){
		inteiro auxA, auxB, d = 2, flag, mmc = 1

		auxA = a
		auxB = b
		enquanto (auxA != 1 ou auxB != 1){
			flag = 0 // sem divisao, porque está começando nova rodada
			se (auxA % d == 0){
				auxA = auxA / d // auxA /= d
				flag = 1 // houve divisão				
			}
			se (auxB % d == 0){
				auxB = auxB / d // auxB /= d
				flag = 1 // houve divisão
			}
			se (flag == 0){ // não houve divisao pelo D atual
				d++
			}senao{ // houve divisao pelo D atual
				mmc = mmc * d // mmc *= d
			}			
		}

		escreva("MMC: ", mmc)
	}

	funcao fMDC(inteiro a, inteiro b){
		inteiro d, mdc = 0

		d = M.menor_numero(a, b)
		enquanto (d > 0 e mdc == 0){
			se (a % d == 0 e b % d == 0){
				mdc = d
			}senao{
				d--
			}
		}
		escreva("\nMDC: ", mdc)
	}
	
	funcao inicio()
	{
		inteiro a, b

		escreva("Digite o valor de a: ")
		leia(a)
		escreva("Digite o valor de b: ")
		leia(b)

		// MMC
		fMMC(a,b)
		
		// MDC
		fMDC(a,b)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 786; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */