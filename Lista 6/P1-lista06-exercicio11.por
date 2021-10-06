programa
{
	inclua biblioteca Matematica --> M
	inclua biblioteca Util --> U
	funcao inicio()
	{

		inteiro n, fat, i, qtdDiv
		cadeia primo

		para (n = 1; n <= 100; n++){
			// inicializando as vari�veis
			fat = 1
			qtdDiv = 0
			
			// calculando o fatorial
			para (i = n; i >= 1; i--){
				fat *= i // fat = fat * i
			}
	
			// qtd de divisores
			para (i = 1; i <= n; i++){
				se (n % i == 0){ // n � divis�vel por i
					qtdDiv++ // qtdDiv = qtdDiv + 1
				}
			}
	
			se (qtdDiv == 2){
				primo = "Sim"
			}senao{
				primo = "N�o"
			}
			
	
			escreva("N�mero: ", n, "\n")
			escreva("Quadrado: ", M.potencia(n, 2.0), "\n")
			escreva("Cubo: ", M.potencia(n, 3.0), "\n")
			escreva("Fatorial: ", fat, "\n")
			escreva("Qtd Divisores: ", qtdDiv, "\n")
			escreva("� Primo? : ", primo, "\n")

			U.aguarde(3000)
			limpa()			
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 809; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */