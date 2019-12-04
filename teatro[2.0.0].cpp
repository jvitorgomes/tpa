/*		teatro em c++  
Participantes: João Vitor Nascimento Gomes & Luis Felipe Modesto
data: 27/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "portuguese");
		int lu, veno, p, venop = 2, compra, co, re, me, meia, resr1, resr2, ingr1, meta1 = 0, i = 0, j = 0, k = 0, l = 0;
		char disponi = 'D', tab[20][25];
		printf("Informe o preço do ingresso: \n");
		scanf("%i", &ingr1);
		printf("Informe a quantidade de lugares a ser liberados: \n");
		scanf("%i", &lu);
		printf("Informe a meta a ser alcançada até o inicio do evento: \n");
		scanf("%i", &meta1);
		resr1 = ingr1 * 0.6;
		resr2 = ingr1 * 0.4;
		meia = ingr1 / 2;
		for (i = 0; i <= 19; i++){
          for (j = 0; j <= 24; j++){
          	printf("|%c|", disponi);
          	if(j == 24){
          		printf("\n");
			  }	
          }
      }
          while(venop == 2){
          	printf("Encerrar a compra\n\n -> (1)sim\n -> (2)nao\n escolha: ");
			scanf("%i", &venop);
			if(venop != 2){
				break;
			}
          	printf("Escolha sua opcao de compra: \n\n -> compra(1) %i!\n -> reserva(2) %i! \n -> complemento reserva(3) %i! \n -> meia(4) %i! \n escolha: ", ingr1, resr1, resr2, meia);
          	scanf("%i", &compra);
          	switch(compra){
          		case 1:
          			for (i = 0; i <= 19; i++){
          for (j = 0; j <= 24; j++){
          	printf("|%c|", disponi);
          	if(j == 24){
          		printf("\n");
			  }	
          }
      }
          	printf("Informe o assento desejado em linha: ");
          	scanf("%i", &i);
          	printf("Informe o assento desejado em coluna: ");
          	scanf("%i", &j);
          	disponi='C';
          	for (i = 0; i <= 19; i++){
          	for (j = 0; j <= 24; j++){
          	printf("|%c|", disponi);
          	if(j == 24){
          		printf("\n");
			  }	
          }
      }
          	printf("encerrar a compra\n\n (1)sim:");
			scanf("%i", &veno);
			if(venop == 1){
				break;
			}
          	break;
            	case 2:
            		for (i = 0; i <= 19; i++){
          for (j = 0; j <= 24; j++){
          	printf("|%c|", disponi);
          	if(j == 24){
          		printf("\n");
			  }	
          }
      }
          	printf("Informe o assento desejado em linha: ");
          	scanf("%i", &i);
          	printf("Informe o assento desejado em coluna: ");
          	scanf("%i", &j);
          	printf("encerrar a compra\n\n (1)sim:");
			scanf("%i", &veno);
			re ++;
			if(venop == 1){
				break;
			}
          	break;
		    	case 3:
		    		for (i = 0; i <= 19; i++){
          for (j = 0; j <= 24; j++){
          	printf("|%c|", disponi);
          	if(j == 24){
          		printf("\n");
			  }	
          }
      }
		  	printf("Informe o assento desejado em linha: ");
          	scanf("%i", &i);
          	printf("Informe o assento desejado em coluna: ");
          	scanf("%i", &j);
          	printf("encerrar a compra\n\n (1)sim:");
			scanf("%i", &veno);
			if(venop == 1){
				break;
			}
          	break;
				default:{
					printf("Opcao de compra invalida!");
		  	p --;
		  	printf("encerrar a compra\n\n (1)sim:");
			scanf("%i", &veno);
			if(venop == 1){
				break;
			}
			break;
				}
			}
		}
}
