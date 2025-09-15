# include <stdio.h>
int main(){

    //imprime o cabeçalho do jogo.
    printf("****************************************\n");
    printf("* Bem Vindo au nosso jogo de adivinhação\n");
    printf("****************************************\n");

    int numeroSecreto = 42;

   //printf(" O número %d é o secreto. Não conta pra ninguém!");

  int chute;
  printf("Qual é o seu chute? ");
  scanf("%d", &chute);
  printf("Seu chute foi %d", chute);
}