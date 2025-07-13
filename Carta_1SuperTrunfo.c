#include <stdio.h>

int main(){

    // Carta 1
char carta1 = '1';
char estado1 = 'A';
char codigo1[5] = "A01";
char cidade1[15] = "Barrolândia";
int pessoas1 = 9876;
int local1 = 5;
float espaco1 = 10.123;
float numero1 = 14.7;

printf("Número da Carta: %c \n", carta1);

printf("Estado: %c \n", estado1);

printf("Código: %s \n", codigo1);

printf("Cidade: %s \n", cidade1);

printf("Habitantes: %d \n", pessoas1);

printf("Pontos Turísticos: %d \n", local1);

printf("Tamanho da área: %.3f \n", espaco1);

printf("PIB: %.1f \n", numero1);

// Imprime carta 1

scanf("%c", &carta1);

scanf(" %c", &estado1);

scanf("%s", codigo1);

scanf("%s", cidade1);

scanf("%d", &pessoas1);

scanf("%d", &local1);

scanf("%f", &espaco1);  

scanf("%f", &numero1);

return 0;


}