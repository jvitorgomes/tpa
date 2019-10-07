/*Exercicio: 6
* Função: Calcula prestação atrasada
* Nome: João Vitor Nascimento Gomes
* Data: 07/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	float prestacao = 0;
	float valor = 0;
	float taxa = 0;
	float tempo = 0;
	printf("informe o base valor da prestação atual: ");
	scanf("%f", &valor);
	printf("informe o valor da taxa de juros: ");
	scanf("%f", &taxa);
	printf("informe o tempo de juros: ");
	scanf("%f", &tempo);
	prestacao = valor + (valor * (taxa/100) * tempo);
	scanf ("%f", &prestacao);
	printf("O valor da prestação com juros é: %f", prestacao);
	system("pause");
}
