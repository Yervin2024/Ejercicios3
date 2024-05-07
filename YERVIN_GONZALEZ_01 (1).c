#include<stdio.h>
#include<conio.h>

int main()
{
    int N1;
    int N2;
    int N3;
    int N4;
    int ma;

    printf("Este es un Programa que Determinará Cuál Será el Mayor Número de Cuatro Dígitos Proporcionados por el Usuario.\n");

    printf("Por Favor, Ingrese el Primer Número: ");
    scanf("%d", &N1);

    printf("Por Favor, Ingrese el Segundo Número: ");
    scanf("%d", &N2);

    printf("Por Favor, Introduzca el Tercer Número: ");
    scanf("%d", &N3);

    printf("Por Favor, Introduzca el Cuarto Número: ");
    scanf("%d", &N4);

    ma=N1;

    if (N2 > ma) {
        ma = N2;
    }
    if (N3 > ma) {
        ma = N3;
    }
    if (N4 > ma) {
        ma = N4;
    }

    printf("El Mayor de los Cuatro Números Proporcionados es: %d\n", ma);
    
    return(0);
}