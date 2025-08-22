#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
int Escolha;                    
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
long long int SuperPoder2 = 1 / (densidade2) + espaco2 + pessoas2 + locais2 +
                    pib2 + distribuicao2;

// Criando mecanismo de comparação entre atributos;
// Gerando os dados do programa;

int resultado1, resultado2, resultado3;
char Atributo1, Atributo2, Atributo3;

// Implementando o programa;
// Gerando as opções;

srand((time(0)));
espaco1 = rand() % 100 + 1;
espaco2 = rand() % 100 + 1;
pessoas1= rand() % 100 + 1;
pessoas2 = rand() % 100 + 1;
SuperPoder1 = rand() % 100 + 1;
SuperPoder2 = rand() % 100 + 1;

// Início do jogo;

printf("### Escolha o primeiro atributo ###\n");
printf("E. Espaço\n");
printf("P. População\n");
printf("S. Super Poder\n");

printf("Escolha a comparação: ");
scanf(" %c", &Atributo1);

switch (Atributo1)
{
case 'E':
case 'e':
{
    printf("Você escolheu o espaço!\n");
    resultado1 = espaco1 > espaco2 ? 1 : 0;
}
    break;

case 'P':
case 'p':
{
    printf("Você escolheu a população!\n");
    resultado2 = pessoas1 > pessoas2  ? 1 : 0;
} 
    break;

case 'S':  
case 's':
{
    printf("Você escolheu o super poder!\n");
    resultado3 = SuperPoder1 > SuperPoder2 ? 1 : 0;
}
default:
printf("Opção de jogo inválida!\n");

    break;
}

printf("*** Escolha o segundo atributo! ***\n");
printf("### Atenção!!! Você deve escolher um atributo diferente do primeiro!!! ###\n");
printf("E. Espaço\n");
printf("P. População\n");
printf("S. Super Poder\n");

printf("Escolha a comparação: ");
scanf(" %c", &Atributo2);

if(Atributo1 == Atributo2) {
    printf("Opção indesejada!\n");
} else {

    switch (Atributo2)
    {
    case 'E':
    case 'e':
    printf("Você escolheu o espaço!\n");
    resultado2 = espaco1 > espaco2 ? 1 : 0;

        break;
    
    case 'P':
    case 'p':
    printf("Você escolheu a população!\n");
    resultado2 = pessoas1 > pessoas2 ? 1 : 0;

        break;

    case 'S':
    case 's':
    printf("Você escolheu o super poder!\n");
    resultado2 = SuperPoder1 > SuperPoder2 ? 1 : 0;

       break;

    default:
    printf("Opção inválida!\n");

        break;
    }
}

printf("*** Escolha o terceiro atributo! ***\n");
printf("### Atenção!!! Este atributo deve ser diferente do primeiro e do segundo! ###\n");
printf("E. Espaço\n");
printf("P. População\n");
printf("S. Super Poder\n");

printf("Escolha a comparação: ");
scanf(" %c", &Atributo3);

if (Atributo2 == Atributo3) {
    printf("Opção indesejada!\n");
 
} else {

switch (Atributo3)
    {
    case 'E':
    case 'e':
    printf("Você escolheu o espaço!\n");
    resultado3 = espaco1 > espaco2 ? 1 : 0;

        break;
    
    case 'P':
    case 'p':
    printf("Você escolheu a população!\n");
    resultado3 = pessoas1 > pessoas2 ? 1 : 0;

        break;

case 'S':
case 's':
printf("Você escolheu o super poder!\n");
resultado3 = SuperPoder1 > SuperPoder2 ? 1 : 0;

        break;

    default:
    printf("Opção inválida!\n");

        break;
    }
}

// Implementando a lógica do jogo para obter o resultado;

if ((resultado1 && resultado2) && (resultado3)) {
    printf("*** Parabéns, você venceu! ***\n");
} else if ((resultado1 && resultado2) != (resultado3)) {
    printf("*** Parabéns, você venceu! ***\n");
} else {
    printf("### Lamento, você perdeu! ###\n");
}

// Impressão carta 1;

printf("### Nome da Carta: %c ###\n", carta1);
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

printf("### Nome da Carta: %c ###\n", carta2);
printf("Código: %s \n", codigo2);
printf("Cidade: %s \n", cidade2);
printf("Espaço Territorial: %d \n", espaco2);
printf("Número de Habitantes: %d \n", pessoas2);
printf("Pontos Turísticos: %d \n", locais2);
printf("PIB: R$ %lld \n", pib2);
printf("Densidade demográfica: %.3f \n", densidade2);
printf("Distribuição de renda: R$ %.3f \n", distribuicao2);
printf("Super Poder da carta B: %lld \n", SuperPoder2);

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

// Criando condicões para os valores dos atributos de cada carta;
// Criando menu de atributos para escolha do jogador;
// Possibilitando que o jogador compare os atributos de cada carta;

printf("*** Menu de atributos das cartas: ***\n ");
printf("### Carta A: Palmas ###\n");
printf("### Carta B: Goiânia ###\n");
printf("1. Espaço Territorial\n");
printf("2. População\n");
printf("3. Pontos Turísticos\n");
printf("4. PIB\n");
printf("5. Densidade Demográfica\n");
printf("6. Distribuição de Renda\n");
printf("7. Super Poder\n");
printf("Escolha um atributo para comparar: ");
scanf("%d", &Escolha);

switch(Escolha){
case 1:
printf("Território da Carta A é: %d \n", espaco1);
printf("Território da Carta B é: %d \n", espaco2);

if (espaco1 > espaco2){
   printf("### Carta A é a vencedora! ###\n");
} else if(espaco1 < espaco2) {
    printf("### Carta B é a vencedora! ###\n");
} else
    printf("### O resulatdo é empate! ###\n");
    break;

case 2:
printf("A população da Carta A é: %d \n", pessoas1);
printf("A população da Carta B é: %d \n", pessoas2);

if (pessoas1 > pessoas2) {
    printf("### Carta A é a vencedra! ###\n");
} else if(pessoas1 < pessoas2) {
    printf("### Carta B é a vencedora! ###\n");
} else
    printf("### O resultado é empate! ###\n");
    break;

case 3:
printf("Pontos turísticos de A são: %d \n", locais1);
printf("Pontos turísticos de B são: %d \n", locais2);

if (locais1 > locais2) {
    printf("### Carta A é a vencedora! ###\n");
} else if(locais1 < locais2) {
    printf("### Carta B é a vencedora! ###\n");
} else
    printf("### O resultado é empate! ###\n");
    break;
case 4:
printf("O PIB de A é: R$ %u \n", pib1);
printf("O PIB de B é: R$ %lld \n", pib2);

if (pib1 > pib2) {
    printf("### Carta A é a vencedora! ###\n");
} else if(pib1 < pib2) {
    printf("### Carta B é a vencedora! ###\n");
} else
    printf("### O resultado é empate! ###\n");
    break;

case 5:    
printf("A densidade demográfica de A é: %.3f \n", densidade1);
printf("A densidade demográfica de B é: %.3f \n", densidade2);

if (densidade1 < densidade2) {
    printf("### Carta A é a vencedora! ###\n");
} else if(densidade1 > densidade2) {
    printf("### Carta B é a vencedora! ###\n");
} else
    printf("### O resultado é empate! ###\n");
    break;

case 6:    
printf("A distribuição de renda de A é: %.3f \n", distribuicao1);
printf("A distribuição de renda de B é: %.3f \n", distribuicao2);

if (distribuicao1 > distribuicao2) {
    printf("### Carta A é a vencedora! ###\n");
} else if(distribuicao1 < distribuicao2) {
    printf("### Carta B é a vencedora! ###\n");
} else
    printf("### O resultado é empate! ###\n");
    break;

case 7:    
printf("O super poder de A vale: %.3f \n", SuperPoder1);
printf("O super poder de B vale: %lld \n", SuperPoder2);

if (SuperPoder1 > SuperPoder2) {
    printf("### Carta A é a vencedora! ###\n");
} else if (SuperPoder1 < SuperPoder2) {
    printf("### Carta B é a vencedora! ###\n");
} else
    printf("### O resultado é empate! ###\n");
    break;

default:
printf("### Opção indisponível! ###\n");
break;
}


// Início do jogo;

printf("### Escolha o primeiro atributo ###\n");
printf("A. Ataque\n");
printf("D. Defesa\n");
printf("R. Recuo\n");




return 0;

}