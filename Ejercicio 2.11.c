#include <stdio.h>
/*Una pizzería vende empanadas por unidad o por docena, la docena cuesta $300 pero si se compra
individualmente se cobra $30 la unidad. Si se compran más empanadas que no se agrupen en docenas las
adicionales se cobran como por unidad. Indicar el precio total a abonar.*/


int main()
{

    int docena;
    int unidad;
    int empanadas;

    printf ("Ingrese la cantidad de empanadas: ");
    scanf ("%d", &empanadas);
    docena = empanadas / 12;
    unidad = empanadas % 12;
    printf ("El monto total es de %d", docena * 300 + unidad * 30);

    return 0;
}
