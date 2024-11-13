/*desarollar un programa, que me permita extraer la media, moda, y la mediana, el numero mayor y el menor de 10 numeros ingresados por teclado
*/
#include <stdio.h>
#include "funciones.h"

void ingresonumeros(float *numero){
    for(int i = 0; i < 10; i++){
        printf("Cual es el valor del numero %d ? \n", i);
        scanf("%f", &numero[i]); // Se usa &numero[i] para pasar la dirección
    }
}
float mediana(float *numero, float *norden, float *max, float *min, int n, float moda[5], float *media) {

    // Copiar los números a norden
    for (int i = 0; i < n; i++) {
        norden[i] = numero[i];
    }

    // Ordenar los números en norden usando el método burbuja
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (norden[j] > norden[j + 1]) {
                float temp = norden[j];
                norden[j] = norden[j + 1];
                norden[j + 1] = temp;
            }
        }
    }

    // Calcular el valor mínimo y máximo
    *max=norden[9];
    *min=norden[0];
    //calcular la moda
    int limrep = 0;
    int reps = 0;
    int z = 0;

    for(int i = 0; i < 10; i++){
        reps = 0;
        for(int j = 0; j < 10; j++){
            if(numero[i] == numero[j]){
                reps++;
            }
        }
        if(reps > limrep){
            limrep = reps;
            for(int k=0;k<5;k++){
                moda[i]=0;
            }
            z = 0;
            moda[z] = numero[i];
            z++;
        } 
        if(reps == limrep && numero[i]!=moda[z-1]){
            moda[z] = numero[i];
            z++;
        }
    }
    if(limrep > 1){
        printf("La moda del grupo de numeros es igual a: ");
        for (int j=0; j<z; j++){
            printf("%2.f ", moda[j]);

        }
        printf("\n");
    }else{
        printf("No existe moda (No existen numeros que se repitan) ");
        printf("\n");
    }
    //calcular la media
    float suma = 0; // Inicializar suma
    for(int i = 0; i < 10; i++){
        suma += numero[i];
    }
    *media = suma / 10; // Dividir por 10.0 para obtener un resultado flotante

    // Calcular la mediana
    float resultado= norden[5]+norden[6];
    resultado=resultado/2;
    return resultado;

}