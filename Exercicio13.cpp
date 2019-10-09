/*Exercicio: 13
* Função: mostra o maior dos trê números digitados
* Nome: João Vitor Nascimento Gomes
* Data: 09/10/2019	
*/																			

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main (){
	float  n1, n2, n3;
	printf("informe o primeiro número: ");
	scanf("%f", &n1);
	printf("informe o segundo número: ");
	scanf("%f", &n2);
	printf("informe o segundo número: ");
	scanf("%f", &n3);
	if(n1 > n2 and n1 > n3){
		printf("O maior número é: | %f |", n1);
		system("pause");
   }else if(n2 > n3 and n2 > n1){
   		printf("O maior número é: | %f |", n2); 
   		system("pause");
   }else if(n3 > n1 and n3 > n2){
   		printf("O maior número é: | %f |", n3); 
   		system("pause");
   }else{
   	printf("Informe valores válidos!");
}
}
