#include <stdio.h>

int main() {

    int a, b, temp;

    printf("Digite o valor da variável a: ");
    scanf("%d", &a);
    printf("Digite o valor da variável b: ");
    scanf("%d", &b);

    printf("Valores antes da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("Valores após a troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
    
}
