#include <stdio.h>

// de la cruz rodrigues sergio ignacio 


void presentacion (){

printf ("Nombre: sergio\n\n");
printf ("Universidad: fes acatlan, Matematicas Aplicadas y Computacion\n\n ");
printf ("N.Cta 316353128:\n\n");
printf ("arreglo, numero de cuenta\n\n" );


system("pause");
}








void ordenar_descendente(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int numeros[10];
    int i, cuenta, ultimoDigito;
    char opcion;
	presentacion();
    
    system("cls");

    do {
       
        printf("\nIngrese 10 números:\n");
        for (i = 0; i < 10; i++) {
            printf("Número [%d]: ", i);
            scanf("%d", &numeros[i]);
        }

        
        ordenar_descendente(numeros, 10);

        
        printf("\nNúmeros ordenados de mayor a menor:\n| ");
        for (i = 0; i < 10; i++) {
            printf("%3d |", numeros[i]);
        }
        printf("\n");

        
        printf("\nIngrese su número de cuenta: ");
        scanf("%d", &cuenta);

        
        ultimoDigito = cuenta % 10;

        
        if (ultimoDigito >= 0 && ultimoDigito < 10) {
            numeros[ultimoDigito] = -1;
        }

        
        printf("\nArreglo modificado:\n");
        printf("Índice |");
        for (i = 0; i < 10; i++) {
            printf(" %3d |", i);
        }
        printf("\nValor  |");
        for (i = 0; i < 10; i++) {
            printf(" %3d |", numeros[i]);
        }
        printf("\n");

      
        printf("\n¿Desea continuar? (s/n): ");
        scanf(" %c", &opcion);

    } while (opcion == 's' || opcion == 'n');

    printf("\nPrograma finalizado.\n");
    return 0;
}

