#include <stdio.h>
/*Confeccionar un programa que permita ingresar 4 números enteros, de a uno por vez y determine el menor
valor y su número de orden. Informe los valores ingresados e identifique al menor con mensaje aclaratorio.*/

int main()


{
    int num1,num2,num3,num4, menor = 0;
    printf("ingrese el primer numero : ");
    scanf("%d",&num1);
    printf("ingrese el segundo numero : ");
    scanf("%d",&num2);
    printf("ingrese el tercer numero : ");
    scanf("%d",&num3);
    printf("ingrese el cuarto numero : ");
    scanf("%d",&num4);

    if ( num1 < num2  && num1 < num3 && num1 < num4 )
    {
        menor = num1;
        printf("\nel menor numero ingresado fue %d y es el primer numero",num1);
    }
    if ( num2 < num1 && num2 < num3 && num2 < num4)
    {
        menor = num2;
        printf("\nel menor numero ingresado fue %d y es el segundo numero",num2);
    }

    if (num3 < num2 && num3 < num2 && num3 < num1)
    {
        menor = num3;
        printf("\nel menor numero ingresado %d y es el tercer numero",num3);
    }
    if (num4 < num1 && num4 < num2 && num4 < num3)
    {
        menor = num4;
        printf("\nel menor numerro ingresado %d y es el cuarto numero",num4);
    }


    return 0;
}
