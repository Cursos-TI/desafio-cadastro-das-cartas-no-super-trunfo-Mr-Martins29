#include <stdio.h>

int main(){

// Criação carta 1;

char carta1 = 'A';
char codigo1[5] = "A01";
char cidade1[15] = "Palmas";
int espaco1 = 2219;
int pessoas1 = 306296;
int locais1 = 13;
unsigned int pib1 = 1162000000; 
float densidade1 = (float)pessoas1 / espaco1;
float distribuicao1 = (float)pib1 / pessoas1;
float SuperPoder1 = 1 / (densidade1) + espaco1 + pessoas1 + locais1 +
                    pib1 + distribuicao1;
// criação carta 2;

char carta2 = 'B';
char codigo2[5] = "B02";
char cidade2[15] = "Goiânia";
int espaco2 = 729296;
int pessoas2 = 1437366;
int locais2 = 15;
long long int pib2 = 59900000000; 
float densidade2 = (float)pessoas2 / espaco2;
float distribuicao2 = (float)pib2 / pessoas2;
float SuperPoder2 = 1 / (densidade2) + espaco2 + pessoas2 + locais2 +
                    pib2 + distribuicao2;

// Impressão carta 1;

printf("Nome da Carta: %c \n", carta1);
printf("Código: %s \n", codigo1);
printf("Cidade: %s \n", cidade1);
printf("Espaço Territorial: %d \n", espaco1);
printf("Número de Habitantes: %d \n", pessoas1);
printf("Pontos Turísticos: %d \n", locais1);
printf("PIB: R$ %u \n", pib1);
printf("Densidade demográfica: %.3f \n", densidade1);
printf("Distribuição de renda: R$ %.3f \n", distribuicao1);
printf("Super Poder da carta A: %.3f \n", SuperPoder1);

// Impressão carta 2

printf("Nome da Carta: %c \n", carta2);
printf("Código: %s \n", codigo2);
printf("Cidade: %s \n", cidade2);
printf("Espaço Territorial: %d \n", espaco2);
printf("Número de Habitantes: %d \n", pessoas2);
printf("Pontos Turísticos: %d \n", locais2);
printf("PIB: R$ %lld \n", pib2);
printf("Densidade demográfica: %.3f \n", densidade2);
printf("Distribuição de renda: R$ %.3f \n", distribuicao2);
printf("Super Poder da carta B: %.3f \n", SuperPoder2);

// Comparação das cartas;

printf("Território de A é maior que o território de B: %d \n",
                                     espaco1 > espaco2);

printf("População de A é maior que a população de B: %d \n",
                                  pessoas1 > pessoas2);

printf("A tem mais pontos turísticos que B: %d \n",
                                  locais1 > locais2);

printf("O PIB de A é maior que o PIB de B: %d \n",
                                       pib1 > pib2);     
                                       
printf("A tem maior densidade demográfica que B: %d \n",
                                  densidade1 > densidade2);
                                  
printf("A tem maior distribuição de renda que B: %d \n",
                            distribuicao1 > distribuicao2); 

printf("A tem maior super poder que B: %d \n",
                     SuperPoder1 > SuperPoder2);    

// Leitura carta 1;

scanf("%c", &carta1);
scanf("%s", codigo1);
scanf("%s", cidade1);
scanf("%d", &espaco1);
scanf("%d", &pessoas1);
scanf("%d", &locais1);
scanf("%u", &pib1);
scanf("%f", &densidade1);
scanf("%f", &distribuicao1);
scanf("%f", &SuperPoder1);

// Leitura carta 2;

scanf("%c", &carta2);
scanf("%s", codigo2);
scanf("%s", cidade2);
scanf("%d", &espaco2);
scanf("%d", &pessoas2);
scanf("%d", &locais2);
scanf("%lld", &pib2);
scanf("%f", &densidade2);
scanf("%f", &distribuicao2);
scanf("%f", &SuperPoder2);

                                     
return 0;

}