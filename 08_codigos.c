#include <stdio.h>

int main() {
    float temp_fahrenheit, temp_celsius;

    printf("insira a temperatura em fahrenheit: ");
    scanf("%f", &temp_fahrenheit);

    temp_celsius = (temp_fahrenheit - 32) / 1.8;

    printf("a temperatura em Fahrenheit: %.2f°F\n", temp_fahrenheit);
    printf("a temperatura em Celsius: %.2f°C\n", temp_celsius);

    return 0;
}
