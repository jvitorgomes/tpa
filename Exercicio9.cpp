/*Exercicio: 9
* Fun��o: Calcula quosciente de um n�mero
* Nome: Jo�o Vitor Nascimento Gomes
* Data: 09/10/2019	
*/																			

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main (){
	float  n1, n2, t;
	printf("informe o n�mero divisor: ");
	scanf("%f", &n1);
	printf("informe o n�mero a ser dividido: ");
	scanf("%f", &n2);
	t = n2 / n1;
	printf("O quosciente �: | %f |", t);
	system("pause");
}
