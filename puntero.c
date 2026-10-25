#include <stdio.h>

void main() {

    int x = 42; 
    int *mi_puntero = &x; 

    printf("Valor de x: %d\n", x);
    printf("Valor del  puntero (dirección): %p\n", mi_puntero);
    printf("Valor apuntado por mi_puntero: %d\n", *mi_puntero);
}
