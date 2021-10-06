programa
{
	inclua biblioteca Matematica --> M
	inclua biblioteca Util --> U
	cadeia autor = "Flavio"

	funcao real calcularImc(real peso, real altura){
		real imc
		
		imc = (peso / M.potencia(altura, 2.0))
		retorne imc
	}
	
	funcao inicio()
	{
		cadeia nome
		real peso, altura, imc
		inteiro qtdPessoas = 0

		escreva("Bem vindo. Autor: ", autor, "\n\n")		
		escreva("Digite o nome da pessoa ", qtdPessoas+1, ": ")
		leia(nome)
		
		enquanto ((qtdPessoas < 50) e (nome != "sair")){
		
			escreva("Digite o peso da pessoa ", qtdPessoas+1, ": ")
			leia(peso)
			escreva("Digite a altura da pessoa ", qtdPessoas+1, ": ")
			leia(altura)
			
			// chamando a função para calular imc
			imc = calcularImc(peso, altura)
	
		     limpa()
		     escreva("###### DADOS DA PESSOA ", qtdPessoas+1,"######\n")
			escreva("Nome: ", nome, "\n")
			escreva("Peso: ", peso, "\n")
			escreva("Altura: ", altura, "\n")
			escreva("imc: ", imc, "\n")
	
			se (imc < 18.5){
				escreva("Resultado: Você está abaixo do peso ideal.\n")
			}senao
				se (imc < 25){
					escreva("Resultado: Parabéns! Você está em seu peso normal!.\n")
				}senao
					se (imc < 30){
						escreva("Resultado: Você está acima de seu peso (sobrepeso).\n")
					}senao{
						escreva("Resultado: Obesidade")
					}

			qtdPessoas++
			U.aguarde(3000)
			limpa()
			escreva("Digite o nome da pessoa ", qtdPessoas+1, ": ")
			leia(nome)
		}// fim do enquanto
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 356; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */