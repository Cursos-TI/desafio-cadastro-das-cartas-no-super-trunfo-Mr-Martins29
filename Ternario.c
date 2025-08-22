#include <stdio.h>

int main() {

int opcao;
float nota1, nota2, media;

printf("*** Menu de gerenciamento de estidantes ***\n");
printf("1. Calcular média\n");
printf("2. Determinar status\n");
printf("3. Sair\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);

switch (opcao)
{

case 1:
    printf("Calcular a média\n");
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    // Testar a condição da nota, se nota >= 0, ou <= 10

    if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
        media = (nota1 + nota2) / 2;
    printf("A média é %.1f\n", media);
    } else {
        printf("*** Entrada com valores errados! ***\n");
    }
    
break;

case 2:
    printf("Determinar status\n");
    printf("Digite sua média: ");
    scanf("%f", &media);
    //media >= 5 ? printf("### Parabéns, aprovado! ###\n") :
               //printf("### Que pena, você está reprovado! ###\n");
    if (media >= 7) {
      printf("### Parabéns, aprovado! ###\n");  
    } else if (media >= 5) {
        printf("### Você ficou de recuperação! ###\n");
    } else {
        printf("### Que pena, você está reprovado! ###\n"); 
    }  
break;

case 3:
    printf("### Saindo do programa... ###\n");
break; 

default:
    printf("Opção indisponível\n");
    break;
}

return 0;

}