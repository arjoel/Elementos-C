#include <stdio.h>
/*Confeccionar un programa que solicite el ingreso del valor del radio (r) de un círculo y con dicho valor calcule
la superficie del círculo, la longitud de la circunferencia (perímetro) y el volumen de la esfera. */


int main()
{



    int radio;
    int pi= 3.14;
    float superficie;
    float perimetro;
    float volumen;

    printf ("Ingrese el radio ");
    scanf ("%d", &radio);

    superficie = pi * radio * radio;
    perimetro = 2 * pi * radio;
    volumen = (4/3) * pi;

    printf ("\n La superficie es igual a : %.2f", superficie);
    printf ("\n El perimetro es igual a : %.2f", perimetro);
    printf ("\n El volumen es igual a : %.2f", volumen);


    return 0;

}
