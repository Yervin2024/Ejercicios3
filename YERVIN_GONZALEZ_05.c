#include <stdio.h>
#include <conio.h>

int main() {
    float Dis;
    float PrecioKm = 2.5;
    float PrecioN;
    float PrecioD;
    int DiasE;
    
    printf("Este Programa Calculará el Precio de un Billete de Ida y Vuelta en Ferrocarril Bajo las Condiciones de que si el Número de Días de Estancia es Superior a 7 y la Distancia es Superior a 800 km. El Billete Tendrá un Descuento del 70 Porciento.\n");
    
    printf("Por Favor, Ingrese la Distancia a Recorrer en Km: ");
    scanf("%f", &Dis);
    printf("Ahora, Introduzca la Cantidad de Días de Estancia: ");
    scanf("%d", &DiasE);
    
    PrecioN = Dis * PrecioKm * 2; 
    
    if (DiasE > 7 && Dis > 800) {
        PrecioD= PrecioN* 0.30; 
    } else {
        PrecioD= PrecioN;
    }
    printf("El Precio del Billete de Ida y Vuelta es: %.2f Bolívares\n", PrecioD);

    return 0;
}
