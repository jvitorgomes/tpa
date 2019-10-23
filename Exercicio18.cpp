/*Exercicio: 18
* Função: informa o dia com base no número digitado *
* Nome: João Vitor Nascimento Gomes *
* Data: 23/10/2019 *
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int num = 0;
	printf(": ");
	printf("informe um número de 1 a 7:		");
	scanf("%i", &num);
	if(num >=1 and num <=7){
		if(num = 1){
			("Domingo! \n\n\n", num);
		}
		else if(num = 2){
			(" [%i] Segunda-feira! \n\n\n", num);
		}
		else if(num = 3){
			(" [%i] Terça-feira! \n\n\n", num);
		}
		else if(num = 4){
			(" [%i] Quarta-feira! \n\n\n", num);
		}
		else if(num = 5){
			(" [%i] Quinta-feira! \n\n\n", num);
		}
		else if(num = 6){
			(" [%i] Sexta-feira! \n\n\n", num);
		}
		else if(num = 7){
			(" [%i] Sábado! \n\n\n", num);
		}
	}else{
		printf("O número [%i] é inválido, digite um número de 1 a 7! \n\n\n", num);
	}
	system("pause");
}
