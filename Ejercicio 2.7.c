#include <stdio.h>
//Se ingresa un número entero de 3 cifras. Descomponerlo en unidad, decena y centena.

int main ()
{

    int numero;
    int unidad;
    int decena;
    int centena;

    printf ("Ingrese un numero de 3 cifras: ");
    scanf ("%d", &numero);

    unidad = numero % 10;
    decena = (numero / 10) % 10;
    centena = numero / 100;

    printf ("\nla centena es igual a %d ", centena);
    printf ("\nla decena es igual a %d ", decena);
    printf ("\nla unidad es igual a %d ", unidad);

    return 0;


}
