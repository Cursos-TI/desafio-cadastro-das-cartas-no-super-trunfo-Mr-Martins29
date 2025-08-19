#include <stdio.h>

int main(){

    int idade; 
    float renda;

    // If (condicao1) {
    // If (condicao2) {
       // codigo a ser executado se condicao1 e condicao2 forem verdadeiras
    //     } else {
           
    //  } else 
    

    /* programa verifica se pessoa está qualificacda para um desconto  especial 
    com base na idade e na renda mensal.
    A pessoa deve ter menos de 18 ou mais de 60 anos de idade, 
    e ter uma renda mensal abaixo de R$ 2000,00
     */

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua renda: ");
    scanf("%f", &renda);
    
    if (idade <= 18 || idade >= 60) 
    {
        if (renda < 2000)
        {
            printf("Você tem direito ao desconto! \n");
        } else {
            printf("Você não tem direito ao desconto devido à renda! \n");
        }
    } else {
            printf("Você não tem direito ao desconto devido à idade! \n");
        }

    return 0;
        
} 
