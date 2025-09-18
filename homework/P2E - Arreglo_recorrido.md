/*
sergio ignacio de la crus rodriguez 
n.cuenta: 316353128

*/
#include <stdio.h>

#define MAX 10

		 int main() {
		    int matriz[MAX][MAX], n, m;
		    int i, j, d;
		    char continuar;

    do {
       
        printf("Introduce el número de filas (n, máximo 10): ");
        scanf("%d", &n);
        printf("Introduce el número de columnas (m, máximo 10): ");
        scanf("%d", &m);

        if (n > MAX || m > MAX || n <= 0 || m <= 0) {
            printf("Dimensiones inválidas. \n");
            continue;
        }

     
        printf("\nIntroduce los elementos de la matriz: \n");
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++) {
                printf("Elemento [%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
            }

       
        printf("\nRecorrido por filas: \n");
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                printf("[%d][%d] = %d\n", i, j, matriz[i][j]);

       
        printf("\nRecorrido por columnas desde la última hacia la primera: \n");
        for (j = m - 1; j >= 0; j--)
            for (i = n - 1; i >= 0; i--)
                printf("[%d][%d] = %d \n", i, j, matriz[i][j]);

      
        printf("\nRecorrido diagonal: \n");
        for (d = 0; d < n + m - 1; d++) {
            for (i = 0; i <= d; i++) {
                j = d - i;
                if (i < n && j < m)
                    printf("[%d][%d] = %d\n", i, j, matriz[i][j]);
            }
        }

        
        printf("\n¿Deseas realizar otro recorrido? (si/no): ");
        scanf(" %c", &continuar);

    } while (continuar == 'si' || continuar == 'no');

    printf("Programa finalizado.\n");
    return 0;
}
