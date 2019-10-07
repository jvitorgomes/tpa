/*Exercicio: 5
* Função: Calcula preço do terreno
* Nome: João Vitor Nascimento Gomes
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
	printf("informe o preço do terreno: ");
	scanf("%f", &preco);
	total = (base * alt) * preco;
	scanf ("%f", &total);
	printf("O preço do terreno é %f \n", total);
	system("pause");

}

