#include <stdio.h>

int main(){
float temperatura, umidade;
unsigned int estoque, EstoqueMínimo = 1000;

printf("Entre com a temperatura: \n");
scanf("%f", &temperatura);

printf("Entre com a umidade: \n");
scanf("%f", &umidade);

printf("Entre com o estoque: \n");
scanf("%u", &estoque);

if (temperatura > 30) {
    printf("Temperatura acima dos parâmetros desejados. \n");
} else {
    printf("Temperatura dentro dos parâmetros desejados. \n");
}

if (umidade > 50) {
   printf("Umidade acima dos parâmetros desejados. \n");
} else {
    printf("Umidade dentro dos parâmetros desejados. \n");
}

if (estoque > EstoqueMínimo) {
    printf("Estoque atende às necessidades. \n");
} else {
    printf("Estoque não atende às necessidades. \n");
}

}
