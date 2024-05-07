#include <stdio.h>
#include <conio.h>

int main() {
    const float Iva = 0.12; 
    const float Des = 0.05; 
    float P_U;
    float P_B;
    float P_I;
    float P_F;
    int Can;
    
    printf("Este Programa te Permitirá Calcular el Precio Final de un Artículo Incluyendo el IVA del 12 Porciento, y si el Total Supera los 50,000 Bolívares, se Aplicará un Descuento Adicional del 5 Porciento.\n" );
    
    printf("Ingrese el Precio Unitario del Artículo: ");
    scanf("%f", &P_U);
    printf("Ingrese la cantidad de artículos: ");
    scanf("%d", &Can);
    
    P_B = P_U * Can;
    
    P_I = P_B * (1 + Iva);

    if (P_I > 50000) {
        P_F = P_I * (1 - Des);
    } else {
        P_F = P_I;
    }
    
    printf("Precio Bruto: %.2f\n", P_B);
    printf("IVA (12%%): %.2f\n", P_B * Iva);
    printf("Precio con IVA: %.2f\n", P_I);
    if (P_I > 50000) {
        printf("Descuento (5%%): %.2f\n", P_I * Des);
    }
    printf("Precio final: %.2f\n", P_F);

    return 0;
}
    