#include <stdio.h>
 
int main() {
    float valor1, valor2, divisao;

    printf("inisra o primeiro valor: ");
    scanf("%f", &valor1);

    printf("inisra o segundo valor: ");
    scanf("%f", &valor2);

    if (valor2 != 0) {

        divisao = valor1 / valor2;
        printf("A divisão do primeiro valor pelo segundo é: %.2f\n", divisao);

    } else {
        printf("erro: divisão por zero não é permitida.\n");
    }
    return 0;
}
