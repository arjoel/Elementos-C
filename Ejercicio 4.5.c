#include <stdio.h>
//Se ingresan 3 números enteros. Informarlos en orden creciente.

int main()
{


    int a,b,c;
    printf("ingrese un numero: ");
    scanf("%d", &a);
    printf("ingrese un numero: ");
    scanf("%d", &b);
    printf("ingrese un numero: ");
    scanf("%d", &c);


    if (a > b && a > c )
    {
        printf("\nen orden creciente:%d%d%d",b,c,a);
    }
    if ( b > a && b > c)
    {
        printf("\n en  orden creciente:%d%d%d",c,a,b);
    }
    if (c > a && b > a )
    {
        printf("\n en orden creciente: %d%d%d",a,b,c);
    }
    if (c < b  && a < c )
    {
        printf("\n en orden creciente: %d%d%d",a,c,b);
    }

    if ( b < a && c < b)
    {
        printf("\norden creciente: %d%d%d",c,b,a);
    }
    if ( b < c && a > b )
    {
        printf("\norden creciente: %d%d%d",b,a,c);
    }

    return 0;

}
