#include <stdio.h>
#include <conio.h>

int main() {
    int Op;
    float Ld;
    float Bs;
    float Al;
    float Rd;
    float area;
    
    printf("Este Programa te Permitirá Calcular el Área de un Cuadrado, Triángulo o Círculo, según la Opción Especificada por el Usuario.\n");

    printf("Seleccione la Figura a la que le Desea Calcular el Área: ");
    printf("1) Cuadrado\n");
    printf("2) Triángulo\n");
    printf("3) Círculo\n");
    printf("Opción: ");
    scanf("%d", &Op);

    switch (Op) {
    case 1: 
        printf("Ingrese la Longitud de un Lado del Cuadrado: ");
        scanf("%f", &Ld);
        area = Ld * Ld;
        printf("El Área del Cuadrado es: %.2f\n", area);
        break;
    case 2: 
        printf("Por favor, Ingrese la Longitud de la Base del Triángulo: ");
        scanf("%f", &Bs);
        printf("Ahora, Ingrese la Altura del Triángulo: ");
        scanf("%f", &Al);
        area = (Bs * Al) / 2;
        printf("El Área del Triángulo es: %.2f\n", area);
        break;
    case 3: 
        printf("Ingrese el Radio del Círculo: ");
        scanf("%f", &Rd);
        area = 3.14159*(Rd*Rd);
        printf("El Área del Círculo es: %.2f\n", area);
        break;
    default:
        printf("Opción No Válida.\n");
    }

    return 0;
}
