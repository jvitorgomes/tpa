/*Exercicio: 9
* Função: Calcula quosciente de um número
* Nome: João Vitor Nascimento Gomes
* Data: 09/10/2019	
*/																			

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main (){
	float  n1, n2, t;
	printf("informe o número divisor: ");
	scanf("%f", &n1);
	printf("informe o número a ser dividido: ");
	scanf("%f", &n2);
	t = n2 / n1;
	printf("O quosciente é: | %f |", t);
	system("pause");
}
