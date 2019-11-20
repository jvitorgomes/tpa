/*    jogo da velha em c++  
Participantes: João Vitor Nascimento Gomes & Luis Felipe Modesto
data: 23/20/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
  char repeticao,NomeJ1[50],NomeJ2[50],simboloJ1[1],simboloJ2[1], tab[3][3], i, j;
  int p = 0, p1 = 0, p2 = 0, empate = 0;
  printf("bem vindo ao jogo da velha, tenha um bom jogo!\n");
    printf("Jogador 1 informe seu nome: \n");
    scanf("%s", &NomeJ1);
    printf("jogador 2 informe seu nome: \n");
    scanf("%s", &NomeJ2);
    printf("%s, escolha seu caracter: \n", NomeJ1);
    scanf("%s", &simboloJ1);
    printf("%s, escolha seu caracter: \n", NomeJ2);
    scanf("%s", &simboloJ2);
    repeticao = 's';
  while(repeticao != 'n'){
    printf("Vamos começar! \n\n\n");
    printf("Este é o seu tabuleiro! \n\n");
    printf(" 1  2  3 \n");
    printf("1   | |  \n");
    printf("  -------\n");
    printf("2   | |  \n");
    printf("  -------\n");
    printf("3   | |  \n\n\n");
    for(p = 0; p < 9; p++){
      if(p%2 == 0){
        printf("%s, sua vez: \n", NomeJ1);
        printf("informe a posição que quer marcar em linha: ");
        scanf("%i", &i - 1);  
        printf("informe a posição que quer marcar em coluna: ");
        scanf("%i", &j - 1);
        tab[i][j] = simboloJ1;
        	printf("");
   	     	printf("");
  		    printf(" 1  2  3 \n");
    	    printf("1  %c", tab[1][1]"|%c", tab[1][2]"|%c", tab[1][3]" \n");
   	    	printf("  -------\n");
        	printf("2  %c", tab[2][1]"|%c", tab[2][2]"|%c", tab[2][3]" \n");
        	printf("  -------\n");
        	printf("3  %c", tab[3][1]"|%c", tab[3][2]"|%c", tab[3][2]" \n\n");
   		printf("%s, sua vez: \n", NomeJ2);
        printf("informe a posição que quer marcar em linha: ");
        scanf("%i", &i - 1);  
        printf("informe a posição que quer marcar em coluna: ");
        scanf("%i", &j - 1);
        tab[i][j] = simboloJ2;
        	printf("");
   	     	printf("");
  		    printf(" 1  2  3 \n");
    	    printf("1  %c", tab[1][1]"|%c", tab[1][2]"|%c", tab[1][3]" \n");
   	    	printf("  -------\n");
        	printf("2  %c", tab[2][1]"|%c", tab[2][2]"|%c", tab[2][3]" \n");
        	printf("  -------\n");
        	printf("3  %c", tab[3][1]"|%c", tab[3][2]"|%c", tab[3][2]" \n\n");
        			//__________________________________________________________________________________________/
					//                				  VERIFICA DO JOGADOR 1        						        /
					//__________________________________________________________________________________________/
       								if(tab[0][0]==NomeJ1 and tab[1][1]==NomeJ1 and tab[2][2]==NomeJ1){
         							printf("%s ganhou!", simboloJ1);
              								p = 10;
              								p1 ++;
          							}else if(tab[0][0]==NomeJ1 and tab[0][1]==NomeJ1 and tab[0][2]==NomeJ1){
              								printf("%s ganhou!", simboloJ1);
              								p = 10;
              								p1 ++;
          							}else if(tab[1][0]==NomeJ1 and tab[1][1]==NomeJ1 and tab[1][2]==NomeJ1){
              								printf("%s ganhou!", simboloJ1);
              								p = 10;
              								p1 ++;
          							}else if(tab[2][0]==NomeJ1 and tab[2][1]==NomeJ1 and tab[2][2]==NomeJ1){
              								printf("%s ganhou!", simboloJ1);
              								p = 10;
              								p1 ++;
          							}else if(tab[0][0]==NomeJ1 and tab[1][0]==NomeJ1 and tab[2][0]==NomeJ1){
              						printf("%s ganhou!", simboloJ1);
              								p = 10;
											p1 ++;  
          							}else if(tab[0][1]==NomeJ1 and tab[1][1]==NomeJ1 and tab[2][1]==NomeJ1){
              								printf("%s ganhou!", simboloJ1);
              								p = 10;
              								p1 ++;
          							}else if(tab[0][2]==NomeJ1 and tab[1][2]==NomeJ1 and tab[2][2]==NomeJ1){
            								printf("%s ganhou!", simboloJ1);
            								p = 10;
            								p1 ++;
          							}else if(tab[0][1]==NomeJ1 and tab[1][1]==NomeJ1 and tab[2][1]==NomeJ1){
              								printf("%s ganhou!", simboloJ1);
              								p = 10;
											p1 ++;  
          							}else if(tab[0][2]==NomeJ1 and tab[1][1]==NomeJ1 and tab[2][0]==NomeJ1){
              								printf("%s ganhou!", simboloJ1);
              								P = 10;
              								p1 ++;
          							}
					//__________________________________________________________________________________________/
					//  		     				VERIFICA JOGADOR 2      					                /
					//__________________________________________________________________________________________/
    								if(tab[0][0]==NomeJ2 and tab[1][1]==NomeJ2 and tab[2][2]==NomeJ2){
              						printf("%s ganhou!", simboloJ2);
              								p = 10;
              								p2 ++;
          							}else if(tab[0][0]==NomeJ2 and tab[0][1]==NomeJ2 and tab[0][2]==NomeJ2){
              								printf("%s ganhou!", simboloJ2);
              								p = 10;
              								p2 ++;
          							}else if(tab[1][0]==NomeJ2 and tab[1][1]==NomeJ2 and tab[1][2]==NomeJ2){
              								printf("%s ganhou!", simboloJ2);
              								p = 10;
              								p2 ++;
          							}else if(tab[2][0]==NomeJ2 and tab[2][1]==NomeJ2 and tab[2][2]==NomeJ2){
              								p = 10;
              								p2 ++;
          							}else if(tab[0][0]==NomeJ2 and tab[1][0]==NomeJ2 and tab[2][0]==NomeJ2){
              								printf("%s ganhou!", simboloJ2);
               								p = 10;
               								p2 ++;
          							}else if(tab[0][1]==NomeJ2 and tab[1][1]==NomeJ2 and tab[2][1]==NomeJ2){
              								printf("%s ganhou!", simboloJ2);
              								p = 10;
              								p2 ++;
          							}else if(tab[0][2]==NomeJ2 and tab[1][2]==NomeJ2 and tab[2][2]==NomeJ2){
              								printf("%s ganhou!", simboloJ2);
             	 							p = 10;
             	 							p2 ++;
          							}else if(tab[0][1]==NomeJ2 and tab[1][1]==NomeJ2 and tab[2][1]==NomeJ2){
              								printf("%s ganhou!", simboloJ2);
              								p = 10;
              								p2 ++;
          							}else if(tab[0][2]==NomeJ2 and tab[1][1]==NomeJ2 and tab[2][0]==NomeJ2){
              								printf("%s ganhou!", simboloJ2);
              								p = 10;
              								p2 ++;
          							}else if(p == 9){
              								printf("O jogo empatou!");
              								p = 10;
              								empate ++;
          							}
        	  printf("Quer jogar novamente? S ou N: \n");
   			  scanf("%s", &repeticao);
   			  printf("Pontuação \n\n");
   			  printf("%s, você fez: \n", NomeJ1);
   			  printf("%i pontos \n", p1);
   			  printf("%s, você fez: \n", NomeJ2);
   			  printf("%i pontos \n\n", p2);
   			  printf("%i empates \n");
			}
		}
	}
}
