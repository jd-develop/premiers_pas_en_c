/*
 * Consignes :
 * Créez un quatrième programme qui réalise la division de deux nombres. Vous pourrez vous amuser à le tester avec
 * une division par 0 ! La solution à ce petit problème sera vu dans le chapitre sur les conditions (if).
 */
#include <stdio.h>

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
    printf("Valeur de a/b (5 chiffres après la virgule) : %.5f\n", d);
    return 0;
}
