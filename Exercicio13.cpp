/*Exercicio: 13
* Fun��o: mostra o maior dos tr� n�meros digitados
* Nome: Jo�o Vitor Nascimento Gomes
* Data: 09/10/2019	
*/																			

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main (){
	float  n1, n2, n3;
	printf("informe o primeiro n�mero: ");
	scanf("%f", &n1);
	printf("informe o segundo n�mero: ");
	scanf("%f", &n2);
	printf("informe o segundo n�mero: ");
	scanf("%f", &n3);
	if(n1 > n2 and n1 > n3){
		printf("O maior n�mero �: | %f |", n1);
		system("pause");
   }else if(n2 > n3 and n2 > n1){
   		printf("O maior n�mero �: | %f |", n2); 
   		system("pause");
   }else if(n3 > n1 and n3 > n2){
   		printf("O maior n�mero �: | %f |", n3); 
   		system("pause");
   }else{
   	printf("Informe valores v�lidos!");
}
}
