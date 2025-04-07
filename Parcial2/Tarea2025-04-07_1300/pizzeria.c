#include <stdio.h>

int main() {
    int opc1, opc2;
    char* pizza;
    char* ingrediente;

    printf("Pizzaria Bella Napoli\n");
    printf("Elige su tipo de pizza: 1-vegetariana 2-no vegetariana\n");
    scanf("%d", &opc1);

    if (opc1 == 1 || opc1 == 2) {
        if (opc1 == 1) {
            pizza = "vegetariana";
            printf("Elija un ingrediente: 1-pimiento 2-tofu\n");
            scanf("%d", &opc2);

            if (opc2 == 1 || opc2 == 2) {
                if (opc2 == 1) {
                    ingrediente = "pimiento";
                } else {
                    ingrediente = "tofu";
                }
                printf("Pizza %s\nIngredientes: Mozzarella, Tomate y %s\n", pizza, ingrediente);
            } else {
                printf("Opción no válida\n");
            }
        } else {
            pizza = "no vegetariana";
            printf("Elija un ingrediente: 1-pepperoni 2-jamon 3-salmon\n");
            scanf("%d", &opc2);

            if (opc2 == 1 || opc2 == 2 || opc2 == 3) {
                if (opc2 == 1) {
                    ingrediente = "pepperoni";
                } else if (opc2 == 2) {
                    ingrediente = "jamon";
                } else {
                    ingrediente = "salmon";
                }
                printf("Pizza %s\nIngredientes: Mozzarella, Tomate y %s\n", pizza, ingrediente);
            } else {
                printf("Opción no válida\n");
            }
        }
    } else {
        printf("Opción no válida\n");
    }

    return 0;
}
