#include <stdio.h>

/*Se ingresa un número entero que representa una fecha con formato (ddmmaa). Se pide transformarlo a un
número con formato (aammdd)*/

int main()
{

    int dd;
    int mm;
    int aa;

    printf ("Ingrese un dia: ");
    scanf ("%d", &dd);
    printf ("Ingrese un mes: ");
    scanf ("%d", &mm);
    printf ("Ingrese un anio: ");
    scanf ("%d", &aa);

    printf ("La fecha que ud introducio fue %d/%d/%d", aa, mm, dd);







    return 0;
}


