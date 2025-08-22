#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int opcao;
    int NumeroSecreto, palpite;

    printf("Menu Principal \n");
    printf("1. Iniciar Jogo \n");
    printf("2. Ver regras \n");
    printf("3. Sair do Jogo \n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    srand(time(0));
    NumeroSecreto = rand() % 10;
    printf("Digite um número de 0 a 9: ");
    scanf("%d", &palpite);
  
printf("Número secreto %d \n", NumeroSecreto);
     
    if (NumeroSecreto == palpite) {
    printf("Você acertou! \n");
} else{
    printf("Você errou! \n");
}
break;
    case 2:
    printf("As regras do jogo são...");
    break;
    
    case 3:
    printf("Saindo do jogo \n");
    break;

    default:
    printf("Opção inválida \n");
        break;
    }
}