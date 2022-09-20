#include <stdio.h>
//Se ingresan las notas de dos evaluaciones de un alumno. Determinar la nota promedio.

int main()
{

    int nota1;
    int nota2;
    float promedio;
    int suma = 0;


    printf ("Ingrese la primer nota : ");
    scanf ("%i", &nota1);
    printf ("Ingrese la primer nota : ");
    scanf ("%i", &nota2);
    suma+= nota1+nota2;
    promedio = suma / 2;

    printf ("La nota promedio fue de : %f", promedio);

    return 0;

}
