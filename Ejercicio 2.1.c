#include <stdio.h>
//Se ingresan la cantidad de horas trabajadas y el valor por hora de un empleado. Determinar el sueldo.

int main()
{

int sueldo, canthora, cantvalor;


printf ("Cuanto deberia ganar por horas trabajadas?");
scanf ("%d", &canthora);

printf ("Cuanto deberia ganar por hora?");
scanf ("%d", &cantvalor);

sueldo = canthora*cantvalor;

printf ("El sueldo es de %d", sueldo);

    return 0;

}
