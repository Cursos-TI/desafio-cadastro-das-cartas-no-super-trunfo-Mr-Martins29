#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
// Incluir dados do programa;

    int PlayerNumb, CumpNumb, result;
    char Comparacao;
// Gerar número aleatório do computador;

srand(time(0));
CumpNumb = rand () % 100 + 1; // Número entre 1 e 100;

// Início do jogo;
    printf("### Seja bem-vindo, ilustre jogador! ###\n ");
    printf("# Você precisa escolher um número de 1 a 100 e o tipo de comparação. #\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha sua comparação: ");
    scanf("%c", &Comparacao);

    printf("Digite um número de 1 a 100: ");
    scanf("%d", &PlayerNumb);

    // Exibir número do computador;
    printf("O número do computador é: %d\n", CumpNumb);

    switch(Comparacao)
    {
    case 'M':
    case 'm':
        printf("Você apostou em um número maior!\n");
        result = PlayerNumb > CumpNumb ? 1 : 0;
        break;
    
    case 'N':
    case 'n':
        printf("Você apostou em um número menor!\n");
        result = PlayerNumb < CumpNumb ? 1 : 0;
        break;

    case 'I':
    case 'i':
        printf("Você apostou em um número igual!\n");
        result = PlayerNumb == CumpNumb ? 1 : 0;
        break;

    default:
        printf("Opção não disponível!\n");
        break;
    }

    printf("O número do jogador é: %d e o do computador é: %d\n", PlayerNumb, CumpNumb);
           
    if(result == 1) {
        printf("### Parabéns, você venceu! ###\n");
    } else {
        printf("### Lamento, você perdeu! ###\n");
    }

    return 0;
}