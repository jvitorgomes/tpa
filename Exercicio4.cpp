/*Exercicio: 4
* Fun�ao: Soma tres n�meros e exibe o resultado, bem como o quadrado desse resultado
* Nome: Joao Vitor Nascimento Gomes
* Data: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float n1 = 0;
	float n2 = 0;
	float n3 = 0;
	float toto = 0;
	float toto2 = 0;
	setlocale(LC_ALL,"");
	printf("informe o primeiro n�mero: ");
	scanf("%f", &n1);
	printf("informe o segundo n�mero: ");
	scanf("%f", &n2);
	printf("informe o terceiro n�mero: ");
	scanf("%f", &n3);
	toto = n1 + n2 + n3;
	toto2 = toto * toto;
	printf("O quadrado da soma �: %f", toto2);
}
