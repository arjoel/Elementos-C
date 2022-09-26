#include <stdio.h>

/*Una farmacia vende algunos artículos sin descuento y a otros con descuento del 20%. Confeccionar un
programa que recibiendo el precio original y un código que indica si es o no con descuento, informe el
precio final (0 no aplica el descuento y 1 aplica el descuento).
*/

int main()
{
    float tiene_descuento;
    int producto;
    printf("ingrese el precio del producto: ");
    scanf("%d", &producto);
    printf ("Ingrese 1 si tiene descuento, ingrese 0 si no tiene descuento: ");
    scanf("%f", &tiene_descuento);

    if (tiene_descuento == 1)
    {
        printf("El producto tiene descuento\n %.2f", producto * 0.8);
    }

    if (tiene_descuento == 0)
    {
        printf("El producto no tiene descuento\n %d", producto);
    }
//el tiene_descuento es 0 o 1, no se le puede asignar otra cosa

    return 0;
}
