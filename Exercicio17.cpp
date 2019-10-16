/*Exercicio: 17
* Função: verifica se um número é par ou impar *
* Nome: João Vitor Nascimento Gomes *
* Data: 16/10/2019 *
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int num = 0;
	float m=0;
	setlocale(LC_ALL,"");
	printf("informe um número: ");
	scanf("%i", &num);
	if(num%2==0){
		printf("O número [%i] é par! \n\n\n", num);
	}else{
		printf("O número [%i] é impar! \n\n\n", num);
	}
	system("pause");
}
