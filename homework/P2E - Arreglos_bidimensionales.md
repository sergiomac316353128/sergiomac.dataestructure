#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUMNOS 25
#define MAX_LONGITUD 25  

int main() {
    char alumnos[MAX_ALUMNOS][3][MAX_LONGITUD];  
    int cantidad = 0;
    char opcion[3];
    int i;

    do {
        printf("Ingrese el nombre del alumno %d: ", cantidad + 1);
        scanf(" %24[^\n]", alumnos[cantidad][0]);

        printf("Ingrese la edad de %s: ", alumnos[cantidad][0]);
        scanf(" %24s", alumnos[cantidad][1]);

        printf("Ingrese la calificación de %s: ", alumnos[cantidad][0]);
        scanf(" %24s", alumnos[cantidad][2]);

        cantidad++;

        if (cantidad >= MAX_ALUMNOS) {
            printf("Se alcanzó el número máximo de alumnos (%d).\n", MAX_ALUMNOS);
            break;
        }

        printf("¿Desea agregar otro alumno? (si/no): ");
        scanf(" %2s", opcion);

    } while (strcmp(opcion, "si") == 0);

   
    int suma_edades = 0;
    int suma_calificaciones = 0;

    for (i = 0; i < cantidad; i++) {
        int edad = atoi(alumnos[i][1]);       
        int calif = atoi(alumnos[i][2]);      
        suma_edades += edad;
        suma_calificaciones += calif;
    }

    printf("\nPromedio de edad: %.2f\n", (char)suma_edades / cantidad);
    printf("Promedio de calificación: %.2f\n", (char)suma_calificaciones / cantidad);

    
    printf("\n%-5s %-25s %-10s %-15s\n", "No.", "Nombre", "Edad", "Calificación");
    printf("-------------------------------------------------------------\n");
    for (i = 0; i < cantidad; i++) {
        printf("%-5d %-25s %-10s %-15s\n", i + 1, alumnos[i][0], alumnos[i][1], alumnos[i][2]);
    }

    
    printf("\nNombres en orden inverso:\n");
    for (i = cantidad - 1; i >= 0; i--) {
        printf("%s\n", alumnos[i][0]);
    }

    return 0;
}
