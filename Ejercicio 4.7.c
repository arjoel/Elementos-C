/*Confeccionar un programa que solicite e ingrese 3 valores reales positivos, mayores que cero y determine
e informe si forman o no triángulo. Para ello utilizar el teorema de la desigualdad del triángulo que establece
que la suma de las longitudes de cualesquiera de dos lados de un triángulo es mayor que la longitud del
tercer lado.*/
#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("ingrese un valor: ");
    scanf("%d", &a);
    printf("ingrese un valor: ");
    scanf("%d", &b);
    printf("ingrese un valor: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Los valores forman un triangulo");
    }
    else
    {
        printf("No es un triangulo");
    }

    return 0;
}
