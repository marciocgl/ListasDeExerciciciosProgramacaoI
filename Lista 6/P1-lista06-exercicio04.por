programa
{
	funcao inicio()
	{
		cadeia nome
		real sal, novoSal = 0.0, porc = 0.0

		escreva("Digite o nome do funcionário: ")
		leia(nome)
		escreva("Digite o salário do funcionário: ")
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
		escreva("Funcionário: ", nome, "\n")
		escreva("% de aumento: ", porc, "\n")
		escreva("Salário atual: ", sal, "\n")
		escreva("Novo salário: ", novoSal, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 598; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */