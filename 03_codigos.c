#include <stdio.h>

int main() {

    float largura, altura, area;

    printf("insira a largura do retângulo (em metros): ");
    scanf("%f", &largura);

    printf("insira a altura do retângulo (em metros): ");
    scanf("%f", &altura);

    area = largura * altura;

    printf("a área do retângulo é: %.2f metros quadrados\n", area);

    return 0;
}
