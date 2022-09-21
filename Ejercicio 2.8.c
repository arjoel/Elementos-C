#include <stdio.h>

/*Se ingresa un número entero que representa una fecha con formato (ddmmaa). Se pide transformarlo a un
número con formato (aammdd)*/

int main()
{

    int numero;
    int aa;
    int mm;
    int dd;


    printf ("Ingrese una fecha :");
    scanf ("%d", &numero);

    aa = numero / 10000;
    mm = (numero % 1000) / 10;
    dd = numero % 100;

printf ("La fecha dada vuelta es: %02d, %02d, %02d", dd,mm,aa);










    return 0;
}


