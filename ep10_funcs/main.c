#include <stdio.h>

/*
type nom(param*) {
    (code)
    return valeur;
}
*/

void bonjour() {
    printf("Bonjour !\n");
}


int carre(int n) {
    return n * n;
}


int max(int a, int b) {
    if (a < b)
        return b;
    else
        return a;
}


int main() {
    int i;
    int j;
    int k;

    bonjour();
    printf("Entrez un nombre : ");
    scanf("%d", &i);
    printf("Le carré de %d est %d.\n", i, carre(i));

    printf("Entrez un nombre : ");
    scanf("%d", &j);
    printf("Entrez un autre nombre : ");
    scanf("%d", &k);
    printf("Le a valeur maximum entre %d et %d est %d.\n", j, k, max(j, k));

    return 0;
}
