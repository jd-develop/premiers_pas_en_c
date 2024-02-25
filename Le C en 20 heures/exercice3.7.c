/*
 * Consignes :
 * La fonction ceilf permet d'obtenir l'arrondi entier supérieur d'un flottant. Utilisez cette fonction pour calculer l'arrondi
 * supérieur de (a/b).
 */
#include <stdio.h>
#include <math.h>

int main() {
    float a = 0;
    float b = 0;
    float d = 0;
    printf("Calculatrice :\n\n");
    printf("Valeur de a : ");
    scanf("%f", &a);
    printf("Valeur de b : ");
    scanf("%f", &b);
    d = a / b;
    printf("Valeur de a/b (arrondie à l’unité supérieure) : %.0f\n", ceilf(d));
    return 0;
}
