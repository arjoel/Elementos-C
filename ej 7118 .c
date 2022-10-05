#include <stdio.h>
#include <string.h>

/*Se procesan los datos de los casi 90 alumnos de un turno de la materia Elementos de Programación. Por
cada alumno se ingresan:
• DNI (entero, mayor que cero y menor que 99.999.999).
• Nota del Parcial 1 (entero, de 0 a 10).
• Nota del Parcial 2 (entero, de 0 a 10).
• Porcentaje de asistencia (real, mayor o igual a cero).
Para finalizar, se ingresa un DNI igual a cero.
Se pide informar con las leyendas aclaratorias y/o títulos:
a. Según los parciales si promocionó, aprobó, reprobó o estuvo ausente (uno o ambos parciales igual
a cero).
b. Listar los alumnos que no cumplen con la asistencia (mayor o igual a 75%).
c. Informar cuántos alumnos que promocionaron NO cumplen en la asistencia.
d. Informar los alumnos que sacaron 10 en el parcial 2.
e. Informar los alumnos con menor asistencia (puede haber varios).
f. Al finalizar, informar el promedio total de notas de cada parcial y de asistencia.
*/

int main()
{

    int dni;
    int primer_parcial;
    int segundo_parcial;
    int asistencia;
    int reprobar = 3;
    int aprobar = 4;
    int promocionar = 7;
    float nota;
    printf("Ingrese su numero de dni: ");
    scanf("%d", &dni);
    if ( dni > 0 && dni < 99999999)
    {
        printf("ingrese su nota de su primer parcial: ");
        scanf("%d",&primer_parcial);
        printf("ingrese su nota del segundo parcial: ");
        scanf("%d",&segundo_parcial);
        nota = (primer_parcial+segundo_parcial) / 2;
        if (nota <= reprobar )
        {
            printf("\nusted reprobo por nota");
        }
        else if ( nota <= aprobar && nota < promocionar)
        {
            printf("\nusted aprobo por nota");
        }
        else if (nota > promocionar )
        {
            printf("\nusted promociono por nota");
        }

        printf("\ningrese su asistencia: ");
        scanf("%d", &asistencia);
        asistencia = asistencia / cantidad;

        if (asistencia < 75 || asistencia > 0)
        {
            printf("\nUsted no asistio lo suficiente");
        }
        else printf("\nUsted asistio");
        if (asistencia < 75 && nota >= promocionar)
        {
            printf("\nusted promociono, pero no asistio lo suficiente");
        }

        if (segundo_parcial = 10)
        {
            printf("\nusted se saco un 2 en el segundo parcial");
        }

    }


    printf("\nSu promedio es de  %.2f ",nota);


    return 0;

}
