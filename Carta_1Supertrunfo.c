#include <stdio.h>

int main(){

// // Criação Carta 1
char carta1 = '1';
char estado1 = 'T';
char codigo1[5] = "T01";
char cidade1[15] = "Barrolândia";
int habit1 = 9.876;
int local1 = 05;
float land1 = 2.345;
float tutu1 = 12.3;

// Impressão carta 1
printf("Carta do jogo: %s\n", carta1);
scanf("%s", carta1);

printf("Estado: %s\n", estado1);
scanf("%s", estado1);

printf("Código: %s\n", codigo1);
scanf("%s", codigo1);

printf("Cidade: %s\n", cidade1);
scanf("%s", cidade1);

printf("População: %d\n", habit1);
scanf("%d", &habit1);

printf("Pontos Turísticos: %d\n", local1);
scanf("%d", &local1);

printf("Área Territorial: %f\n", land1);
scanf("%f", &land1);

printf("PIB: %f\n", tutu1);
scan("%f", &tutu1);


return 0;


}