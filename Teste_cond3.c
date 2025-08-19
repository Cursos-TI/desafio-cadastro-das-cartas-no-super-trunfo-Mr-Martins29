#include <stdio.h>

int main(){

// Primrira condição: idade do usuário está entre 18 e 65 anos
// Segunda condição: se a renda do usuário é menor que 3000
// Terceira condição: número de dependentes ser maior que 2

int idade, dependentes;
float renda;

printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Digite sua renda: ");
scanf("%f", &renda);
printf("Digite o número de dependentes: ");
scanf("%d", &dependentes);

if (idade >= 18 && idade < 65) {
    if (renda < 3000){
       if (dependentes > 2){
        printf("Você atende  a todos os critérios! \n");
       } else {
        printf("Você não atende ao critério dependentes! \n");
       }
       
 } else {
        printf("Você não atende ao crutério renda! \n");
    }

} else {
    printf("Você não atende ao critério idade! \n");
}

return 0;
}