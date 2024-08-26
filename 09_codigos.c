#include <stdio.h>
#include <math.h>

int main() {
    float raio, diametro, comprimento, area;
    const float PI = 3.14;

    printf("inisra o valor do raio da circunferência: ");
    scanf("%f", &raio);

    diametro = 2 * raio;

    comprimento = 2 * PI * raio;

    area = PI * pow(raio, 2);

    printf("diâmetro: %.2f\n", diametro);
    printf("comprimento: %.2f\n", comprimento);
    printf("área: %.2f\n", area);

    return 0;
}
