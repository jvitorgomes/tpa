/*Exercicio: 1
* Função: Calcula area do retângulo
* Nome: João Vitor Nascimento Gomes
* Data: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float base = 0;
	float alt = 0;
	float area = 0;
	setlocale(LC_ALL,"");
	printf("informe a base do retângulo: ");
	scanf("%f", &base);
	printf("informe a altura do retângulo: ");
	scanf("%f", &alt);
	area = base * alt;
	scanf ("%f", &area)
	printf("Area é %f \n", area);
	system("pause");
}
