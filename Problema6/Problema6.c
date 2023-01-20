/*
* Implemente el algoritmo de multiplicación de matrices utilizando
* memoria dinámica, la multiplicación debe ser entre matrices cuadradas
* o rectangulares.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int **matriz1, **matriz2, **matriz3, n, m, i, j, k, aux;
    printf("Ingrese el número de filas de la matriz 1: ");
    scanf("%d", &n);
    printf("Ingrese el número de columnas de la matriz 1: ");
    scanf("%d", &m);
    matriz1 = (int **)malloc(n * sizeof(int *));
    for(i = 0; i < n; i++){
        matriz1[i] = (int *)malloc(m * sizeof(int));
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Ingrese el elemento %d, %d de la matriz 1: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("Ingrese el número de filas de la matriz 2: ");
    scanf("%d", &n);
    printf("Ingrese el número de columnas de la matriz 2: ");
    scanf("%d", &m);
    matriz2 = (int **)malloc(n * sizeof(int *));
    for(i = 0; i < n; i++){
        matriz2[i] = (int *)malloc(m * sizeof(int));
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Ingrese el elemento %d, %d de la matriz 2: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }
    matriz3 = (int **)malloc(n * sizeof(int *));
    for(i = 0; i < n; i++){
        matriz3[i] = (int *)malloc(m * sizeof(int));
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            aux = 0;
            for(k = 0; k < n; k++){
                aux += matriz1[i][k] * matriz2[k][j];
            }
            matriz3[i][j] = aux;
        }
    }
    printf("La matriz 3 es: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < n; i++){
        free(matriz1[i]);
        free(matriz2[i]);
        free(matriz3[i]);
    }
    free(matriz1);
    free(matriz2);
    free(matriz3);
    return 0;
}