#include <stdio.h>
/*Confeccionar un programa que ingrese un valor expresado en Kibibyte (KiB)
y lo informe expresado en: TiB, GiB, MiB, con leyendas aclaratorias. (1MiB = 1024 KiB; 1GiB = 1024 MiB; 1TiB = 1024 GiB)*/

int main()
{


    int kib;
    float kib_mb;
    float kib_tb;
    float kib_gb;

    printf ("Ingrese su kibibyte ");
    scanf ("%d", &kib);

    kib_mb= kib/1024;
    kib_gb= kib_mb/1024;
    kib_tb= kib_gb/1024;

    printf ("\nValor en TiB %.2f", kib_tb);
    printf ("\nvalor en MiB %.2f", kib_mb);
    printf ("\nValor en GiB %.2f", kib_gb);

    return 0;


}
