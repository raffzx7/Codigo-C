#include <stdio.h>

int main() {
    float peso_kg, peso_g;

    printf("Digite o peso em quilos: ");
    scanf("%f", &peso_kg);

    peso_g = peso_kg * 1000;

    printf("O peso em gramas é: %.2f g\n", peso_g);

    return 0;
}
