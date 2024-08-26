#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("insira a primeira nota:\n");
    scanf("%f", &nota1);

    printf("insira a segunda nota:\n");
    scanf("%f", &nota2);

    printf("insira a terceira nota:\n");
    scanf("%f", &nota3);

    printf("insira a quarta nota:\n");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("a média das quatro notas é: %.2f\n", media);

    return 0;
}
