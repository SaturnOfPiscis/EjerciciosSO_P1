// Programa Calculadora Equipo 4
//INSTITUTO POLITECNICO NACIONAL


#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, opcion;

    do
    {
        printf( "\n   1. Calcular suma.");
        printf( "\n   2. Calcular resta.");
        printf( "\n   3. Calcular multiplicación.");
        printf( "\n   4. Calcular división.");
        printf( "\n   5. Salir.");
        printf( "\n\n   Introduzca opcion (1-5): ");

        scanf( "%d", &opcion );

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1:
                    break;

             case 2:
                    break;

             case 3:
                    break;
             
             case 4:
                    break;
         }

         /* Fin del anidamiento */

    } while ( opcion != 5);

    return 0;
}

float sumar(float n1, float n2) {
    return n1 + n2;
}
