#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: No se puede dividir entre cero.\n");
        return 0;
    }
}

int main() {
    int num1, num2, opcion;
    
    printf("Ingrese dos números: ");
    scanf("%d %d", &num1, &num2);

    printf("Seleccione la operación:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Resultado de la suma: %d\n", suma(num1, num2));
            break;
        case 2:
            printf("Resultado de la resta: %d\n", resta(num1, num2));
            break;
        case 3:
            printf("Resultado de la multiplicación: %d\n", multiplicacion(num1, num2));
            break;
        case 4:
            printf("Resultado de la división: %.2f\n", division(num1, num2));
            break;
        default:
            printf("Opción no válida.\n");
    }

    return 0;
}
