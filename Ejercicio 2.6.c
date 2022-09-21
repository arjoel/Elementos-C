#include <stdio.h>

/*El precio para un vuelo es de $8800 en clase turista y se aplica un incremento del 30% en primera clase.
Se ingresan la cantidad de pasajes vendidos de clase turista y de primera clase.
Obtener la recaudación total del vuelo. */


int main()
{

    int clase_turista = 8800;
    int primera_clase_adicion;
    int clase_turista_vendidos= 20;
    int primera_clase_vendidos= 10;
    int recaudacion_total;
    int primera_clase;

    primera_clase_adicion = (clase_turista * 30)/ 100;
    primera_clase= primera_clase_adicion+clase_turista;
    recaudacion_total = primera_clase+clase_turista;



    printf ("\nSe vendieron %d vuelos en la clase turista", clase_turista_vendidos);
    printf ("\nSe vendieron %d vuelos en la primera clase", primera_clase_vendidos);
    printf ("\nLa recaudacion total fue de %d",recaudacion_total);




    return 0;

}
