/*Exercicio: 18
* Fun��o: informa o dia com base no n�mero digitado *
* Nome: Jo�o Vitor Nascimento Gomes *
* Data: 23/10/2019 *
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int num = 0;
	printf(": ");
	printf("informe um n�mero de 1 a 7:		");
	scanf("%i", &num);
	if(num >=1 and num <=7){
		if(num = 1){
			("Domingo! \n\n\n", num);
		}
		else if(num = 2){
			(" [%i] Segunda-feira! \n\n\n", num);
		}
		else if(num = 3){
			(" [%i] Ter�a-feira! \n\n\n", num);
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
			(" [%i] S�bado! \n\n\n", num);
		}
	}else{
		printf("O n�mero [%i] � inv�lido, digite um n�mero de 1 a 7! \n\n\n", num);
	}
	system("pause");
}
