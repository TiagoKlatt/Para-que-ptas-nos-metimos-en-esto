// Módulo de Validaciones e Interfaz: Funciones dedicadas al ingreso seguro de datos
#include <stdio.h>
#include "validaciones.h"

double leer_flotante(const char *mensaje, double min, double max) {
    double valor;
    int resultado_scanf;

    do {
        printf("%s", mensaje);
        resultado_scanf = scanf("%lf", &valor);

        // Limpiar el búfer de entrada completamente para evitar bucles infinitos por caracteres inválidos
        while (getchar() != '\n');

        // Validar si la entrada fue un número válido y si se encuentra dentro del rango permitido
        if (resultado_scanf != 1) {
            printf("[Error de formato] Por favor, ingrese un numero valido.\n");
        } else if (valor < min || valor > max) {
            printf("[Error de rango] El valor debe estar comprendido entre %.2f y %.2f.\n", min, max);
        }

    } while (resultado_scanf != 1 || valor < min || valor > max);

    return valor;
}