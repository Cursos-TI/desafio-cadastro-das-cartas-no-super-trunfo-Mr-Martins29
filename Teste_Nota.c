#include <stdio.h>

int main(){

    float nota;

    printf("Digite a sua nota: \n");
    scanf("%f", &nota);

    // nota >=9 = A+;
    // nota >=8 < 9 = A;
    // nota >=7 < 8 = B+;
    // nota >=6 < 7 = B;
    // nota >=5 < 6 = C;
    // nota >=4 < 5 = D;
    // nota >=3 < 4 = E;
    // nota < 3 = F;

if (nota >= 9) {
    printf("Você é um aluno A+, parabéns! \n");
} else if (nota >= 8 && nota < 9) {
    printf("Muito bem! Você tirou A! Um pouco mais de dedicação e você chega no A+ \n ");
} else if (nota >= 7 && nota < 8) {
    printf("Você tirou B+, está indo bem, mas pode melhorar! \n");
} else if (nota >= 6 && nota < 7) {
    printf("Você tirou B, é um aluno mediano. Preste mais atenção! \n");
} else if (nota >= 5 && nota < 6) {
    printf("Você tirou C, está abaixo da média. Se continuar assim será reprovado! \n");
} else if (nota >= 4 && nota < 5) {
    printf("Você tirou D, precisa levar os estudos a sério! \n");
} else if (nota >= 3 && nota < 4) {
    printf("Você tirou um E, o que tem feito aqui todo esse tempo? \n");
} else {
    printf("Um F, é sério isso? Nem acredito que é meu aluno. Que vergonha! \n");
}

}