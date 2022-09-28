#include <stdio.h>
//Se ingresan 3 números distintos. Determinar el mayor
int main()
{

    int a,b,c,mayor = 0;

    printf("ingrese un numero: ");
    scanf("%d", &a);
    printf("ingrese un numero: ");
    scanf("%d", &b);
    printf("ingrese un numero: ");
    scanf("%d", &c);


    if (a > b || a > c)
    {
        mayor = a;
    }
    if ( b > a || b > c)
    {
        mayor = b;
    }
    if ( c > a || c > b)
    {
        mayor = c;
    }

    printf ("el numero mayor es %d", mayor);

    return 0;

}
