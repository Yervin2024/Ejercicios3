#include<stdio.h>
#include<conio.h>

int main()
{
    int Num;
    
    printf("Este Programa Determinará si Cualquier Número Entero Ingresado por el Usuario es Par o Impar.\n");

    printf("Ingrese Cualquier Valor Numérico de Tipo Entero: ");
    scanf("%d", &Num);
    
    if (Num % 2 == 0) {
        printf("El Número %d es Par.\n", Num);
    } else {
        printf("El Número %d es Impar.\n", Num);
    }
    return(0);
}