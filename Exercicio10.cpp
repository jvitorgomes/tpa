/*Exercicio: 10
* Fun��o: troca a posi��o dos n�meros nas vari�veis usando variavel de troca
* Nome: Jo�o Vitor Nascimento Gomes
* Data: 09/10/2019	
*/																			

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main (){
	float  n1, n2, t;
	printf("informe o primeiro n�mero: ");
	scanf("%f", &n1);
	printf("informe o segundo n�mero: ");
	scanf("%f", &n2);
	t = n1;
	n1 = n2;
	n2 = t;
	printf("Em n1: | %f |", n1);
	printf("Em n2: | %f |", n2);
	system("pause");
}
