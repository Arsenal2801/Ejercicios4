/*
 * Implemente un algoritmo de ordenamiento creando con realloc la
 * memoria dinámica del arreglo a ordenar. En este ejercicio la ejecución
 * del programa se debe repetir utilizando do-while y en cada ejecución del
 * programa cambiar el tamaño del arreglo que se va a ordenar.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arreglo=NULL, n, i, j, aux;
    do{
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &n);
        arreglo = (int *)realloc(arreglo, n * sizeof(int));
        for(i = 0; i < n; i++){
            printf("Ingrese el elemento %d: ", i + 1);
            scanf("%d", &arreglo[i]);
        }
        for(i = 0; i < n; i++){
            for(j = 0; j < n - 1; j++){
                if(arreglo[j] > arreglo[j + 1]){
                    aux = arreglo[j];
                    arreglo[j] = arreglo[j + 1];
                    arreglo[j + 1] = aux;
                }
            }
        }
        printf("El arreglo ordenado es: ");
        for(i = 0; i < n; i++){
            printf("%d ", arreglo[i]);
        }
        printf("\n");
    }while(n != 0);
    free(arreglo);
    return 0;
}