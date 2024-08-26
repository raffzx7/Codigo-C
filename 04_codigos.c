#include <stdio.h>

int main() {

    float valor1, valor2, diferenca;

    printf("insira o primeiro valor:\n");
    scanf("%f", &valor1);

    printf("insira o segundo valor:\n");
    scanf("%f", &valor2);

    diferenca = valor1 - valor2;

    printf("a diferença entre os dois valores é: %.2f\n", diferenca);

    return 0;
}
