/*Exercicio: 10
* Função: troca a posição dos números nas variáveis usando variavel de troca
* Nome: João Vitor Nascimento Gomes
* Data: 09/10/2019	
*/																			

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main (){
	float  n1, n2, t;
	printf("informe o primeiro número: ");
	scanf("%f", &n1);
	printf("informe o segundo número: ");
	scanf("%f", &n2);
	t = n1;
	n1 = n2;
	n2 = t;
	printf("Em n1: | %f |", n1);
	printf("Em n2: | %f |", n2);
	system("pause");
}
