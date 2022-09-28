#include <stdio.h>
//Confeccionar un programa que pueda determinar de 3 números enteros que se ingresan si alguno de ellos
//es igual a la suma de los otros dos.

int main()
{

    int a,b,c = 0;
    printf("ingrese un numero: ");
    scanf("%d",&a);
    printf("ingrese un numero: ");
    scanf("%d",&b);
    printf("ingrese un numero: ");
    scanf("%d",&c);


    if (a== b+c)
    {
        printf("\n%d es igual a la suma de %d y %d", a, b, c);

    }
    if (b== a+c)
    {
        printf("\n%d es igual a la suma de %d y %d", b, a, c);

    }
    if (c== a+b)
    {
        printf("\n%d es igual a la suma de %d y %d", c, a, b);

    }


    return 0;
}

