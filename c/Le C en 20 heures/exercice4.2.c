/*
 * Consigne :
 * Faites saisir une variable de type entier et indiquez à l'utilisateur si celle-ci est strictement positive, strictement
 * négative ou nulle.
 */
#include <stdio.h>

int main() {
    int a;
    printf("Valeur de a : ");
    scanf("%d", &a);
    if (a > 0)
        printf("Strictement positif\n");
    else if (a < 0)
        printf("Strictement négatif\n");
    else
        printf("Nul\n");

    return 0;
}
