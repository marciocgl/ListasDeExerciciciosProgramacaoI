programa
{
	funcao inicio()
	{
		cadeia nome
		real sal, novoSal = 0.0, porc = 0.0

		escreva("Digite o nome do funcion�rio: ")
		leia(nome)
		escreva("Digite o sal�rio do funcion�rio: ")
		leia(sal)

		se (sal <= 900.00){
			porc = 10.0
		}senao
			se (sal <= 1100.00){
				porc = 6.0
			}senao
				se (sal <= 1300.00){
					porc = 4.0
				}senao
					se (sal <= 1500.00){
						porc = 2.0
					}
		novoSal = sal + (sal * porc/100)
		escreva("Funcion�rio: ", nome, "\n")
		escreva("% de aumento: ", porc, "\n")
		escreva("Sal�rio atual: ", sal, "\n")
		escreva("Novo sal�rio: ", novoSal, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 598; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */