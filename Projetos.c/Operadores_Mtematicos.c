#include <stdio.h>

int main(){
/*
soma (+)
subtracao (-)
multiplicacao (*)
divisao (/)
*/
int numero1, nuemero2;
int soma, subtracao, mltiplicacao, divisao;

printf("Digite o primeiro numero: \n");
scanf("%d", &numero1);
printf("Digite o segundo numero: \n");
scanf("%d", &nuemero2);

// operacao soma
soma = numero1 + nuemero2;

// operacao subtracao
subtracao = numero1 - nuemero2;

// operacao multiplicacao
mltiplicacao = numero1 * nuemero2;

// operacao divisao
divisao = numero1 / nuemero2;

printf("Soma: %d \n", soma);
printf("Subtracao: %d \n", subtracao);
printf("Multiplicacao: %d \n", mltiplicacao);
printf("Divisao: %d \n", divisao);

return 0;

}