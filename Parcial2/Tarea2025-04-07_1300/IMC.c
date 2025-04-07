#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Entrada de datos
    printf("Ingresa tu altura (m): ");
    scanf("%f", &altura);

    printf("Ingresa tu peso (kg): ");
    scanf("%f", &peso);

    // Validación de entrada
    if (peso > 0 && altura > 0) {
        // Cálculo del IMC
        imc = peso / (altura * altura);
        printf("Tu IMC es: %.2f\n", imc);

        // Clasificación según IMC
        if (imc <= 18.4) {
            printf("Salida: Bajo peso\n");
        } else if (imc <= 24.9) {
            printf("Salida: Peso Normal\n");
        } else if (imc <= 29.9) {
            printf("Salida: Sobrepeso\n");
        } else if (imc <= 34.9) {
            printf("Salida: Obesidad clase 1\n");
        } else if (imc <= 39.9) {
            printf("Salida: Obesidad clase 2\n");
        } else {
            printf("Salida: Obesidad clase 3\n");
        }
    } else {
        printf("Error: El peso y la altura deben ser mayores que 0.\n");
    }

    return 0;
}
