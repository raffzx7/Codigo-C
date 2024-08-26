include <stdio.h>

int main() {
    float peso_prato, valor_a_pagar;
    const float preco_por_quilo = 45.00;

    printf("inisra o peso do prato em quilos: ");
    scanf("%f", &peso_prato);

    valor_a_pagar = peso_prato * preco_por_quilo;

    printf("O valor a pagar é: R$%.2f\n", valor_a_pagar);

    return 0;
}
