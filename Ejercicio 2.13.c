#include <stdio.h>
/*Confeccionar un programa que solicite el ingreso de un número entero positivo de 4 cifras y pueda calcular
e informar la suma de sus dígitos hasta llegar a una sola cifra. Ej:2561 → 5.*/


int main()
{

    int numero;
    int mil;
    int centena;
    int decena;
    int unidad;
    int nuevo_numero;
    int nuevo_numero_decena;
    int nuevo_numero_unidad;
    int numero_descomprimido;
    printf("ingrese un numero: ");
    scanf("%d", &numero);
    mil = numero / 1000;
    centena=numero % 100 / 10;
    decena= numero % 1000 / 100;
    unidad = numero % 10;
    printf ("mil %d\n", mil);
    printf ("centena %d\n", centena);
    printf ("decena %d\n", decena);
    printf ("unidad %d\n", unidad);
    nuevo_numero = ( mil + centena + decena + unidad );
    printf ("numero nuevo: %d\n", nuevo_numero);
    nuevo_numero_decena = nuevo_numero / 10;
    nuevo_numero_unidad = nuevo_numero % 10;
    numero_descomprimido = nuevo_numero_decena + nuevo_numero_unidad;
    printf ("El numero descomprimido es igual a : %d", numero_descomprimido);

    return 0;
}
