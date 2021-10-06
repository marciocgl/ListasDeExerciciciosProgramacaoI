programa
{

	inclua biblioteca Matematica --> M
	
	funcao inicio()
	{

	
		inteiro q, nt, a1, resp

		escreva("Digite o primeiro termo: ")
		leia(a1)
		escreva("Digite a razao: ")
		leia(q)
		escreva("digite o numero de termos: ")
		leia(nt)

		resp = a1 * q 
		nt = nt - 1
		resp = M.potencia(resp, nt)
		
		escreva(resp)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 302; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */