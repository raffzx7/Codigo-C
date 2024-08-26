#include <stdio.h>

int main() {
    int a, b, temp;

    printf("insira o valor da variável a:\n");
    scanf("%d", &a);
    printf("insira o valor da variável b:\n");
    scanf("%d", &b);

    printf("valores antes da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("valores após a troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
