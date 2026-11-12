// Módulo de Validaciones e Interfaz.
#ifndef VALIDACIONES_H
#define VALIDACIONES_H
// Función segura para leer números flotantes con validación de tipo y rango
double leer_flotante(const char *msg, double min, double max);
int leer_entero(const char *msg, int min, int max);
void limpiar_buffer(void);

#endif
