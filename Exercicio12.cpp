/*Exercicio: 12
* Fun��o: mostra o maior dos dois n�meros digitados
* Nome: Jo�o Vitor Nascimento Gomes
* Data: 09/10/2019	
*/																			

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main (){
	float  n1, n2;
	printf("informe o primeiro n�mero: ");
	scanf("%f", &n1);
	printf("informe o segundo n�mero: ");
	scanf("%f", &n2);
	if(n1 > n2){
		printf("O maior n�mero �: | %f |", n1);
		system("pause");
   }else{
   		printf("O maior n�mero �: | %f |", n2); 
   		system("pause");
   }
}
