/*Exercicio: 1
* Fun��o: Calcula area do ret�ngulo
* Nome: Jo�o Vitor Nascimento Gomes
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
	printf("informe a base do ret�ngulo: ");
	scanf("%f", &base);
	printf("informe a altura do ret�ngulo: ");
	scanf("%f", &alt);
	area = base * alt;
	scanf ("%f", &area)
	printf("Area � %f \n", area);
	system("pause");
}
