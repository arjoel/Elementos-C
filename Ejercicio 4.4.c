#include <stdio.h>
/*Ingresar 3 valores reales y:
a. Si los dos primeros son mayores al tercero informar “MAYORES AL TERCERO”.
b. Si los tres son iguales informar “TRES IGUALES .
c. Si alguno de los dos primeros es menor al tercero informar “ALGUNO ES MENOR”.*/


int main()
{
    int a,b,c;

    printf("ingrese un numero: ");
    scanf("%d",&a);
    printf("ingrese un numero: ");
    scanf("%d",&b);
    printf("ingrese un numero: ");
    scanf("%d",&c);


    if (a > c && b > c )
    {
        printf("mayores al terceros");
    }

    if ( a == b && b == c)
    {

        printf("son iguales", a,b,c);
    }

    if (a < c || b < c)
    {
        printf("menores al terceros");
    }

    return 0;

}


