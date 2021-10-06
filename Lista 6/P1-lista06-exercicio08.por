programa
{
	funcao inicio()
	{
		inteiro i, a, b, c, menor, meio, maior

		escreva("Digite um número: ")
		leia(a)
		escreva("Digite um número: ")
		leia(b)
		escreva("Digite um número: ")
		leia(c)
		limpa()
		escreva("As opções disponíveis são: \n")
		escreva("1 - Escrever os valores em ordem crescente\n")
		escreva("2 - Escrever os valores em ordem decrescente\n")
		escreva("3 - Escrever n meio, o maior valor\n")
		escreva("Digite uma opção: ")
		leia(i)		
		limpa()

		// processando
		se ((a < b) e (b < c)){			
			menor = a
			meio = b
			maior = c			
		}senao
			se ((a < c) e (c < b)){			
				menor = a
				meio = c
				maior = b			
			}senao
				se ((b < a) e (a < c)){			
					menor = b
					meio = a
					maior = c			
				}senao
					se ((b < c) e (c < a)){			
						menor = b
						meio = c
						maior = a			
					}senao
						se ((c < a) e (a < b)){			
							menor = c
							meio = a
							maior = b			
						}senao{
							menor = c
							meio = b
							maior = a			
						}
		escolha (i){			
			caso 1:
				escreva("Ordem Crescente: ", menor, " - ", meio, " - ", maior)
				pare
			caso 2: 
				escreva("Ordem Decrescente: ", maior, " - ", meio, " - ", menor)
				pare
			caso 3:
				escreva("Maior no meio: ", menor, " - ", maior, " - ", meio)
				pare
			caso contrario:
				escreva("Opção inválida!")
				pare
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1268; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */