/*desarollar un programa, que me permita extraer la media, moda, y la mediana, el numero mayor y el menor de 10 numeros ingresados por teclado
*/
#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float numeros[10];
    float ordenados[10];
    float modaRes[5];
    float mid;
    float max, min;

    ingresonumeros(numeros);
    printf("La mediana es: %.2f\n", mediana(numeros, ordenados, &max, &min, 10, modaRes, &mid));
    printf("La media es: %.2f\n", mid);
    printf("\nEl numero maximo es: %.2f\n", max);
    printf("El numero minimo es: %.2f\n", min);
    return 0;
}
