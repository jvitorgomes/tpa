/*Exercicio: 11
* Fun��o: se um numero for maior que 5 e menor que 20 exibe seu cubo
* Nome: Jo�o Vitor Nascimento Gomes
* Data: 09/10/2019	
*/																			

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main (){
	float  n, t;
	printf("informe um n�mero: ");
	scanf("%f", &n);
	if(n >= 5 and n <= 20){
		t = n * n * n;
		printf("O Cubo do n�mero digitado �: | %f |", t);
		system("pause");
	}else{
		printf("Informe um valor v�lido de 5 a 20");
	}
}
