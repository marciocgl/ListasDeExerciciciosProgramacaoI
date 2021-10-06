programa
{
	funcao inicio()
	{
		real nota
		escreva("Digite a nota do aluno: ")
		leia(nota)

		se (nota < 3.0) {
   			escreva("O conceito do aluno é E")
		}senao{
   			se (nota < 6.0) {
      			escreva("O conceito do aluno é D")
   			}senao{
				se (nota < 8.0) {
					escreva("O conceito do aluno é C")
				}senao{
					se (nota < 9.0) {
					  escreva("O conceito do aluno é B")
					}senao{
					  escreva("O conceito do aluno é A")
					}
				}
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 78; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */