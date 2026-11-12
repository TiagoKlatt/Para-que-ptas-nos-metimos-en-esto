// Módulo de Validaciones e Interfaz: Funciones dedicadas al ingreso seguro de datos
#include <stdio.h>
#include "validaciones.h"

void limpiar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

double leer_flotante(const char *msg, double min, double max) {
    double val;
    int ok;
    do {
        printf("%s", msg);
        ok = scanf("%lf", &val);
        limpiar_buffer(); // Limpieza obligatoria en cada iteración
        
        if (ok != 1 || val < min || val > max) {
            printf("Error: ingrese un valor valido entre %.2f y %.2f.\n", min, max);
        }
    } while (ok != 1 || val < min || val > max);
    
    return val;
}

int leer_entero(const char *msg, int min, int max) {
    int val, ok;
    do {
        printf("%s", msg);
        ok = scanf("%d", &val);
        limpiar_buffer(); // Limpieza obligatoria contra bucles infinitos
        
        if (ok != 1 || val < min || val > max) {
            printf("Error: ingrese un entero valido entre %d y %d.\n", min, max);
        }
    } while (ok != 1 || val < min || val > max);
    
    return val;
}
