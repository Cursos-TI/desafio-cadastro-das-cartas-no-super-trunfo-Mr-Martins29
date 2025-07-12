#include <stdio.h>

// Desafio Super Trunfo, novato

// Tema: Píses

// Definição, carta 1

int main(){

// Carta 1
char carta1 = '1';
char estado1 = 'T';
char codigo1[20] = "T01";
char cidade1[20] = "Palmas";
int populacao1 = 302.692;  
int turismo1 = 58;
float area1 =  2.219;
float pib1 = 58.1; 

// Imprime 1
printf("Carta: %s\n", carta1);
scanf("%s", carta1);

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


return 0;


}