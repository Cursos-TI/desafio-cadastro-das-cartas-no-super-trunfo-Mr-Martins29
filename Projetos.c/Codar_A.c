#include <stdio.h>

int main(){
// apesar de esse programa estar sendo rodado com casting, o ideal é usar a variável float;
// já que em geral, as médias finais aparecem em numeros decimais.

float nota1, nota2, nota3; 
 
float media;

printf("*** Programa de Calculo de Media ***\n");

printf("Digite sua primeira nota: \n");
scanf("%f", &nota1);

printf("Digite sua segunda nota: \n");
scanf("%f", &nota2);

printf("Digite sua terceira nota: \n");
scanf("%f", &nota3);

media = (nota1 + nota2 + nota3) / 3;

printf("A média final é: %.1f \n", media);

return 0;

}