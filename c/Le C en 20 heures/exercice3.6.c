/*
 * Consignes :
 * Utilisez cette dernière fonction pour calculer la valeur absolue de (a-b).
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0;
    int b = 0;
    int d = 0;
    printf("Calculatrice :\n\n");
    printf("Valeur de a : ");
    scanf("%d", &a);
    printf("Valeur de b : ");
    scanf("%d", &b);
    d = abs(a - b);
    printf("Valeur de |a-b| : %d\n", d);
    return 0;
}
