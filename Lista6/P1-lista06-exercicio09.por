programa
{	
	funcao inicio()
	{

	    inteiro x = 0, i = 0, soma = 0, np = 0	
	    x = 2
	    enquanto (np < 4) {
   	        soma = 0
             para (i = x-1; i >= 1; i--) {
                 se (x % i == 0) {
                     soma = soma + i
		       }
             }
		   se (soma == x) {
                 np = np + 1
                 escreva(" Número Perfeito: ",x, "\n")
             }
             x++
	    }
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 108; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {x, 6, 13, 1}-{i, 6, 20, 1}-{soma, 6, 27, 4}-{np, 6, 37, 2};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */