#include <stdio.h>
/*Confeccionar un programa que ingrese una medida en ‘pies’ y la exhiba convertida a yardas, pulgadas, cms.
y mts.
 */



int main ()
{

    int pies;
    float pies_a_yardas;
    float pies_a_pulgadas;
    float pies_a_cms;
    float pies_a_mts;


    printf ("ingrese su medida en pies : ");
    scanf ("%d", &pies );


    pies_a_yardas = pies/3;
    pies_a_pulgadas = pies * 12;
    pies_a_cms = pies * 30.48;
    pies_a_mts = pies / 3.281;


    printf ("El valor de pies a yardas es de %2f", pies_a_yardas);
    printf ("El valor de pies a pulgadas es de %2f", pies_a_pulgadas);
    printf ("El valor de pies a centimetros es de %2f", pies_a_cms);
    printf ("El valor de pies a metros es de %2f", pies_a_mts);


    return 0;

}



