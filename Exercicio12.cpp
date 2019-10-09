/*Exercicio: 12
* Função: mostra o maior dos dois números digitados
* Nome: João Vitor Nascimento Gomes
* Data: 09/10/2019	
*/																			

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main (){
	float  n1, n2;
	printf("informe o primeiro número: ");
	scanf("%f", &n1);
	printf("informe o segundo número: ");
	scanf("%f", &n2);
	if(n1 > n2){
		printf("O maior número é: | %f |", n1);
		system("pause");
   }else{
   		printf("O maior número é: | %f |", n2); 
   		system("pause");
   }
}
