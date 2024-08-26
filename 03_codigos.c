#include <stdio.h>

int main() {

    float largura, altura, area;

    printf("Digite a largura do retângulo (em metros): ");
    scanf("%f", &largura);

    printf("Digite a altura do retângulo (em metros): ");
    scanf("%f", &altura);

    area = largura * altura;

    printf("A área do retângulo é: %.2f metros quadrados\n", area);

    return 0;
}
