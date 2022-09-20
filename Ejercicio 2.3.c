#include <stdio.h>
/*Confeccionar un programa que pueda ingresar 2 números enteros y calcule e informe con mensajes
aclaratorios la suma, el producto, el cociente y el resto */
int main()
{
// calculadora
    int suma;
    int producto;
    int cociente;
    int resto;
    int a;
    int b;

    printf ("ingrese un numero");
    scanf("%d", &a);
    printf ("ingrese otro numero");
    scanf ("%d", &b);

    suma = a + b;
    producto = a * b;
    cociente = a / b;
    resto = a - b;

    printf ("\nla suma es de %d",suma);
    printf ("\nel producto es de es de %d",producto);
    printf ("\nel cociente es de %d",cociente);
    printf ("\nel resto es de %d",resto);
    return 0;

}
