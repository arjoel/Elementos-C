#include <stdio.h>
/*Conociendo la cantidad de tarros de pintura que existe en un depósito de una pinturería y sabiendo que el
50% son tarros de 1Lt, el 30% tarros de 4Lts. y el resto tarros de 20Lts. Determinar la cantidad de tarros de
1Lt., 4Lts. Y 20 Lts. */


int main ()
{

    int tarros_totales = 80;
    int tarros1lt = (tarros_totales * 50) / 100;
    int tarros4lt = (tarros_totales * 30) / 100 ;
    int tarros20lt= (tarros_totales - tarros4lt) - tarros1lt ;



    printf ("\nlos tarros totales de 1lt son de %d",tarros1lt);
    printf ("\nlos tarros totales de 4lt son de %d",tarros4lt);
    printf ("\nlos tarros totales de 20lt son de %d",tarros20lt);
//
    return 0;

}
