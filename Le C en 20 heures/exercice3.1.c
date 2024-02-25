/*
 * Consignes :
 * Écrivez un programme qui :
 * - écrit « Calculatrice : » et saute 2 lignes…
 * - écrit « Valeur de a : » et saute 1 ligne
 * - attend l'appui d'une touche
 * - écrit « Valeur de b : » et saute 1 ligne
 * - attend l'appui d'une touche
 * - écrit « Valeur de a + b : »
 */
#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int s = 0;
    printf("Calculatrice :\n\n");
    printf("Valeur de a : ");
    scanf("%d", &a);
    printf("Valeur de b : ");
    scanf("%d", &b);
    s = a + b;
    printf("Valeur de a+b : %d\n", s);
    return 0;
}
