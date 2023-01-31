#include <stdio.h>

int main() {
    //type nom[taille];
    int tab[3] = {5, 20, 30};  // this notation with brackets is valid ONLY when initializing the array
    int i;

    printf("%d\n", tab[0]);
    printf("%d\n", tab[1]);
    printf("%d\n\n", tab[2]);

    tab[0] = 10;
    printf("%d\n", tab[0]);
    printf("%d\n", tab[1]);
    printf("%d\n\n", tab[2]);

    // print a tab
    printf("{");
    for (i=0; i<3; i++) {
        printf("%d", tab[i]);
        if (i != 2)
            printf(", ");
    }
    printf("}\n");

    return 0;
}
