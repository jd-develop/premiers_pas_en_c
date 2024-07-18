#include <stdio.h>


void printTab(int *tab, int len, int backlineAtTheEnd) {
    // print a tab
    int i;

    printf("{");
    for (i=0; i<len; i++) {        
        printf("%d", tab[i]);
        
        if (i != len-1)
            printf(", ");
    }
    printf("}");
    if (backlineAtTheEnd)
        printf("\n");
}


void print2dTab(int len1, int len2, int tab[len1][len2]) {
    int i;
    printf("{");
    for (i=0; i<len1; i++) {
        if (i != 0)
            printf(" ");
        printTab(tab[i], len2, 0);

        if (i != len1-1)
            printf(",\n");
    }
    printf("}\n");
}


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

    printTab(tab, 3, 1);

    printf("\n");

    int tab2d[3][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};

    print2dTab(3, 3, tab2d);

    return 0;
}
