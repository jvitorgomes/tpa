/*Exercicio: 5
* Fun��o: Calcula pre�o do terreno
* Nome: Jo�o Vitor Nascimento Gomes
* Data: 07/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	float base = 0;
	float alt = 0;
	float total = 0;
	float preco = 0;
	printf("informe a base do terreno: ");
	scanf("%f", &base);
	printf("informe a altura do terreno: ");
	scanf("%f", &alt);
	printf("informe o pre�o do terreno: ");
	scanf("%f", &preco);
	total = (base * alt) * preco;
	scanf ("%f", &total);
	printf("O pre�o do terreno � %f \n", total);
	system("pause");

}

