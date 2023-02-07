#include <stdio.h>

int main() {
    //type nom[taille];
    int tab[3] = {5, 20, 30};  // this notation with brackets is valid ONLY when initializing the array
    int i;
    int j;

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

    printf("\n");

    int tab2d[3][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};
    
    printf("{");
    for (i=0; i<3; i++) {
        if (i != 0)
            printf(" ");
        printf("{");
        for (j=0; j<3; j++) {
            printf("%d", tab2d[i][j]);
            if (j != 2)
                printf(", ");
        }
        printf("}");
        if (i != 2)
                printf(",\n");
    }
    printf("}\n");

    return 0;
}
