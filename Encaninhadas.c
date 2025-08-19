#include <stdio.h>

int main(){

// Montar uma estrutura que seja
// ao mesmo tempo, encadeada e aninhada
// Trabalhar com condições numéricas
// positivo, negativo ou igual a zero
// na esttrtura encadeada
// em seguida trabalhar condições de números pares e ímpares
// na estrutura aninhada

int numero;

printf("Digite um número: ");
scanf("%d", &numero);

if (numero > 0) {
    if (numero % 2 == 0) {
     printf("O número é par! \n");
    } else {
        printf("O número é ímpar! \n");
    }
} else if (numero == 0) {
    printf("O número é zero! \n");
 } else {
    printf("O número é negativo! \n");
}

}