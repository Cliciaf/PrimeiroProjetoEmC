#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void) {
  int Segredo, opcao, Tentativas, chute;
  
  srand (time(NULL));
  do{
    printf("MENU DO JOGO: \n");
    printf("Guerreiro, descubra a senha da porta mágica.\nA senha esta no intervalo de 1 a 100.\nVocê terá 7 chances, use-as com sabedoria!\n");
    printf("Escolha: 1 (Jogar) ou 0 (Sair): ");
    printf("Sua opção: ");
    scanf("%i", &opcao);
    if (opcao == 0)
      printf("FIM DO JOGO. \n");
    else if (opcao != 1)
      printf("Erro de opção. Escolha de novo.\n");
    else{
        Tentativas = 0;
        Segredo = rand() % 100 + 1;
        while(Tentativas <= 6){
          printf("Tentativa: %i\n", Tentativas + 1);
          Tentativas++;
          printf("Digite o numero:\n");
          scanf("%i", &chute);
          if(chute==Segredo){
              printf("Você acertou! O Segredo é: %i\nContinue na tela para jogar outra vez ou sair.\n", Segredo);
              break;
          }else { 
                if(Tentativas==7 && chute!= Segredo){
                  printf("Voce falhou! Recomece\n");
                  printf(" O Segredo é: %i\n", Segredo);
                }else if (chute < Segredo ){
                  printf("O chute foi menor que o segredo da porta!\n");      
                }else{
                  printf("O chute foi maior que o segredo da porta!\n");
                }
                }
     
        }
    
    }
    
  }while(opcao != 0);
  return 0;
}