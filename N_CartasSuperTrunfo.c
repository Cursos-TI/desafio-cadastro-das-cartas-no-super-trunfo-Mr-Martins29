#include <stdio.h>

// Desafio Super Trunfo, novato

// Tema: Píses

// Definição, carta 1

int main(){
char estado1;
char codigo1[20], cidade1[20];
int populacao1, turismo1;
float area1, pib1;

printf("Estado: %s\n", estado1);
scanf("%s", estado1);

printf("Código: %s\n", codigo1);
scanf("%s", codigo1);

printf("Cidade: %s\n", cidade1);
scanf("%s", cidade1);

printf("População: %d\n", populacao1);
scanf("%d", &populacao1);

printf("Área: %f\n", area1);
scanf("%f", &area1);

printf("PIB: %f\n", &pib1);
scanf("%f", &pib1);

printf("Pontos Turísticos: %d\n", turismo1);
scanf("%d", &turismo1);

printf("Estado é: %s\n - Código é: %s\n - Cidade é: %s\n", estado1, cidade1, codigo1);

printf("População é: %d\n - Pontos Turísticos são: %d\n", populacao1, turismo1);

printf("A área é: %f\n - O PIB é: %f", area1, pib1);

return 0;


}