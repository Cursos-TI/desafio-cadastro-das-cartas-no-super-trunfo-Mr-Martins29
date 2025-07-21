#include <stdio.h>

int main(){

    // Carta 1
char carta1 = '1';
char estado1 = 'A';
char codigo1[5] = "A01";
char cidade1[15] = "Barrolândia";
int pessoas1 = 4915;
int local1 = 5;
float espaco1 = 713.297;
float numero1 = 700.700;
float densidade1 = pessoas1 / espaco1;
float distribuicao1 = numero1 / pessoas1;

printf("Número da Carta: %c \n", carta1);

printf("Estado: %c \n", estado1);

printf("Código: %s \n", codigo1);

printf("Cidade: %s \n", cidade1);

printf("Habitantes: %d \n", pessoas1);

printf("Pontos Turísticos: %d \n", local1);

printf("Tamanho da área: %.3f \n", espaco1);

printf("PIB: %.3f \n", numero1);

printf("Densidade demográfica: %.3f \n", densidade1);

printf("Distribuição de renda: %.3f \n", distribuicao1);

// Imprime carta 1

scanf("%c", &carta1);

scanf(" %c", &estado1);

scanf("%s", codigo1);

scanf("%s", cidade1);

scanf("%d", &pessoas1);

scanf("%d", &local1);

scanf("%f", &espaco1);  

scanf("%f", &numero1);

scanf("%.3f", &densidade1);

scanf("%.3f", &distribuicao1);

return 0;


}