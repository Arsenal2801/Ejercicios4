/*
Implemente un programa que asigne y muestre los datos de un arreglo
bidimensional de tamaño 10 x 15.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    // ! Aquí se implementa el arreglo bidimensional.
    int **arreglo, i, j;
    // ! Se asigna memoria para el arreglo bidimensional.
    arreglo = (int **)malloc(10 * sizeof(int *));
    // ! Se asigna memoria para cada fila del arreglo bidimensional.
    for(i = 0; i < 10; i++){
        arreglo[i] = (int *)malloc(15 * sizeof(int));
    }
    // ! Se asignan valores al arreglo bidimensional.
    for(i = 0; i < 10; i++){
        for(j = 0; j < 15; j++){
            arreglo[i][j] = i + j;
        }
    }
    // ! Se muestran los valores del arreglo bidimensional.
    for(i = 0; i < 10; i++){
        for(j = 0; j < 15; j++){
            printf("%d ", arreglo[i][j]);
        }
        printf("\n");
    }
    // ! Se libera la memoria del arreglo bidimensional.
    for(i = 0; i < 10; i++){
        free(arreglo[i]);
    }
    free(arreglo);
    return 0;
}