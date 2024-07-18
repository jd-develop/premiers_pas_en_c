#include <stdio.h>
#define TAILLE_TAB 10  // macro préprocesseur

int main() {
    const int A = 10;  // constante C
    int tab[TAILLE_TAB];

    printf("Taille tableau : %d\n", TAILLE_TAB);
    printf("A = %d\n", A);

    printf("Je suis à la ligne %d\n", __LINE__);

    printf("Je suis à la ligne %d dans le fichier %s\n", __LINE__, __FILE__);

    return 0;
}
