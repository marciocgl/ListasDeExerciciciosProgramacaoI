programa
{
	funcao inicio()
	{
		real nota
		escreva("Digite a nota do aluno: ")
		leia(nota)

		se (nota < 3.0) {
   			escreva("O conceito do aluno � E")
		}senao{
   			se (nota < 6.0) {
      			escreva("O conceito do aluno � D")
   			}senao{
				se (nota < 8.0) {
					escreva("O conceito do aluno � C")
				}senao{
					se (nota < 9.0) {
					  escreva("O conceito do aluno � B")
					}senao{
					  escreva("O conceito do aluno � A")
					}
				}
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 78; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */