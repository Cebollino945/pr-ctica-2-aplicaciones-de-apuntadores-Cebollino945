// 7. Accediendo a la Memoria
#include <stdio.h>


int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = arr;
    for(int i=0; i<5; i++)
    printf("la direccion de memoria del arreglo %d es: %p \n",*(ptr+i),*(ptr+i) );
    // Código para imprimir direcciones de memoria aquí
    return 0;
}

