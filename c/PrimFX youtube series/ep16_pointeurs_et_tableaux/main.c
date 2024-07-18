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


void remplirTableau(int tab[], int len) {
    int i;
    for (i=0; i<len; i++)
        tab[i] = 100*i;
}


int main() {
    int tab[58];
    int len = 10;

    printf("%p\n", tab);
    printf("%p\n", &tab[0]);

    remplirTableau(tab, len);
    printTab(tab, len, 1);

    printf("%d, %d\n", tab[5], *(tab+5));

    return 0;
}
