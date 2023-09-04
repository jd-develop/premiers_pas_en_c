#include <stdio.h>
#include <stdlib.h>


int main() {
    int * pa = malloc(sizeof(int));

    if (pa == NULL) {
        printf("Erreur malloc\n");
        return 1;
    }

    *pa = 10;

    printf("Adresse pointée: %p\n", pa);
    printf("Valeur à l’adresse pointée: %d\n", *pa);

    /*
    il faut éviter les memory leaks tout de même (bon là c’est inutile avec le return mais il faut prendre les
    bonnes habitudes)
    */
    free(pa);

    // AVEC LES TABLEAUX
    // int tab[5];
    int * tab = malloc(5 * sizeof(int));
    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;
    tab[3] = 4;
    tab[4] = 5;

    int i = 0;
    for (i; i<5; i++) printf("%d ", tab[i]);
    printf("\n");

    free(tab);

    return 0;
}
