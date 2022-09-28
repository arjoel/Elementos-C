#include <stdio.h>
//Dados tres números determinar e informar con un mensaje si el primer número ingresado es menor que
//los otros dos.

int main()
{

    int a,b,c,menor = 0;
    printf("ingrese un numero :");
    scanf("%d",&a);
    printf("ingrese un numero :");
    scanf("%d",&b);
    printf("ingrese un numero :");
    scanf("%d",&c);
    if (a < b && a < c)
    {
        menor = a;
    }
    if ( b < a && b < c)
    {
        menor = b;

    }
    if (c < a && c < b)
    {
        menor = c;
    }
    printf ("el numero menor es %d", menor);
    return 0;
}
