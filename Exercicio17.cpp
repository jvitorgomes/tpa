/*Exercicio: 17
* Fun��o: verifica se um n�mero � par ou impar *
* Nome: Jo�o Vitor Nascimento Gomes *
* Data: 16/10/2019 *
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int num = 0;
	float m=0;
	setlocale(LC_ALL,"");
	printf("informe um n�mero: ");
	scanf("%i", &num);
	if(num%2==0){
		printf("O n�mero [%i] � par! \n\n\n", num);
	}else{
		printf("O n�mero [%i] � impar! \n\n\n", num);
	}
	system("pause");
}
