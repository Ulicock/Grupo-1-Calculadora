#include <stdio.h>
#include <stdlib.h>

// Función para sumar
int suma(int a, int b)
{
    return (a+b);
}

// Función para restar
int resta(int a, int b)
{
    return (a-b);
}

// Función para dividir


// Función para multiplicar


// Función principal
int main() {
    int a, b, z;

    do {
        printf("\n¿Que operacion quieres realizar?\n");
        printf("1) Sumar\n");
        printf("2) Restar\n");
        printf("3) Dividir\n");
        printf("4) Multiplicar\n");
        printf("0) Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &z);

        switch(z) {
            case 1:
                printf("Ingresa el valor de a: ");
                scanf("%d", &a);
                printf("Ingresa el valor de b: ");
                scanf("%d", &b);
                printf("El valor de la suma es: %d\n\n", suma(a, b));
                break;
            case 2:
                printf("Ingresa el valor de a: ");
                scanf("%d", &a);
                printf("Ingresa el valor de b: ");
                scanf("%d", &b);
                printf("El valor de la resta es: %d\n\n", resta(a, b));
                break;
            case 3:
                printf("Ingresa el valor de a: ");
                scanf("%d", &a);
                printf("Ingresa el valor de b: ");
                scanf("%d", &b);
                // Verificar si b es 0 para evitar división por cero
                if (b != 0) {
                    printf("El valor de la division es: %.2f\n\n", division(a, b));
                } else {
                    printf("No se puede dividir entre cero.\n\n");
                }
                break;
            case 4:
                printf("Ingresa el valor de a: ");
                scanf("%d", &a);
                printf("Ingresa el valor de b: ");
                scanf("%d", &b);
                printf("El valor de la multiplicacion es: %d\n\n", multiplicacion(a, b));
                break;
            case 0:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida, por favor ingresa una opción entre 0 y 4.\n\n");
        }

    } while (z != 0);

    return 0;
}
