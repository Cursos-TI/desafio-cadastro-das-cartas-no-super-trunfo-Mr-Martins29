#include <stdio.h>

int main(){

// Carta 2
char carta2 = '2';
char estado2 = 'B';
char codigo2[05] = "B02";
char ciadade2[15] = "Goiânia";
int pessoas2 = 2927080;
int local2 = 120;
float espaco2 = 739.73;
double numero2 = 54876543.00;
float densidade2 = pessoas2 / espaco2;
float distribuicao2 = numero2 / pessoas2;

// Imprimir carta 2
printf("Número da Carta: %c \n", carta2);

printf("Estado: %c \n", estado2);

printf("Código: %s \n", codigo2);

printf("Cidade: %s \n", ciadade2);

printf("Número de Habitantes: %d \n", pessoas2);

printf("Pontos Turísticos: %d \n", local2);

printf("Tamanho da Área: %.3f \n", espaco2);

printf("PIB: %.2f \n", numero2);

printf("Densidade demográfica: %.3f \n", densidade2);

printf("Distribuição de renda: %.3f \n", distribuicao2);

// Imprimir carta 2
scanf("%c", &carta2);

scanf("%c", &estado2);

scanf("%s", codigo2);

scanf("%s", ciadade2);

scanf("%d", &pessoas2);

scanf("%d", &local2);

scanf("%f", espaco2);

scanf("%f", numero2);

scanf("%f", &densidade2);

scanf("%f", &distribuicao2);

return 0;


}