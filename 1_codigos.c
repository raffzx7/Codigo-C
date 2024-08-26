#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, total;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    total = nota1 + nota2 + nota3 + nota4;

    printf("A pontuação total das quatro notas é: %.2f\n", total);

    return 0;
}
