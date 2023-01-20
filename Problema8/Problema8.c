/*
Implemente un algoritmo de ordenamiento creando el arreglo con
memoria dinámica. El algoritmo de ordenamiento debe estar
implementado en una función.
*/
#include <stdio.h>
#include <stdlib.h>

// ! Función de ordenamiento
void ordenar(int *arreglo, int n){
    int i, j, aux;
    for(i = 0; i < n; i++){
        for(j = 0; j < n - 1; j++){
            if(arreglo[j] > arreglo[j + 1]){
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }
}

// ! Función principal
int main(){
    int *arreglo, n, i;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    arreglo = (int *)calloc(n, sizeof(int));
    for(i = 0; i < n; i++){
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    ordenar(arreglo, n);
    printf("El arreglo ordenado es: ");
    for(i = 0; i < n; i++){
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    free(arreglo);
    return 0;
}