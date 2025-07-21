#include <stdio.h>

int main(){

int numero1 = 25; 
int numero2 = 30;
int idade = 17;
float temoperatura = 17.7;
float nota = 6.6;
int idade1 = 40; 
int idade2 = 50;
int Numero = 5; 
int resultado;
int estoque = 50;

resultado = Numero % 2;

if (numero1 < numero2) {

printf("Numero 1 é menor que numero 2 \n");
} else { printf("Número 1 é maior que número 2 \n");}

if (idade >= 18) {
printf("Você é maior de idade \n");
} else {printf("Você é menor de idade \n");}

if (temoperatura >= 35) {
printf("O tempo está quente \n");
} else {printf("O tempo não está quente \n");}

if (nota >= 7) {
printf("Você foi aprovado! Parabéns! \n");
} else {printf("Infelizmente você foi reprovado! \n");}

if (idade1 > idade2) {
printf("Pessoa 1 é mais velha que pessoa 2 \n");   
} else {printf("A pessoa 1 é mais nova \n");}

if (Numero % 2 == 0) {
printf("O número é par \n");
} else {printf("O número é impar \n");}

if (resultado == 0) {
printf("A variável resultado é: %d \n", resultado);
}

if (estoque < 40) {
printf("O estoque está baixo \n");
} else {printf("O estoque não está baixo \n");}

printf("if fora \n");
    
}