#include <stdio.h>
int main( )
{
    int cantidad, suma, i, num;
    cantidad = 0;
    suma = 0;
    for ( i = 0; i <= 5; i++) // hay 5 recorridas de contador o de posicion porque se inicializa en 1 y hay un >=
    {
        printf("\n Ingrese un numero: ");
        scanf("%d", &num);
        if (num > 0)
            cantidad++;
        else
            suma+=num;
    }
    printf("La cantidad de numeros positivos es %d \n", cantidad);
    printf("La sumatoria de los numeros positivos es %d \n", suma);
    return 0;
}
