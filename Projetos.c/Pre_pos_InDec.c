#include <stdio.h>

int main(){

/*Incremento (++)
Pré-Incremento ++a
Pós-Incrementoa a++
Decremento (--)
Pré-Decremento --a
Pós-Decremento a--
*/

// Pós-Incremento:
// resultado = numero1;
// resultado = ++;
int numero1 = 1, resultado;

printf("Antes incremento: %d\n", numero1);

resultado = numero1++;
// printf("Após Incremento: %d\n", numero1,)
printf("Após pós-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);

resultado = ++numero1;

printf("Após pré-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);

// numero1 = numero1 - 1;
// numero1-= 1;
// numero1 --;
// printf("Apos decremento: %d\n", numero1);
resultado = numero1--;
printf("Apos pos-decremento - numero 1: %d - resultado: %d\n", numero1, resultado);

resultado = --numero1;
printf("Apos pre-decremento - numero 1: %d - resultado: %d\n", numero1, resultado);

}