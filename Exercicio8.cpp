/*Exercicio: 7													 ____
* Fun��o: Calcula aumento de salario com base em porcentagem	| ? |
* Nome: Jo�o Vitor Nascimento Gomes 							| ? |
* Data: 09/10/2019												| ? |
*/																			

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main (){
	float  n1, n2, n3, n4, m;
	printf("informe a primeira nota: ");
	scanf("%f", &n1);
	printf("informe a segunda nota: ");
	scanf("%f", &n2);
	printf("informe a terceira nota: ");
	scanf("%f", &n3);
	printf("informe a quarta nota: ");
	scanf("%f", &n4);
	m = (n1 + n2 + n3 + n4) / 4;
	printf("A m�dia do aluno �: | %f! |", m);
	system("pause");
}
