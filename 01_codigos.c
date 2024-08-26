#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, total;

    printf("insira a primeira nota:\n");
    scanf("%f", &nota1);

    printf("insira a segunda nota:\n");
    scanf("%f", &nota2);

    printf("insira a terceira nota:\n");
    scanf("%f", &nota3);

    printf("insira a quarta nota:\n");
    scanf("%f", &nota4);

    total = nota1 + nota2 + nota3 + nota4;

    printf("a pontuação total das quatro notas é: %.2f\n", total);

    return 0;
}
