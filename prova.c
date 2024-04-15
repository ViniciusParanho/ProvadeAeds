#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Vinícius Paranho Ribeiro
/* Tentei fazer o codigo usando if e else, mas não consegui fazer funcionar, meu rand está escolhendo 0 como uma das opçoes(0,1,2,3)
*/
int main() {

  int portaPremiada;
  int portaVazia;
  int portaEscolhida;
  int portaVazia2;
  char opcao;

  printf("Bem-vindo ao jogo Monty Hall!\n");
  printf("Escolha uma porta: 1, 2 ou 3\n");
  scanf("%i",&portaEscolhida);

  if(portaEscolhida>3){
    printf("Escolha uma porta válida");
  }

 srand(time(NULL));
  portaPremiada = rand() % 3;
  portaVazia = rand() % 3;
  portaVazia2 = rand() % 3;
  (portaVazia,portaVazia2,portaEscolhida>0);
  
  portaVazia != portaPremiada;
  portaVazia != portaVazia2;
  portaVazia2 != portaPremiada;


 if (portaEscolhida == portaPremiada){
    printf ("A porta: %i foi aberta, ela nao estava premiada. \n",portaVazia);
      
 }
  else if (portaEscolhida == portaVazia){
    printf("A porta: %i foi aberta, ela nao estava premiada. \n",portaVazia2);
    
  } 
  else if (portaEscolhida == portaVazia2){
    printf("A porta: %i foi aberta, ela nao estava premiada. \n",portaVazia);
    
    
  }

  printf("\n");
  printf("Você quer continuar com a mesma porta? digite s para sim, e n para não \n");
  scanf("%c",&opcao);
  
  if(opcao == 's'){

    if(portaEscolhida == portaPremiada);{
      printf("Você Ganhou");
      if(portaEscolhida!=portaPremiada);{
        printf("Você Perdeu");
      }
    }
    
  }
  


  return 0;
}

  
