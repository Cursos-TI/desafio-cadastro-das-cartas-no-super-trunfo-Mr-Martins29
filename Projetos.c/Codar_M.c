#include <stdio.h>

int main(){

// Declarar variáveis Produto, u i estoque, double valor unitário, double valor total
// e u i quantidade mínima;

char ProdutoA[30] = "Produto A";
char ProdutoB[30] = "Produto B";

unsigned int EstoqueA = 1000;
unsigned int EstoqueB = 2000;

float ValorA = 10.50;
float ValorB = 20.40;

unsigned int EstoqueMinimoA = 500;
unsigned int EstoqueMinimoB = 2500;

double ValorTotalA;
double ValorTotalB;

int resultadoA, resultadoB;

// Exibir as informações dos produtos;

printf("Produto: %s tem estoque %u e o valor unitário é R$ %.2f \n", ProdutoA, EstoqueA, ValorA);

printf("Produto: %s tem estoque %u e o valor unitário é R$ %.2f \n", ProdutoB, EstoqueB, ValorB);

// Comparações com o  valor mínimo de estoque;

resultadoA = EstoqueA > EstoqueMinimoA;
resultadoB = EstoqueB > EstoqueMinimoB;

printf("O produto %s tem estoque mínimo %d \n", ProdutoA, resultadoA);
printf("O produto %s tem estoque mínimo %d \n", ProdutoB, resultadoB);

// Comparações com o valor total de estoque;

printf("O valor total de A (R$ %.2f) é maior que o valor total de B? (R$ %.2f): %d \n", 
                                                                                                                         
            EstoqueA * ValorA,
            EstoqueB * ValorB,
                                                           (EstoqueA * ValorA) >                        
                                                           (EstoqueB * ValorB));

}