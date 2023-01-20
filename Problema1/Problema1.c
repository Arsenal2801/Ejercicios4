/*
    * Implemente un programa de C que muestre cómo generar memoria
    * dinámica para todos los tipos de dato primitivos, asigne y muestre los
    * datos de cada bloque de memoria.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    // ! Declaración de variables y punteros
    int *p1;
    float *p2;
    double *p3;
    char *p4;
    long *p5;
    short *p6;
    long double *p7;
    long long *p8;
    unsigned int *p9;
    unsigned long *p10;
    unsigned short *p11;
    unsigned long long *p12;
    unsigned char *p13;
    signed int *p14;
    signed long *p15;
    signed short *p16;
    signed long long *p17;
    signed char *p18;

    // ! Asignación de memoria
    p1 = (int *)malloc(sizeof(int));
    p2 = (float *)malloc(sizeof(float));
    p3 = (double *)malloc(sizeof(double));
    p4 = (char *)malloc(sizeof(char));
    p5 = (long *)malloc(sizeof(long));
    p6 = (short *)malloc(sizeof(short));
    p7 = (long double *)malloc(sizeof(long double));
    p8 = (long long *)malloc(sizeof(long long));
    p9 = (unsigned int *)malloc(sizeof(unsigned int));
    p10 = (unsigned long *)malloc(sizeof(unsigned long));
    p11 = (unsigned short *)malloc(sizeof(unsigned short));
    p12 = (unsigned long long *)malloc(sizeof(unsigned long long));
    p13 = (unsigned char *)malloc(sizeof(unsigned char));
    p14 = (signed int *)malloc(sizeof(signed int));
    p15 = (signed long *)malloc(sizeof(signed long));
    p16 = (signed short *)malloc(sizeof(signed short));
    p17 = (signed long long *)malloc(sizeof(signed long long));
    p18 = (signed char *)malloc(sizeof(signed char));

    // ! Asignación de valores
    *p1 = 1;
    *p2 = 2.0;
    *p3 = 3.0;
    *p4 = '4';
    *p5 = 5;
    *p6 = 6;
    *p7 = 7;
    *p8 = 8;
    *p9 = 9;
    *p10 = 10;
    *p11 = 11;
    *p12 = 12;
    *p13 = '13';
    *p14 = 14;
    *p15 = 15;
    *p16 = 16;
    *p17 = 17;
    *p18 = '18';

    // ! Impresión de valores
    printf("p1 = %d \t p2 = %f \t p3 = %f \t p4 = %c \t p5 = %ld \t p6 = %d \t p7 = %Lf \t p8 = %lld \t p9 = %u \t p10 = %lu \t p11 = %u \t p12 = %llu \t p13 = %c \t p14 = %d \t p15 = %ld \t p16 = %d \t p17 = %lld \t p18 = %c \t", *p1, *p2, *p3, *p4, *p5, *p6, *p7, *p8, *p9, *p10, *p11, *p12, *p13, *p14, *p15, *p16, *p17, *p18); 

    // ! Liberación de memoria
    free(p1);
    free(p2);
    free(p3);
    free(p4);
    free(p5);
    free(p6);
    free(p7);
    free(p8);
    free(p9);
    free(p10);
    free(p11);
    free(p12);
    free(p13);
    free(p14);
    free(p15);
    free(p16);
    free(p17);
    free(p18);

    return 0;
}